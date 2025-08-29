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
    cout << "Ejecutando Ejercicio 16..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla el promedio de los números ingresados (excluyendo el cero)." << endl;

    int numero, suma = 0, contador = 0;

    cout << "Ingrese un número (0 para terminar): ";
    while (cin >> numero && numero != 0)
    {
        suma += numero;
        contador++;
        cout << "Ingrese un número (0 para terminar): ";
    }

    if (contador)
        cout << "El promedio de los números ingresados es: " << (double)suma / contador << endl;
    else
        cout << "No se ingresaron números válidos." << endl;

    return 0;
}