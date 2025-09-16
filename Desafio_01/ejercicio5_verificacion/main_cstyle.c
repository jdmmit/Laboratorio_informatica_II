\
            /* Verify C-style */
            #include <stdio.h>
            #include <stdint.h>
            #include <string.h>
            #include <stdlib.h>

            char* rleCompress(const char *plain) {
                int L = strlen(plain); char *out = (char*)malloc(3*L+10); int pos=0;
                for (int i=0;i<L;) {
                    char c = plain[i]; int j=i+1; while (j<L && plain[j]==c) ++j;
                    int run = j-i;
                    pos += sprintf(out+pos, "%d", run);
                    out[pos++] = c; i = j;
                }
                out[pos] = '\\0'; return out;
            }
            uint8_t rotl(uint8_t b,int n){ return (uint8_t)((b<<n)|(b>>(8-n))); }
            uint8_t encryptByte(uint8_t p,int n,uint8_t K){ return (uint8_t)(rotl(p,n)^K); }

            int main(){ const char *rec = "AAAABBBCC"; int n=3; uint8_t K=0x5A; char *recompr = rleCompress(rec); printf("Recompr: %s\nReencript: ", recompr); for (int i=0;i<strlen(recompr);++i) printf("%02X ", encryptByte((uint8_t)recompr[i], n, K)); printf("\n"); free(recompr); return 0; }
