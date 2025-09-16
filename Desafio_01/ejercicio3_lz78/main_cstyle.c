\
            /* LZ78 C-style decompressor for binary pairs (index,symbol) */
            #include <stdio.h>
            #include <stdlib.h>
            #include <stdint.h>
            #include <string.h>

            // Very simple dynamic list of char* entries
            typedef struct {
                char **items;
                int count;
                int cap;
            } Dict;

            void dict_init(Dict *d) { d->cap = 16; d->count = 0; d->items = (char**)malloc(sizeof(char*)*d->cap); }
            void dict_push(Dict *d, const char *s) {
                if (d->count+1 > d->cap) { d->cap *= 2; d->items = (char**)realloc(d->items, sizeof(char*)*d->cap); }
                d->items[d->count++] = strdup(s);
            }
            void dict_free(Dict *d) { for (int i=0;i<d->count;++i) free(d->items[i]); free(d->items); }

            int lz78DecompressBin(const uint8_t *in, int len, char **out) {
                if (len%2!=0) return 0;
                Dict dict; dict_init(&dict);
                dict_push(&dict, ""); // index 0
                int outcap = 256; *out = (char*)malloc(outcap); int outpos=0;
                for (int i=0;i+1<len;i+=2) {
                    uint8_t idx = in[i];
                    char c = (char)in[i+1];
                    if (idx >= dict.count) { dict_free(&dict); free(*out); return 0; }
                    int needed = strlen(dict.items[idx]) + 1;
                    if (outpos + needed + 1 > outcap) { outcap = (outpos+needed+1)*2; *out = (char*)realloc(*out, outcap); }
                    // append dict[idx]
                    strcpy(*out + outpos, dict.items[idx]); outpos += strlen(dict.items[idx]);
                    (*out)[outpos++] = c;
                    (*out)[outpos] = '\\0';
                    // create new entry
                    int newlen = strlen(dict.items[idx]) + 1;
                    char *newentry = (char*)malloc(newlen+1);
                    strcpy(newentry, dict.items[idx]);
                    newentry[newlen-1] = c; newentry[newlen] = '\\0';
                    dict_push(&dict, newentry);
                    free(newentry);
                }
                dict_free(&dict);
                return 1;
            }

            int main() {
                // Build a simple compressed buffer for "ABAABABAAB"
                uint8_t comp[] = {0,'A',0,'B',1,'A',2,'B',3,'A'};
                char *out;
                if (lz78DecompressBin(comp, sizeof(comp), &out)) {
                    printf("Decomp: %s\n", out);
                    free(out);
                } else {
                    printf("Error decompress\n");
                }
                return 0;
            }
