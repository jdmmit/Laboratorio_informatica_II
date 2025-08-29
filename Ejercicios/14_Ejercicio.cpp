#include <iostream>

using namespace std;

int A, B;

void pedir_Valores()
{
    cout << "Ingresa el valor de A: " << endl;
    cin >> A;
    cout << "Ingresa el valor de B: " << endl;
    cin >> B;
}

int main()
{
    cout << "Ejecutando Ejercicio 14..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que imprima dos columnas paralelas, una con los números del 1 al 50 y otra con los números del 50 al 1." << endl;

    for (int i = 1; i <= 50; i++)
    {
        cout << i << "\t" << (51 - i) << endl;
    }

    return 0;
}