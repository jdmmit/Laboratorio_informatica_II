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
    cout << "Escriba un programa que pida un numero N e imprima en pantalla todos los multiplos de dicho numero entre 1 y 100." << endl;

    int N;
    cout << "Ingrese un numero: ";
    cin >> N;
    cout << "Multiplos de " << N << " entre 1 y 100:" << endl;
    for (int i = 1; i <= 100; i++)
    {
        if (i % N == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}