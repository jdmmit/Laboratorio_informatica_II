#include <iostream>
#include <cmath>

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
    cout << "Ejecutando Ejercicio 18...\n";
    cout << "-----------------------------------------\n";
    cout << "Escriba un programa que pida un número N e imprima si es o no un cuadrado perfecto.\n";

    int N;
    cout << "Ingrese un número: ";
    cin >> N;

    cout << N << (sqrt(N) == (int)sqrt(N) ? " es " : " no es ") << "un cuadrado perfecto.\n";

    return 0;
}