#include <iostream>
#include <cstdlib> // rand(), srand()
#include <ctime>   // time()

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
    cout << "Ejecutando Ejercicio 30..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que genere un numero aleatorio A (entre 0 y 100) y le pida al usuario que lo adivine, el usuario ingresa un numero B y el programa le dira si B es mayor o menor que A, esto se repetira hasta que el usuario adivine el numero, en ese momento el programa le dira el numero de intentos que tardo el usuario en adivinar el numero. Nota: para generar el numero aleatorio use la funcion rand() de la libreria <cstdlib>, recuerde convertirlo al rango (0,100)." << endl;

    srand(time(0));       // semilla aleatoria
    int A = rand() % 101; // numero entre 0 y 100
    int B, intentos = 0;

    while (true)
    {
        cout << "Ingresa tu intento: ";
        cin >> B;
        intentos++;

        if (B < 0 || B > 100)
        {
            cout << "Numero fuera de rango. Intenta nuevamente (0 - 100)." << endl;
            continue;
        }

        if (B > A)
        {
            cout << "El numero secreto es MENOR que " << B << endl;
        }
        else if (B < A)
        {
            cout << "El numero secreto es MAYOR que " << B << endl;
        }
        else
        {
            cout << "¡Correcto! El numero era " << A << endl;
            cout << "Intentos realizados: " << intentos << endl;
            break; // termina el juego
        }
    }

    return 0;
}