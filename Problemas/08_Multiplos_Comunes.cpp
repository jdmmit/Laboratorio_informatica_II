#include <iostream>

using namespace std;

int main()
{
    cout << "Ejecutando Problema 8..." << endl;
    cout << "Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los múltiplos de a y b que sean menores a c. Tenga en cuenta no sumar 2 veces los múltiplos comunes. " << endl;
    cout << "-----------------------------------------" << endl;

    int a, b, c;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;

    int suma = 0;
    for (int i = 1; i < c; i++)
    {
        if (i % a == 0 || i % b == 0)
        {
            suma += i;
        }
    }
    cout << "La suma de los múltiplos de " << a << " y " << b << " menores a " << c << " es: " << suma << endl;

    cout << "-----------------------------------------" << endl;
    return 0;
}