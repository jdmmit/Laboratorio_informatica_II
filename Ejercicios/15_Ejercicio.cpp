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
    cout << "Escriba un programa que pida constantemente numeros hasta que se ingrese el numero cero e imprima en pantalla la suma de todos los numeros ingresados." << endl;

    int numero, suma = 0;

    while (true)
    {
        cout << "Ingrese un numero (0 para terminar): ";
        cin >> numero;

        if (numero == 0)
            break; // condicion de salida

        suma += numero;
    }

    cout << "La suma de todos los numeros ingresados es: " << suma << endl;
    return 0;
}