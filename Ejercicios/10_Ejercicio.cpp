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
    cout << "Ejecutando Ejercicio 10..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un número N e imprima en pantalla todos los múltiplos de dicho número entre 1 y 100." << endl;

    int N;
    cout << "Ingrese un número: ";
    cin >> N;
    cout << "Múltiplos de " << N << " entre 1 y 100:" << endl;
    for (int i = 1; i <= 100; i++)
    {
        if (i % N == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}