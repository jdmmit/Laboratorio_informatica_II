Fuente: fileciteturn0file0

# Problema 6 - Convertir minúsculas a mayúsculas

Estrategia: recorrer y usar toupper o restar 'a'-'A'.

Código (C++):
```cpp
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    for(char &c: s) c = toupper((unsigned char)c);
    cout<<s<<"\n";
    return 0;
}
```
