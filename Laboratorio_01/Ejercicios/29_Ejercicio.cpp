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
    cout << "Ejecutando Ejercicio 29..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que adivine un numero A (entre 0 y 100) seleccionado por el usuario(el numero NO se ingresa al programa), el programa imprimira en pantalla un numero B y el usuario usara los simbolos `> ', `<' y `=' para indicarle al programa si B es mayor, menor o igual que A.El programa imprimira un nuevo numero B, con base en simbolo ingresado por el usuario, y repetira el proceso hasta acertar el numero seleccionado por usuario." << endl;

    int low = 0, high = 100, B;
    char simbolo;

    cout << "Piensa un numero entre 0 y 100 y yo intentare adivinarlo." << endl;

    do
    {
        B = (low + high) / 2; // estrategia de busqueda binaria
        cout << "¿Es " << B << "? (>, <, =): ";
        cin >> simbolo;

        if (simbolo == '>')
            low = B + 1;
        else if (simbolo == '<')
            high = B - 1;
        else if (simbolo == '=')
            cout << "¡Genial! El numero es " << B << endl;
        else
            cout << "Entrada no valida. Use >, < o =." << endl;

    } while (simbolo != '=');

    return 0;
}