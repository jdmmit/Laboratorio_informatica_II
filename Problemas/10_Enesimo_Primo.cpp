#include <iostream>

using namespace std;

int main()
{
    cout << "Ejecutando Problema 10..." << endl;
    cout << " Escriba un programa que reciba un número n e imprima el enésimo número primo." << endl;
    cout << "-----------------------------------------" << endl;

    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    int contador = 0;
    int numero = 1;

    while (contador < n)
    {
        numero++;
        bool esPrimo = true;

        for (int i = 2; i <= numero / 2; i++)
        {
            if (numero % i == 0)
            {
                esPrimo = false;
                break;
            }
        }

        if (esPrimo)
        {
            contador++;
        }
    }

    cout << "El " << n << "° número primo es: " << numero << endl;

    cout << "-----------------------------------------" << endl;
    return 0;
}