#include <iostream>

using namespace std;

int main()
{
    cout << "Ejecutando Problema 17..." << endl;
    cout << " La secuencia de números triangulares se forma al sumar su posición en el arreglo con el valor del número anterior: 1, 1+2=3, 3+3=6, 6+4=10, 10+5=15, 15+6=21, 21+7=28..." << endl;
    cout << "-----------------------------------------" << endl;

    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    int triangular = 0;
    for (int i = 1; i <= n; i++)
    {
        triangular += i;
    }

    cout << "El número triangular en la posición " << n << " es: " << triangular << endl;
    cout << "-----------------------------------------" << endl;
    return 0;
}