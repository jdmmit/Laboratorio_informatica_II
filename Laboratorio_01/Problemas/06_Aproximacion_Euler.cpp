#include <iostream>

using namespace std;

int main()
{
    cout << "Ejecutando Problema 6..." << endl;
    cout << " Escriba un programa que encuentre el valor aproximado del número de euler en base a la siguiente suma infinita : e = 1 / 0 !+1 / 1 !+1 / 2 !+1 / 3 !+1 / 4 !+1 / 5 !+... El usuario debe ingresar el número de elementos usados en la aproximación." << endl;

    cout << "-----------------------------------------" << endl;

    int elementos;
    cout << "Ingrese el número de elementos para la aproximación: ";
    cin >> elementos;

    double euler = 0.0;
    long long factorial = 1;

    for (int i = 0; i < elementos; i++)
    {
        if (i > 0)
            factorial *= i;
        euler += 1.0 / factorial;
    }

    cout << "El valor aproximado de euler es: " << euler << endl;

    cout << "-----------------------------------------" << endl;
    return 0;
}