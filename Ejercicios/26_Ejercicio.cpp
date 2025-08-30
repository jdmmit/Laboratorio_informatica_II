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
    cout << "Ejecutando Ejercicio 18..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida tres numeros e imprima el tipo de triangulo (isosceles, equilatero, escaleno) que se formaria, si sus lados tienen la longitud definida por los numeros ingresados. Tenga en cuenta el caso en que los numeros ingresados no forman un triangulo." << endl;

    int a, b, c;
    cout << "Ingrese tres lados: ";
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0)
        cout << "Los lados deben ser positivos." << endl;
    else if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c)
            cout << "El triangulo es equilatero." << endl;
        else if (a == b || a == c || b == c)
            cout << "El triangulo es isosceles." << endl;
        else
            cout << "El triangulo es escaleno." << endl;
    }
    else
        cout << "Los numeros ingresados no forman un triangulo." << endl;

    return 0;
}