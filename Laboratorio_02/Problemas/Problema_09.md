Fuente: fileciteturn0file0

# Problema 9 - Separar en grupos de n cifras y sumarlos (pad a la izquierda)

Estrategia: añadir ceros a la izquierda si hace falta, luego partir en trozos de n y sumar.

Código (C++):
```cpp
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n; string s;
    cin>>n>>s;
    int rem = s.size() % n;
    if(rem) s = string(n-rem, '0') + s;
    long long sum=0;
    for(size_t i=0;i<s.size(); i+=n){
        sum += stoll(s.substr(i,n));
    }
    cout<<sum<<"\n";
}
```
