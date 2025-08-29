#include <iostream>
#include <cmath>

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
    cout << "Escriba un programa que pida dos numeros A y B e imprima en pantalla el mayor." << endl;

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

void ejercicio4()
{
    cout << "Ejecutando Ejercicio 4..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida dos numeros A y B e imprima en pantalla el menor." << endl;

    pedir_Valores();

    if (A < B)
    {
        cout << "El menor es: " << A << endl;
    }
    else if (B < A)
    {
        cout << "El menor es: " << B << endl;
    }
    else
    {
        cout << "Los numeros son iguales." << endl;
    }
    cout << "-----------------------------------------" << endl;
}

void ejercicio5()
{
    cout << "Ejecutando Ejercicio 5..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida dos numeros A y B e imprima en pantalla la division A/B con redondeo." << endl;

    pedir_Valores();

    double resultado = (double)A / (double)B;

    cout << "La division de A/B redondeada al entero mas cercano es: " << round(resultado) << endl;
}

void ejercicio6()
{
    cout << "Ejecutando Ejercicio 6..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida dos numeros A y B e imprima en pantalla la potencia AB, sin hacer uso de librerias matematicas." << endl;

    pedir_Valores();

    int resultado = 1;
    for (int i = 0; i < B; i++)
    {
        resultado *= A;
    }
    cout << "La potencia " << A << "^" << B << " es: " << resultado << endl;
}

void ejercicio7()
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
}

void ejercicio8()
{
    cout << "Ejecutando Ejercicio 8..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima en pantalla su factorial." << endl;

    int N;
    cout << "Ingrese un numero: " << endl;
    cin >> N;

    int factorial = 1;
    for (int i = 1; i <= N; i++)
    {
        factorial *= i;
    }
    cout << "El factorial de " << N << " es: " << factorial << endl;
}

void ejercicio9()
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
}

void ejercicio10()
{
    cout << "Ejecutando Ejercicio 10..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima en pantalla todos los multiplos de dicho numero entre 1 y 100." << endl;

    int N;
    cout << "Ingrese un numero: ";
    cin >> N;
    cout << "Multiplos de " << N << " entre 1 y 100:" << endl;
    for (int i = 1; i <= 100; i++)
    {
        if (i % N == 0)
        {
            cout << i << endl;
        }
    }
}

void ejercicio11()
{
    cout << "Ejecutando Ejercicio 11..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima en pantalla su tabla de multiplicar hasta 10xN." << endl;

    int N;
    cout << "Ingrese el valor de N: " << endl;
    cin >> N;

    for (int i = 1; i <= 10; i++)
    {
        cout << N << " x " << i << " = " << N * i << endl;
    }
}

void ejercicio12()
{
    cout << "Ejecutando Ejercicio 12..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima todas las potencias desde N^1 hasta N^5." << endl;

    int N;
    cout << "Ingrese el valor de N: ";
    cin >> N;

    int potencia = 1; // empezamos en N^0 = 1

    for (int i = 1; i <= 5; i++)
    {
        potencia *= N; // multiplicamos por N en cada paso
        cout << N << "^" << i << " = " << potencia << endl;
    }
}

void ejercicio13()
{
    cout << "Ejecutando Ejercicio 13..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima todos los divisores de N." << endl;

    int N;
    cout << "Ingrese un numero: ";
    cin >> N;

    cout << "Los divisores de " << N << " son: ";
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

void ejercicio14()
{
    cout << "Ejecutando Ejercicio 14..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que imprima dos columnas paralelas, una con los numeros del 1 al 50 y otra con los numeros del 50 al 1." << endl;

    for (int i = 1; i <= 50; i++)
    {
        cout << i << "\t" << (51 - i) << endl;
    }
}

void ejercicio15()
{
    cout << "Ejecutando Ejercicio 15..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida constantemente numeros hasta que se ingrese el numero cero e imprima en pantalla la suma de todos los numeros ingresados." << endl;

    int numero, suma = 0;

    while (true)
    {
        cout << "Ingrese un numero (0 para terminar): ";
        cin >> numero;

        if (numero == 0)
            break; // condicion de salida

        suma += numero;
    }

    cout << "La suma de todos los numeros ingresados es: " << suma << endl;
}

void ejercicio16()
{
    cout << "Ejecutando Ejercicio 16..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida constantemente numeros hasta que se ingrese el numero cero e imprima en pantalla el promedio de los numeros ingresados (excluyendo el cero)." << endl;

    int numero, suma = 0, contador = 0;

    cout << "Ingrese un numero (0 para terminar): ";
    while (cin >> numero && numero != 0)
    {
        suma += numero;
        contador++;
        cout << "Ingrese un numero (0 para terminar): ";
    }

    if (contador)
        cout << "El promedio de los numeros ingresados es: " << (double)suma / contador << endl;
    else
        cout << "No se ingresaron numeros validos." << endl;
}

void ejercicio17()
{
    cout << "Ejecutando Ejercicio 17..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida constantemente numeros hasta que se ingrese el numero cero e imprima en pantalla el mayor de todos los numeros ingresados." << endl;

    int numero, mayor;
    bool hayNumeros = false; // bandera para saber si se ingreso al menos un numero

    cout << "Ingrese un numero (0 para terminar): ";
    while (cin >> numero && numero != 0)
    {
        if (!hayNumeros || numero > mayor)
        {
            mayor = numero;
            hayNumeros = true;
        }
        cout << "Ingrese un numero (0 para terminar): ";
    }

    if (hayNumeros)
        cout << "El mayor de los numeros ingresados es: " << mayor << endl;
    else
        cout << "No se ingresaron numeros validos." << endl;
}

void ejercicio18()
{
    cout << "Ejecutando Ejercicio 18..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima si es o no un cuadrado perfecto." << endl;

    int N;
    cout << "Ingrese un numero: ";
    cin >> N;

    cout << N << (sqrt(N) == (int)sqrt(N) ? " es " : " no es ") << "un cuadrado perfecto." << endl;
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

        case 4:
            ejercicio4();
            break;
        case 5:
            ejercicio5();
            break;
        case 6:
            ejercicio6();
            break;
        case 7:
            ejercicio7();
            break;
        case 8:
            ejercicio8();
            break;
        case 9:
            ejercicio9();
            break;
        case 10:
            ejercicio10();
            break;
        case 11:
            ejercicio11();
            break;
        case 12:
            ejercicio12();
            break;
        case 13:
            ejercicio13();
            break;
        case 14:
            ejercicio14();
            break;
        case 15:
            ejercicio15();
            break;
        case 16:
            ejercicio16();
            break;
        case 17:
            ejercicio17();
            break;
        case 18:
            ejercicio18();
            break;
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