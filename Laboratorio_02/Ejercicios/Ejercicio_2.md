# Ejercicio 2 - Corregir función promedio

Fuente: fileciteturn0file0

Función corregida:
```cpp
#include <iostream>
using namespace std;
void fun_c(double *a, int n, double *promedio, double *suma){
  *suma=0.0;
  for(int i=0;i<n;i++) *suma += a[i];
  *promedio = (n>0) ? (*suma)/n : 0.0;
}
int main(){ double arr[]={1.5,2,3.5,4}; double s,p; fun_c(arr,4,&p,&s); cout<<s<<" "<<p; }
```
