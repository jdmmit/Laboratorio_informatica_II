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
    cout << "Ejecutando Ejercicio 23..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida dos numeros A y B e imprima en pantalla el minimo comun multiplo entre los dos." << endl;

    int A, B;
    cout << "Ingrese dos numeros: ";
    cin >> A >> B;

    int x = A, y = B;
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }

    cout << "El minimo comun multiplo de " << A << " y " << B
         << " es: " << (A * B) / x << endl;

    return 0;
}