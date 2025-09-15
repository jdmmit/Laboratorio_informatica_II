Fuente: fileciteturn0file0

# Problema 3 - Comparar dos cadenas (igual/distinto)

Estrategia: comparar tamaños y caracteres; evitar usar strcmp si piden implementarlo a mano.

Código (C++):
```cpp
#include <iostream>
#include <string>
using namespace std;
bool iguales(const string &a, const string &b){
    if(a.size() != b.size()) return false;
    for(size_t i=0;i<a.size();++i) if(a[i]!=b[i]) return false;
    return true;
}
int main(){
    string x,y;
    getline(cin, x);
    getline(cin, y);
    cout << (iguales(x,y) ? "Iguales\n" : "Distintas\n");
    return 0;
}
```
