#include <iostream>
using namespace std;

int main()
{
    cout << "Ejecutando Problema 11..." << endl;
    cout << "Escriba un programa que reciba un número y calcule el mínimo común múltiplo de todos los números enteros entre 1 y el número ingresado." << endl;
    cout << "-----------------------------------------" << endl;
    int n;
    cout << "Ingrese un número: ";
    cin >> n;

    int mcm = 1;
    for (int i = 1; i <= n; i++)
    {
        // Calcula el MCD de mcm e i
        int a = mcm, b = i;
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        int mcd = a;
        mcm = (mcm * i) / mcd;
    }

    cout << "El mínimo común múltiplo de los números entre 1 y " << n << " es: " << mcm << endl;
    cout << "-----------------------------------------" << endl;
    return 0;
}