#include <iostream>

using namespace std;

int main()
{
    cout << "Ejecutando Problema 12..." << endl;
    cout << "Escriba un programa que calcula el máximo factor primo de un número." << endl;
    cout << "-----------------------------------------" << endl;

    int num;
    cout << "Ingrese un número: ";
    cin >> num;

    int maxFactor = 1;
    for (int i = 2; i <= num; i++)
    {
        while (num % i == 0)
        {
            maxFactor = i;
            num /= i;
        }
    }

    cout << "El máximo factor primo es: " << maxFactor << endl;
    cout << "-----------------------------------------" << endl;
    return 0;
}