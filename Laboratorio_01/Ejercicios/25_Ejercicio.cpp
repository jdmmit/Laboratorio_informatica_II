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
    cout << "Ejecutando Ejercicio 25..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima en pantalla la cantidad de digitos de N." << endl;

    int N;
    cout << "Ingrese un numero: ";
    cin >> N;

    int digitos = (N == 0) ? 1 : 0;
    while (N != 0)
    {
        N /= 10;
        digitos++;
    }

    cout << "La cantidad de digitos es: " << digitos << endl;

    return 0;
}