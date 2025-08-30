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
    cout << "Ejecutando Ejercicio 19..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima si es o no un numero primo" << endl;

    int N;
    cout << "Ingrese un numero: ";
    cin >> N;

    bool primo = (N > 1);

    for (int i = 2; i * i <= N && primo; i++)
    {
        if (N % i == 0)
            primo = false;
    }

    cout << "El numero " << N << (primo ? " es primo." : " no es primo.") << endl;
    return 0;
}