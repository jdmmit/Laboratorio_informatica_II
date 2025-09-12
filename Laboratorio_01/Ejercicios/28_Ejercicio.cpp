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
    cout << "Ejecutando Ejercicio 28..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que encuentre el valor aproximado de pi en base a la siguiente suma infinita:" << endl;
    cout << "π = 4(1 − 1/3 + 1/5 − 1/7 + 1/9 − ...)" << endl;
    cout << "El usuario debe ingresar el numero de elementos usados en la aproximacion: ";

    int n;
    cout << "Ingrese el numero de elementos: ";
    cin >> n;

    double pi = 0;
    for (int i = 0; i < n; i++)
        pi += ((i % 2 == 0) ? 1.0 : -1.0) / (2 * i + 1);

    cout << "Valor aproximado de pi con " << n
         << " terminos: " << pi * 4 << endl;
    return 0;
}