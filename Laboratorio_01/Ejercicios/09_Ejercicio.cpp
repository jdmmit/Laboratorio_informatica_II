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
    cout << "Ejecutando Ejercicio 9..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima el perimetro y area de un circulo con radio N. Nota: use 3.1416 como una aproximacion de pi." << endl;

    double N;
    cout << "Ingrese el valor de N: " << endl;
    cin >> N;

    double perimetro = 2 * 3.1416 * N;
    double area = 3.1416 * N * N;

    cout << "El perimetro del circulo es: " << perimetro << endl;
    cout << "El area del circulo es: " << area << endl;

    return 0;
}