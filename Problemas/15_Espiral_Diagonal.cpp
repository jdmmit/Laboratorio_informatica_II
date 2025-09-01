#include <iostream>

using namespace std;

int main()
{
    cout << "Ejecutando Problema 15..." << endl;
    cout << " Empezando con el número 1 y moviéndose hacia la izquierda y en sentido horario se genera una espiral de números como la siguiente :  En el caso de esta espiral de 5x5, la suma de los números en la diagonal es 101. Escriba un programa que reciba un número impar n y calcule la suma de los números en la diagonal de una espiral de nxn." << endl;
    cout << "-----------------------------------------" << endl;

    int n;
    cout << "Ingrese un número impar: ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Debe ser impar." << endl;
        return 0;
    }

    long long suma = 1;
    for (int k = 1; k <= (n - 1) / 2; k++)
    {
        suma += 16LL * k * k + 4LL * k + 4;
    }

    cout << "Suma de diagonales en espiral " << n << "x" << n << " = " << suma << endl;

    cout << "-----------------------------------------" << endl;
}