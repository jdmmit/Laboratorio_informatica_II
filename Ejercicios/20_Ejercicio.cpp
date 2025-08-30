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
    cout << "Ejecutando Ejercicio 20... " << endl;
    cout
        << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima si es o no un palindromo (igual de derecha a izquierda que de izquierda a derecha)." << endl;

    int N, orig, inv = 0;
    cout << "Ingrese un numero: ";
    cin >> N;
    orig = N;

    while (N)
    {
        inv = inv * 10 + N % 10;
        N /= 10;
    }

    cout << (orig == inv ? "El numero es un palindromo." : "El numero no es un palindromo.") << endl;
    return 0;
}