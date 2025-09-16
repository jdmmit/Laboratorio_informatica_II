\
            /* RLE C-style */
            #include <stdio.h>
            #include <string.h>
            #include <stdlib.h>
            #include <ctype.h>

            char* rleCompress(const char *plain) {
                int L = strlen(plain);
                // worst case each char becomes "1X" so allocate 3*L
                char *out = (char*)malloc(3*L + 10);
                int pos = 0;
                for (int i=0;i<L;) {
                    char c = plain[i];
                    int j=i+1;
                    while (j<L && plain[j]==c) ++j;
                    int run = j-i;
                    pos += sprintf(out+pos, "%d", run);
                    out[pos++] = c;
                    i = j;
                }
                out[pos] = '\\0';
                return out;
            }

            int rleDecompress(const char *in, char **out) {
                int L = strlen(in); int i=0;
                int alloc = 256; *out = (char*)malloc(alloc);
                int outpos = 0;
                while (i<L) {
                    if (!isdigit(in[i])) return 0;
                    int num = 0;
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
                const char *plain = "AAAAABBBCCDAA";
                char *comp = rleCompress(plain);
                printf("Comp: %s\n", comp);
                char *decomp;
                if (rleDecompress(comp, &decomp)) {
                    printf("Decomp: %s\n", decomp);
                    free(decomp);
                } else {
                    printf("Error decompress\n");
                }
                free(comp);
                return 0;
            }
