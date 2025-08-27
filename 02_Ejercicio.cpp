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
    cout << "Ejecutando Ejercicio 2..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima en pantalla si es par o impar." << endl;

    int N;

    cout << "Ingrese un numero: " << endl;
    cin >> N;

    if (N % 2 == 0)
    {
        cout << "El numero " << N << " es par." << endl;
    }
    else
    {
        cout << "El numero " << N << " es impar." << endl;
    }
    cout << "-----------------------------------------" << endl;

    return 0;
}