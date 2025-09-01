#include <iostream>

using namespace std;

int main()
{
    cout << "Ejecutando Problema 14..." << endl;
    cout << " Un número palíndromo es igual de derecha a izquierda y de izquierda a derecha," << endl;
    cout << "-----------------------------------------" << endl;

    int num;
    cout << "Ingrese un número: ";
    cin >> num;

    int original = num;
    int invertido = 0;

    while (num > 0)
    {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }

    if (original == invertido)
    {
        cout << original << " es un número palíndromo." << endl;
    }
    else
    {
        cout << original << " no es un número palíndromo." << endl;
    }

    cout << "-----------------------------------------" << endl;
    return 0;
}