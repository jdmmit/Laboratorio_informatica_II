Fuente: fileciteturn0file0

# Problema 11 - Reservas de asientos en sala de cine (15 filas x 20 asientos)

Estrategia: matriz booleana, mapear filas A-O a índices.

Código (C++):
```cpp
#include <iostream>
#include <vector>
using namespace std;
int main(){
    const int R=15, C=20;
    vector<vector<bool>> sala(R, vector<bool>(C,false));
    char op;
    while(cin>>op){
        if(op=='q') break;
        if(op=='r' || op=='c'){
            char fila; int num;
            cin>>fila>>num;
            int i = toupper(fila)-'A';
            int j = num-1;
            if(i<0 || i>=R || j<0 || j>=C) cout<<"Inválido\n";
            else if(op=='r') sala[i][j]=true; else sala[i][j]=false;
        }
    }
    return 0;
}
```
