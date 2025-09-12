#include <iostream>

using namespace std;

int main()
{
    cout << "Ejecutando Problema 1..." << endl;
    cout << "Escriba un programa que identifique si un carácter ingresado es una vocal, una consonante o ninguna de las 2 e imprima un mensaje según el caso." << endl;

    char c;
    cout << "Ingrese un caracter: ";
    cin >> c;

    if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
    {
        cout << "No es una letra." << endl;
    }
    else
    {
        // Pasar a minúscula si es mayúscula
        if (c >= 'A' && c <= 'Z')
        {
            c = c + 32;
        }

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            cout << "Es una vocal." << endl;
        }
        else
        {
            cout << "Es una consonante." << endl;
        }
    }

    return 0;
}