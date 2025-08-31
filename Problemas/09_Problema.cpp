#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Ejecutando Problema 9..." << endl;
    cout << " Escriba un programa que pida un número entero N e imprima el resultado de la suma de todos sus dígitos elevados a sí mismos." << endl;
    cout << "-----------------------------------------" << endl;

    int n;
    cout << "Ingrese un numero entero: ";
    cin >> n;

    int suma = 0;
    while (n > 0)
    {
        int digito = n % 10;
        int potencia = 1;
        for (int i = 0; i < digito; ++i)
            potencia *= digito;
        suma += potencia;
        n /= 10;
    }

    cout << "La suma de los dígitos elevados a sí mismos es: " << suma << endl;
    cout << "-----------------------------------------" << endl;
    return 0;
}