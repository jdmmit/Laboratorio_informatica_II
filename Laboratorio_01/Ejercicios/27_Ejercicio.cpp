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
    cout << "Ejecutando Ejercicio 27..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que actue como una calculadora con operaciones de suma, resta, multiplicacion y division, el usuario debe ingresar los operandos y la operacion a realizar." << endl;

    double A, B, resultado;
    char op;

    cout << "Ingrese el primer numero: ";
    cin >> A;
    cout << "Ingrese el segundo numero: ";
    cin >> B;
    cout << "Ingrese la operacion (+, -, *, /): ";
    cin >> op;

    switch (op)
    {
    case '+':
        resultado = A + B;
        break;
    case '-':
        resultado = A - B;
        break;
    case '*':
        resultado = A * B;
        break;
    case '/':
        if (B != 0)
            resultado = A / B;
        else
        {
            cout << "Error: division por cero no permitida." << endl;
            return 0;
        }
        break;
    default:
        cout << "Operacion no valida." << endl;
        return 0;
    }

    cout << "El resultado de " << A << " " << op << " " << B << " es: " << resultado << endl;

    return 0;
}