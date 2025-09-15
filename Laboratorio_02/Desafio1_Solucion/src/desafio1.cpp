// desafio1.cpp
// Implementación base para Desafío 1
// Restricciones: no usar STL ni std::string ni struct.
// Usa punteros, arreglos y memoria dinámica.
// Interfaz: ./desafio1 <hex_string> <known_fragment>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cctype>

using namespace std;

// --- Helpers ---

// Convert a hex char to value (0-15), returns -1 on error.
int hexval(char c) {
    if(c >= '0' && c <= '9') return c - '0';
    if(c >= 'A' && c <= 'F') return 10 + (c - 'A');
    if(c >= 'a' && c <= 'f') return 10 + (c - 'a');
    return -1;
}

// Convert hex string to bytes. Returns allocated buffer and sets out_len. 
// Caller must free returned pointer.
unsigned char* hex_to_bytes(const char* hex, int* out_len) {
    int L = strlen(hex);
    // If odd length, invalid
    if(L % 2 != 0) { *out_len = 0; return NULL; }
    int n = L / 2;
    unsigned char* buf = (unsigned char*) malloc(n);
    if(!buf) { *out_len = 0; return NULL; }
    for(int i=0;i<n;i++) {
        int hi = hexval(hex[2*i]);
        int lo = hexval(hex[2*i+1]);
        if(hi < 0 || lo < 0) { free(buf); *out_len = 0; return NULL; }
        buf[i] = (unsigned char)((hi << 4) | lo);
    }
    *out_len = n;
    return buf;
}

// Rotate right n (0<n<8) for a byte
unsigned char rot_right(unsigned char x, int n) {
    return (unsigned char)((x >> n) | (x << (8 - n)));
}

// Apply decryption: for each byte b_enc do b = rot_right(b_enc ^ K, n)
unsigned char* decrypt_bytes(const unsigned char* enc, int len, int n, unsigned char K) {
    unsigned char* out = (unsigned char*) malloc(len);
    if(!out) return NULL;
    for(int i=0;i<len;i++) {
        unsigned char t = enc[i] ^ K;
        out[i] = rot_right(t, n);
    }
    return out;
}

// Check whether buffer contains only allowed characters: A-Z a-z 0-9 and space
bool is_valid_plaintext(const unsigned char* buf, int len) {
    for(int i=0;i<len;i++) {
        unsigned char c = buf[i];
        if( (c >= 'A' && c <= 'Z') ||
            (c >= 'a' && c <= 'z') ||
            (c >= '0' && c <= '9') ||
            c == ' ' ) continue;
        return false;
    }
    return true;
}

// ---------------- RLE decompression (ASCII textual): digits + symbol
// Input: bytes buffer and length.
// Output: allocated char* NUL-terminated string or NULL on error. Caller must free.
char* rle_decompress_text(const unsigned char* buf, int len) {
    // We'll parse digits then a symbol, repeatedly.
    // First pass: estimate output length (sum of counts)
    long total = 0;
    int i = 0;
    while(i < len) {
        // read digits
        if(!isdigit(buf[i])) return NULL;
        long val = 0;
        while(i < len && isdigit(buf[i])) {
            val = val * 10 + (buf[i] - '0');
            // protect against absurd sizes
            if(val > 10000000) return NULL;
            i++;
        }
        if(i >= len) return NULL; // expecting symbol
        unsigned char sym = buf[i++];
        total += val;
        if(total > 10000000) return NULL;
    }
    // allocate output
    char* out = (char*) malloc(total + 1);
    if(!out) return NULL;
    int pos = 0;
    i = 0;
    while(i < len) {
        long val = 0;
        while(i < len && isdigit(buf[i])) {
            val = val * 10 + (buf[i] - '0');
            i++;
        }
        unsigned char sym = buf[i++];
        for(long k=0;k<val;k++) out[pos++] = (char) sym;
    }
    out[pos] = '\0';
    return out;
}

