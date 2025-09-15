# Ejercicio 3 - Arreglo 2D en memoria

Fuente: fileciteturn0file0

Conceptos:
- unsigned short suele ocupar 2 bytes.
- Cada fila b[i] tiene 2 elementos -> 4 bytes.
- b+2 apunta a la fila 2.
- *(*(b+2)+1) es el valor b[2][1] = 39.
- b[3][1] = 3.
- *b++ suele evaluar a 77 (el primer elemento) en muchos contextos.

Demostración (C++):
```cpp
#include <iostream>
using namespace std;
int main(){
  unsigned short b[4][2] = {{77,50},{5,2},{28,39},{99,3}};
  cout << "b (base): " << (void*)b << "\n";
  cout << "b+2: " << (void*)(b+2) << "\n";
  cout << "*(*(b+2)+1): " << *(*(b+2)+1) << "\n";
  cout << "b[3][1]: " << b[3][1] << "\n";
  return 0;
}
```
