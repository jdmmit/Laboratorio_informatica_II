\
            /* Bruteforce C-style */
            #include <stdio.h>
            #include <stdint.h>
            #include <string.h>
            #include <ctype.h>

            uint8_t rotl(uint8_t b,int n){ return (uint8_t)((b<<n)|(b>>(8-n))); }
            uint8_t rotr(uint8_t b,int n){ return (uint8_t)((b>>n)|(b<<(8-n))); }
            uint8_t decryptByte(uint8_t c,int n,uint8_t K){ return rotr((uint8_t)(c^K), n); }

            int rleDecompress(const char *in, char **out) {
                int L = strlen(in); int i=0; int alloc=256; *out = (char*)malloc(alloc); int outpos=0;
                while (i<L) {
                    if (!isdigit(in[i])) return 0;
                    int num=0;
                    while (i<L && isdigit(in[i])) { num = num*10 + (in[i]-'0'); ++i; }
                    if (i>=L) return 0;
                    char c = in[i++];
                    if (outpos + num + 1 > alloc) { alloc = (outpos+num+1)*2; *out = (char*)realloc(*out, alloc); }
                    for (int k=0;k<num;++k) (*out)[outpos++] = c;
                }
                (*out)[outpos] = '\\0';
                return 1;
            }

            int main() {
                const char *rle = "4A3B4C4D"; int n_true=3; uint8_t K_true=0x5A;
                int L = strlen(rle); uint8_t cipher[256]; for (int i=0;i<L;++i) {
                    uint8_t b = (uint8_t)rle[i];
                    cipher[i] = (uint8_t)(((b<<n_true)|(b>>(8-n_true))) ^ K_true);
                }
                const char *frag = "BBB"; int found=0;
                for (int n=1; n<=7 && !found; ++n) {
                    for (int K=0; K<256 && !found; ++K) {
                        char plain[256]; for (int i=0;i<L;++i) plain[i] = (char)decryptByte(cipher[i], n, (uint8_t)K);
                        plain[L] = '\\0';
                        char *out;
                        if (rleDecompress(plain, &out)) {
                            if (strstr(out, frag) != NULL) {
                                printf("Found n=%d K=%d\\n", n, K);
                                printf("Msg=%s\\n", out);
                                found=1;
                            }
                            free(out);
                        }
                    }
                }
                if (!found) printf("Not found\\n");
                return 0;
            }
