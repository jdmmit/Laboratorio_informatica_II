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
    cout << "Ejecutando Ejercicio 11..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un número N e imprima en pantalla su tabla de multiplicar hasta 10xN." << endl;

    int N;
    cout << "Ingrese el valor de N: " << endl;
    cin >> N;

    for (int i = 1; i <= 10; i++)
    {
        cout << N << " x " << i << " = " << N * i << endl;
    }

    return 0;
}