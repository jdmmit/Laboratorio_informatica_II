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
    cout << "Ejecutando Ejercicio 12..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima todas las potencias desde N^1 hasta N^5." << endl;

    int N;
    cout << "Ingrese el valor de N: ";
    cin >> N;

    int potencia = 1; // empezamos en N^0 = 1

    for (int i = 1; i <= 5; i++)
    {
        potencia *= N; // multiplicamos por N en cada paso
        cout << N << "^" << i << " = " << potencia << endl;
    }

    return 0;
}