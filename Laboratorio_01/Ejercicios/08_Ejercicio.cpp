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
    cout << "Ejecutando Ejercicio 8..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima en pantalla su factorial." << endl;

    int N;
    cout << "Ingrese un numero: " << endl;
    cin >> N;

    int factorial = 1;
    for (int i = 1; i <= N; i++)
    {
        factorial *= i;
    }
    cout << "El factorial de " << N << " es: " << factorial << endl;

    return 0;
}