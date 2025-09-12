#include <iostream>

using namespace std;

int main()
{
    cout << "Ejecutando Problema 13..." << endl;
    cout << " Escriba un programa que reciba un número y calcule la suma de todos los primos menores que el número ingresado." << endl;
    cout << "-----------------------------------------" << endl;

    int num;
    cout << "Ingrese un número: ";
    cin >> num;

    int suma = 0;
    for (int i = 2; i < num; i++)
    {
        bool esPrimo = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo)
        {
            suma += i;
        }
    }

    cout << "La suma de los primos menores que " << num << " es: " << suma << endl;
    cout << "-----------------------------------------" << endl;
    return 0;
}