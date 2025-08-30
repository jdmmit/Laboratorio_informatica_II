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
    cout << "Escriba un programa que pida constantemente numeros hasta que se ingrese el numero cero e imprima en pantalla el mayor de todos los numeros ingresados." << endl;

    int numero, mayor;
    bool hayNumeros = false; // bandera para saber si se ingreso al menos un numero

    cout << "Ingrese un numero (0 para terminar): ";
    while (cin >> numero && numero != 0)
    {
        if (!hayNumeros || numero > mayor)
        {
            mayor = numero;
            hayNumeros = true;
        }
        cout << "Ingrese un numero (0 para terminar): ";
    }

    if (hayNumeros)
        cout << "El mayor de los numeros ingresados es: " << mayor << endl;
    else
        cout << "No se ingresaron numeros validos." << endl;

    return 0;
}