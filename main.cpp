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

void ejercicio1()
{
    cout << "Escriba un programa que pida dos numeros A y B e imprima en pantalla el residuo de la division A/B." << endl;
    cout << "Ejemplo: si se ingresan 8 y 3 se debe imprimir: El residuo de la division 8/3 es: 2" << "\n"
         << endl;

    pedir_Valores();

    cout << "El residuo de la division " << A << "/" << B << " es: " << A % B << endl;
    cout << "-----------------------------------------" << endl;
}

void ejercicio2()
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
}

void ejercicio3()
{
    cout << "Ejecutando Ejercicio 3..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida dos números A y B e imprima en pantalla el mayor." << endl;

    pedir_Valores();

    if (A > B)
    {
        cout << "El mayor es: " << A << endl;
    }
    else if (B > A)
    {
        cout << "El mayor es: " << B << endl;
    }
    else
    {
        cout << "Los numeros son iguales." << endl;
    }
    cout << "-----------------------------------------" << endl;
}

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
        cout << "Ingrese una opcion: " << endl;

        cin >> opcion;

        switch (opcion)
        {
        case 1:
            ejercicio1();
            break;
        case 2:
            ejercicio2();
            break;
        case 3:
            ejercicio3();
            break;

        // case 4:
        //   ejercicio4();
        //   break;
        // case 5:
        //   ejercicio5();
        //   break;
        // case 6:
        //   ejercicio6();
        //   break;
        // case 7:
        //   ejercicio7();
        //   break;
        // case 8:
        //   ejercicio8();
        //   break;
        // case 9:
        //   ejercicio9();
        //   break;
        // case 10:
        //   ejercicio10();
        //   break;
        // case 11:
        //   ejercicio11();
        //   break;
        // case 12:
        //   ejercicio12();
        //   break;
        // case 13:
        //   ejercicio13();
        //   break;
        // case 14:
        //   ejercicio14();
        //   break;
        // case 15:
        //   ejercicio15();
        //   break;
        // case 16:
        //   ejercicio16();
        //   break;
        // case 17:
        //   ejercicio17();
        //   break;
        // case 18:
        //   ejercicio18();
        //   break;
        case 19:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion invalida. Por favor, seleccione una opcion del 1 al 18." << endl;
            break;
        }

        cout << endl;
    }
}