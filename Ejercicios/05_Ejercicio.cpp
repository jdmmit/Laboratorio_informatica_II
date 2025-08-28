#include <iostream>
#include <cmath>
#include <iomanip> // Para setprecision

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
    cout << "Ejecutando Ejercicio 5..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida dos números A y B e imprima en pantalla la división A/B con redondeo." << endl;

    pedir_Valores();

    double resultado = (double)A / (double)B;

    // Opción 1: Redondeado al entero más cercano
    cout << "La división de A/B redondeada al entero más cercano es: " << round(resultado) << endl;

    // Opción 2: Redondeado a 2 decimales
    cout << fixed << setprecision(2);
    cout << "La división de A/B redondeada a 2 decimales es: " << resultado << endl;

    return 0;
}