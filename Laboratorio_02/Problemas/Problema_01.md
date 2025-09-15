Fuente: fileciteturn0file0

# Problema 1 - Combinación mínima de billetes y monedas

Enunciado: Dada una cantidad en pesos, determinar el número mínimo de billetes/monedas
entre: 50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50.
Si no se puede representar exactamente, mostrar cuánto falta.

Estrategia: algoritmo voraz (greedy) con divisiones enteras y módulo.

Código (C++):
```cpp
#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long amount;
    if(!(cin>>amount)) return 0;
    vector<int> denom = {50000,20000,10000,5000,2000,1000,500,200,100,50};
    for(int d: denom){
        cout<<d<<": "<< (amount/d) <<"\n";
        amount %= d;
    }
    cout<<"Faltante: "<<amount<<"\n";
    return 0;
}
```

Explicación: Se toma la mayor denominación posible repetidamente; es óptimo para sistemas canonicos de monedas (como el colombiano).
