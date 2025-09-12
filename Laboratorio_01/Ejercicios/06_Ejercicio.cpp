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
    cout << "Ejecutando Ejercicio 6..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida dos numeros A y B e imprima en pantalla la potencia AB, sin hacer uso de librerias matematicas." << endl;

    pedir_Valores();

    int resultado = 1;
    for (int i = 1; i < B; i++)
    {
        resultado *= A;
    }
    cout << "La potencia " << A << "^" << B << " es: " << resultado << endl;

    return 0;
}