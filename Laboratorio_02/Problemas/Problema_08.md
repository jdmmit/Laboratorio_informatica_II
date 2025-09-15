Fuente: fileciteturn0file0

# Problema 8 - Separar dígitos del resto de caracteres

Estrategia: construir dos cadenas, una para dígitos y otra para el resto.

Código (C++):
```cpp
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string s; cin>>s;
    string nums, txt;
    for(char c: s) if(isdigit((unsigned char)c)) nums.push_back(c); else txt.push_back(c);
    cout<<txt<<"\n"<<nums<<"\n";
}
```
