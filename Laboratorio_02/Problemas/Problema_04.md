Fuente: fileciteturn0file0

# Problema 4 - Convertir cadena numérica a entero

Estrategia: procesar signo, multiplicar acumulador por 10 y sumar dígitos.

Código (C++):
```cpp
#include <iostream>
#include <string>
using namespace std;
int strToInt(const string &s){
    int i=0, sign=1;
    if(s[0]=='-'){ sign=-1; i=1;}
    long long res=0;
    for(; i<(int)s.size(); ++i){
        if(s[i]<'0' || s[i]>'9') break;
        res = res*10 + (s[i]-'0');
    }
    return (int)(sign*res);
}
int main(){ string s; cin>>s; cout<<strToInt(s)<<"\n"; }
```
