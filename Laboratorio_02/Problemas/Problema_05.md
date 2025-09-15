Fuente: fileciteturn0file0

# Problema 5 - Convertir entero a cadena (por referencia)

Estrategia: manejar cero y signo, construir al revés y luego invertir.

Código (C++):
```cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void intToStr(int n, string &out){
    if(n==0){ out = "0"; return; }
    bool neg = n<0;
    unsigned int x = neg ? - (long long)n : n;
    string s;
    while(x>0){ s.push_back('0' + (x%10)); x/=10; }
    if(neg) s.push_back('-');
    reverse(s.begin(), s.end());
    out = s;
}
int main(){ string o; intToStr(-123, o); cout<<o<<"\n"; }
```
