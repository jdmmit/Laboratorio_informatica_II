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
    cout << "Ejecutando Ejercicio 15..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla la suma de todos los números ingresados." << endl;

    int numero, suma = 0;

    while (true)
    {
        cout << "Ingrese un número (0 para terminar): ";
        cin >> numero;

        if (numero == 0)
            break; // condición de salida

        suma += numero;
    }

    cout << "La suma de todos los números ingresados es: " << suma << endl;
    return 0;
}