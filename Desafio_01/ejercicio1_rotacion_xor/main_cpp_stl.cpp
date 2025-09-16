\
            // Ejercicio 1 (STL) - Rotación y XOR
            #include <iostream>
            #include <vector>
            #include <cstdint>
            using namespace std;
            uint8_t rotl(uint8_t b, int n) { return (uint8_t)((b<<n)|(b>>(8-n))); }
            uint8_t rotr(uint8_t b, int n) { return (uint8_t)((b>>n)|(b<<(8-n))); }
            uint8_t encryptByte(uint8_t plain, int n, uint8_t K) { return (uint8_t)(rotl(plain,n)^K); }
            uint8_t decryptByte(uint8_t cipher, int n, uint8_t K) { return rotr((uint8_t)(cipher^K), n); }
            int main() {
                const char *text = "Hello";
                int n = 3; uint8_t K = 0x5A;
                cout << "Cipher bytes (hex): ";
                for (size_t i=0; text[i]; ++i) {
                    uint8_t enc = encryptByte((uint8_t)text[i], n, K);
                    printf("%02X ", enc);
                }
                cout << endl;
                cout << "Recovered: ";
                for (size_t i=0; text[i]; ++i) {
                    uint8_t enc = encryptByte((uint8_t)text[i], n, K);
                    char dec = (char)decryptByte(enc, n, K);
                    cout << dec;
                }
                cout << endl;
                return 0;
            }
