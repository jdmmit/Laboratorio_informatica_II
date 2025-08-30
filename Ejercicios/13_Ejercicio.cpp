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
    cout << "Ejecutando Ejercicio 5..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima todos los divisores de N." << endl;

    int N;
    cout << "Ingrese un numero: ";
    cin >> N;

    cout << "Los divisores de " << N << " son: ";
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}