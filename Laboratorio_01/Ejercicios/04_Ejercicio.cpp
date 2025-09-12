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
    cout << "Ejecutando Ejercicio 4..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida dos numeros A y B e imprima en pantalla el menor." << endl;

    pedir_Valores();

    if (A < B)
    {
        cout << "El menor es: " << A << endl;
    }
    else if (B < A)
    {
        cout << "El menor es: " << B << endl;
    }
    else
    {
        cout << "Los numeros son iguales." << endl;
    }
    cout << "-----------------------------------------" << endl;

    return 0;
}