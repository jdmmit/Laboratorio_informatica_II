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
    cout << "Ejecutando Ejercicio 22..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida una cantidad entera de segundos y la imprima en formato horas:minutos:segundos." << endl;

    int s;
    cout << "Ingrese la cantidad de segundos: ";
    cin >> s;

    cout << s << " segundos equivalen a "
         << s / 3600 << " horas, "
         << (s % 3600) / 60 << " minutos y "
         << s % 60 << " segundos." << endl;

    return 0;
}