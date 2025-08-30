#include <iostream>

using namespace std;

int A, B;

void pedir_Valores()
{
    cout << "Ingresa el valor de A: " << endl;
    cin >> A;
    cout << "Ingresa el valor de B: " << endl;
    cin >> B;
}

int main()
{
    cout << "Ejecutando Ejercicio 21..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un caracter C, si es una letra la debe convertir de mayuscula a minuscula y viceversa e imprimirla." << endl;

    char C;
    cout << "Ingrese un caracter: ";
    cin >> C;

    if (C >= 'A' && C <= 'Z')
        cout << "En minuscula: " << char(C + 32) << endl;
    else if (C >= 'a' && C <= 'z')
        cout << "En mayuscula: " << char(C - 32) << endl;
    else
        cout << "El caracter ingresado no es una letra." << endl;

    return 0;
}