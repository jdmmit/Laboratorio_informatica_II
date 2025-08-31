#include <iostream>

using namespace std;

int main()
{
    cout << "Ejecutando Problema 2..." << endl;
    cout << " En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y 1. Ej: 1, 1, 2, 3, 5, 8, .... Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie de Fibonacci menores a n" << endl;
    cout << "-----------------------------------------" << endl;

    int n;
    cout << "Ingrese un número: ";
    cin >> n;

    int a = 1, b = 1, suma = 0;
    while (b < n)
    {
        if (b % 2 == 0)
        {
            suma += b;
        }
        int temp = b;
        b += a;
        a = temp;
    }

    cout << "La suma de los números pares en la serie de Fibonacci menores a " << n << " es: " << suma << endl;

    cout << "-----------------------------------------" << endl;
    return 0;
}