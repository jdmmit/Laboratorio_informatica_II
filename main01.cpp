#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "-----MENU DEL LABORATORIO PRACTICO 1-----" << endl;
    cout << "-----------------------------------------" << endl;

    int opcion = 0;

    while (opcion != 19)
    {

        cout << "1. Ejercicio 1" << endl;
        cout << "2. Ejercicio 2" << endl;
        cout << "3. Ejercicio 3" << endl;
        cout << "4. Ejercicio 4" << endl;
        cout << "5. Ejercicio 5" << endl;
        cout << "6. Ejercicio 6" << endl;
        cout << "7. Ejercicio 7" << endl;
        cout << "8. Ejercicio 8" << endl;
        cout << "9. Ejercicio 9" << endl;
        cout << "10. Ejercicio 10" << endl;
        cout << "11. Ejercicio 11" << endl;
        cout << "12. Ejercicio 12" << endl;
        cout << "13. Ejercicio 13" << endl;
        cout << "14. Ejercicio 14" << endl;
        cout << "15. Ejercicio 15" << endl;
        cout << "16. Ejercicio 16" << endl;
        cout << "17. Ejercicio 17" << endl;
        cout << "18. Ejercicio 18" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "19. Salir" << endl;

        cin >> opcion;

        switch (opcion)
        {
        case 1:
        {
            cout << "Ejecutando Ejercicio 1..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que pida dos numeros A y B e imprima en pantalla el residuo de la division A/B." << endl;
            cout << "Ejemplo: si se ingresan 8 y 3 se debe imprimir: El residuo de la division 8/3 es: 2" << "\n"
                 << endl;

            int A, B;

            cout << "Ingrese el valor del numero A: " << endl;
            cin >> A;
            cout << "Ingrese el valor del numero B: " << endl;
            cin >> B;
            cout << "El residuo de la division " << A << "/" << B << " es: " << A % B << endl;
            cout << "-----------------------------------------" << endl;
            break;
        }
        case 2:
        {
            cout << "Ejecutando Ejercicio 2..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que pida un numero N e imprima en pantalla si es par o impar." << endl;

            int N;

            cout << "Ingrese un numero: " << endl;
            cin >> N;

            if (N % 2 == 0)
            {
                cout << "El numero " << N << " es par." << endl;
            }
            else
            {
                cout << "El numero " << N << " es impar." << endl;
            }
            cout << "-----------------------------------------" << endl;

            break;
        }
        case 3:
        {
            cout << "Ejecutando Ejercicio 3..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que pida dos números A y B e imprima en pantalla el mayor." << endl;

            int C, D;
            cout << "Ingrese el valor de A: " << endl;
            cin >> C;
            cout << "Ingrese el valor de B: " << endl;
            cin >> D;

            if (C > D)
            {
                cout << "El mayor es: " << C << endl;
            }
            else if (D > C)
            {
                cout << "El mayor es: " << D << endl;
            }
            else
            {
                cout << "Los numeros son iguales." << endl;
            }
            cout << "-----------------------------------------" << endl;

            break;
        }
        case 4:
        {
            cout << "Ejecutando Ejercicio 4..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que pida dos números A y B e imprima en pantalla el menor." << endl;

            int E, F;
            cout << "Ingrese el valor de A: " << endl;
            cin >> E;
            cout << "Ingrese el valor de B: " << endl;
            cin >> F;

            if (E < F)
            {
                cout << "El menor es: " << E << endl;
            }
            else if (F < E)
            {
                cout << "El menor es: " << F << endl;
            }
            else
            {
                cout << "Los numeros son iguales." << endl;
            }
            cout << "-----------------------------------------" << endl;

            break;
        }
        case 5:
        {
            cout << "Ejecutando Ejercicio 5..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que pida dos números A y B e imprima en pantalla la división A/B con redondeo." << endl;

            int H, I;
            cout << "Ingrese el valor de H: " << endl;
            cin >> H;
            cout << "Ingrese el valor de I: " << endl;
            cin >> I;

            double resultado = (double)H / (double)I;

            cout << "La división de H/I redondeada al entero más cercano es: " << round(resultado) << endl;

            break;
        }
        case 6:
        {
            cout << "Ejecutando Ejercicio 6..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que pida dos números A y B e imprima en pantalla la potencia AB, sin hacer uso de librerías matemáticas." << endl;

            int J, K;
            cout << "Ingrese el valor de A: " << endl;
            cin >> J;
            cout << "Ingrese el valor de B: " << endl;
            cin >> K;

            int resultado = 1;
            for (int i = 0; i < K; i++)
            {
                resultado *= J;
            }
            cout << "La potencia " << J << "^" << K << " es: " << resultado << endl;
            break;
        }
        case 7:
        {
            cout << "Ejecutando Ejercicio 7..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que pida un número N e imprima en pantalla la suma de todos los números entre 0 y N (incluyéndose el mismo)." << endl;

            int N;
            cout << "Ingrese un número: " << endl;
            cin >> N;

            int suma = 0;
            for (int i = 0; i <= N; i++)
            {
                suma += i;
            }
            cout << "La suma de los números entre 0 y " << N << " es: " << suma << endl;
            break;
        }
        case 8:
        {
            cout << "Ejecutando Ejercicio 8..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que pida un número N e imprima en pantalla su factorial." << endl;

            int N;
            cout << "Ingrese un número: " << endl;
            cin >> N;

            int factorial = 1;
            for (int i = 1; i <= N; i++)
            {
                factorial *= i;
            }
            cout << "El factorial de " << N << " es: " << factorial << endl;

            break;
        }
        case 9:
        {
            cout << "Ejecutando Ejercicio 9..." << endl;
            cout << "-----------------------------------------" << endl;
            break;
        }
        case 10:
        {
            cout << "Ejecutando Ejercicio 10..." << endl;
            cout << "-----------------------------------------" << endl;
            break;
        }
        case 11:
        {
            cout << "Ejecutando Ejercicio 11..." << endl;
            cout << "-----------------------------------------" << endl;
            break;
        }
        case 12:
            cout << "Ejecutando Ejercicio 12..." << endl;
            cout << "-----------------------------------------" << endl;
            break;
        case 13:
            cout << "Ejecutando Ejercicio 13..." << endl;
            cout << "-----------------------------------------" << endl;
            break;
        case 14:
            cout << "Ejecutando Ejercicio 14..." << endl;
            cout << "-----------------------------------------" << endl;
            break;
        case 15:
            cout << "Ejecutando Ejercicio 15..." << endl;
            cout << "-----------------------------------------" << endl;
            break;
        case 16:
            cout << "Ejecutando Ejercicio 16..." << endl;
            cout << "-----------------------------------------" << endl;
            break;
        case 17:
            cout << "Ejecutando Ejercicio 17..." << endl;
            cout << "-----------------------------------------" << endl;
            break;
        case 18:
            cout << "Ejecutando Ejercicio 18..." << endl;
            cout << "-----------------------------------------" << endl;
            break;
        case 19:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion invalida. Por favor, seleccione una opcion del 1 al 18." << endl;
            break;
        }
    }
    return 0;
}