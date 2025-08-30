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
    cout << "Ejecutando Ejercicio 24..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida una numero entero e imprima un cuadrado de dicho tamano, los bordes del cuadrado deben estar hechos con el caracter `+' y el interior debe estar vacio." << endl;

    int N;
    cout << "Ingrese el tamano del cuadrado: ";
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << ((i == 0 || i == N - 1 || j == 0 || j == N - 1) ? '+' : ' ');
        cout << endl;
    }

    return 0;
}