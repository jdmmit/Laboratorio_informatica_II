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
    cout << "Ejecutando Ejercicio 7..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima en pantalla la suma de todos los numeros entre 0 y N (incluyendose el mismo)." << endl;

    int N;
    cout << "Ingrese un numero: " << endl;
    cin >> N;

    int suma = 0;
    for (int i = 0; i <= N; i++)
    {
        suma += i;
    }
    cout << "La suma de los numeros entre 0 y " << N << " es: " << suma << endl;

    return 0;
}