// ---------------- LZ78 decompression (binary pairs): [index(1byte)][char(1byte)]
// We'll implement dictionary as arrays of char*; index 0 means empty prefix.
// Returns allocated char* NUL-terminated, or NULL on error.
char* lz78_decompress_pairs(const unsigned char* buf, int len) {
    if(len % 2 != 0) return NULL;
    int pairs = len / 2;
    // We'll keep dictionary entries in arrays; initial capacity
    int cap = pairs + 2;
    char** dict = (char**) malloc(sizeof(char*) * cap);
    int* dict_len = (int*) malloc(sizeof(int) * cap);
    if(!dict || !dict_len) { free(dict); free(dict_len); return NULL; }
    int dict_count = 0; // entries stored at indices 0..dict_count-1 mapping to dict index 1..
    // For building output, we don't know final size; we'll allocate a buffer with generous size
    int out_cap = 1024;
    char* out = (char*) malloc(out_cap);
    if(!out) { free(dict); free(dict_len); return NULL; }
    int out_len = 0;
    for(int p=0;p<pairs;p++) {
        unsigned char idx = buf[2*p]; // index in dictionary (0 means empty)
        unsigned char ch  = buf[2*p + 1];
        // Build S = (idx==0 ? "" : dict[idx-1]) + ch
        int prefix_len = 0;
        char* prefix = NULL;
        if(idx != 0) {
            int dic_index = idx - 1;
            if(dic_index < 0 || dic_index >= dict_count) {
                // invalid index
                // cleanup
                for(int z=0; z<dict_count; z++) free(dict[z]);
                free(dict); free(dict_len); free(out);
                return NULL;
            }
            prefix = dict[dic_index];
            prefix_len = dict_len[dic_index];
        }
        int s_len = prefix_len + 1;
        // allocate new dict entry
        char* s = (char*) malloc(s_len + 1);
        if(!s) { /*cleanup*/ for(int z=0; z<dict_count; z++) free(dict[z]); free(dict); free(dict_len); free(out); return NULL; }
        if(prefix_len > 0) memcpy(s, prefix, prefix_len);
        s[prefix_len] = (char) ch;
        s[s_len] = '\0';
        // append s to output
        if(out_len + s_len > out_cap) {
            // grow
            while(out_len + s_len > out_cap) out_cap *= 2;
            char* tmp = (char*) realloc(out, out_cap);
            if(!tmp) { /*cleanup*/ for(int z=0; z<dict_count; z++) free(dict[z]); free(dict); free(dict_len); free(out); return NULL; }
            out = tmp;
        }
        memcpy(out + out_len, s, s_len);
        out_len += s_len;
        // store in dict
        dict[dict_count] = s;
        dict_len[dict_count] = s_len;
        dict_count++;
    }
    // Null-terminate output
    if(out_len + 1 > out_cap) {
        char* tmp = (char*) realloc(out, out_len + 1);
        if(!tmp) { for(int z=0; z<dict_count; z++) free(dict[z]); free(dict); free(dict_len); free(out); return NULL; }
        out = tmp;
    }
    out[out_len] = '\0';
    // cleanup dict pointers (they are part of output? no, we allocated new buffers for dict entries; they must be freed separately)
    // BUT careful: we returned 'out' which contains concatenated entries; dict entries can be freed now.
    for(int z=0; z<dict_count; z++) free(dict[z]);
    free(dict); free(dict_len);
    return out;
}

// Check if hay fragment (plain C string) inside haystack (plain C string)
// Returns 1 if found, 0 otherwise
int contains_fragment(const char* haystack, const char* fragment) {
    if(!haystack || !fragment) return 0;
    int H = strlen(haystack);
    int F = strlen(fragment);
    if(F == 0) return 1;
    for(int i=0;i+F<=H;i++) {
        int ok = 1;
        for(int j=0;j<F;j++) if(haystack[i+j] != fragment[j]) { ok = 0; break; }
        if(ok) return 1;
    }
    return 0;
}

// main brute-force search
int main(int argc, char** argv) {
    if(argc < 3) {
        cout << "Uso: " << argv[0] << " <hex_string> <known_fragment>\n";
        return 1;
    }
    const char* hex = argv[1];
    const char* fragment = argv[2];
    int enc_len = 0;
    unsigned char* enc = hex_to_bytes(hex, &enc_len);
    if(!enc || enc_len == 0) { cout << "Error: entrada hex invalida\n"; return 1; }

    cout << "Bytes recibidos: " << enc_len << "\n";
    // Try combinations n=1..7, K=0..255
    for(int n=1;n<=7;n++) {
        for(int K=0; K<=255; K++) {
            unsigned char* dec = decrypt_bytes(enc, enc_len, n, (unsigned char)K);
            if(!dec) { cout << "Mem error\n"; free(enc); return 1; }
            // Try RLE textual
            char* rle_out = rle_decompress_text(dec, enc_len);
            if(rle_out) {
                // check valid characters and fragment
                if(is_valid_plaintext((unsigned char*)rle_out, strlen(rle_out)) && contains_fragment(rle_out, fragment)) {
                    cout << "=== EXITO (RLE textual) ===\n";
                    cout << "n = " << n << ", K = " << K << "\n";
                    cout << "Mensaje reconstruido:\n" << rle_out << "\n";
                    free(rle_out); free(dec); free(enc);
                    return 0;
                }
                free(rle_out);
            }
            // Try LZ78 pairs (binary)
            char* lz_out = lz78_decompress_pairs(dec, enc_len);
            if(lz_out) {
                if(is_valid_plaintext((unsigned char*)lz_out, strlen(lz_out)) && contains_fragment(lz_out, fragment)) {
                    cout << "=== EXITO (LZ78 pairs) ===\n";
                    cout << "n = " << n << ", K = " << K << "\n";
                    cout << "Mensaje reconstruido:\n" << lz_out << "\n";
                    free(lz_out); free(dec); free(enc);
                    return 0;
                }
                free(lz_out);
            }
            free(dec);
        }
    }
    cout << "No se encontró combinación que reproduzca el fragmento conocido.\n";
    free(enc);
    return 0;
}
