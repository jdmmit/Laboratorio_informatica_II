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
    cout << "Escriba un programa que pida dos numeros A y B e imprima en pantalla el residuo de la division A/B." << endl;
    cout << "Ejemplo: si se ingresan 8 y 3 se debe imprimir: El residuo de la division 8/3 es: 2" << "\n"
         << endl;

    pedir_Valores();

    cout << "El residuo de la division " << A << "/" << B << " es: " << A % B << endl;
    cout << "-----------------------------------------" << endl;

    return 0;
}