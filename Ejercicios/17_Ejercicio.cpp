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
    cout << "Ejecutando Ejercicio 17..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla el mayor de todos los números ingresados." << endl;

    int numero, mayor;
    bool hayNumeros = false; // bandera para saber si se ingresó al menos un número

    cout << "Ingrese un número (0 para terminar): ";
    while (cin >> numero && numero != 0)
    {
        if (!hayNumeros || numero > mayor)
        {
            mayor = numero;
            hayNumeros = true;
        }
        cout << "Ingrese un número (0 para terminar): ";
    }

    if (hayNumeros)
        cout << "El mayor de los números ingresados es: " << mayor << endl;
    else
        cout << "No se ingresaron números válidos." << endl;

    return 0;
}