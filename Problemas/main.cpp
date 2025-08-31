#include <iostream>
#include <cmath>

using namespace std;

void problema1()
{
    cout << "Resolviendo Problema 1..." << endl;
    cout << "Escriba un programa que identifique si un carácter ingresado es una vocal, una consonante o ninguna de las 2 e imprima un mensaje según el caso." << endl;
    cout << "-----------------------------------------" << endl;

    char c;
    cout << "Ingrese un caracter: ";
    cin >> c;

    if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
    {
        cout << "No es una letra." << endl;
    }
    else
    {
        // Pasar a minúscula si es mayúscula
        if (c >= 'A' && c <= 'Z')
        {
            c = c + 32;
        }

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            cout << "Es una vocal." << endl;
        }
        else
        {
            cout << "Es una consonante." << endl;
        }
    }
    cout << "-----------------------------------------" << endl;
}

void problema2()
{
    cout << "Ejecutando Problema 2..." << endl;
    cout << "Se necesita un programa que permita determinar la mínima combinación de billetes y monedas para una cantidad de dinero determinada.Los billetes en circulación son de $50.000, $20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.Hacer un programa que entregue el número de billetes y monedas de cada denominación para completar la cantidad deseada.Si por medio de los billetes y monedas disponibles no se puede lograr la cantidad deseada, el sistema deberá decir lo que resta para lograrla." << endl;
    cout << "-----------------------------------------" << endl;

    int monto;
    cout << "Ingrese el monto: ";
    cin >> monto;
    int den[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    int cant[10];
    for (int i = 0; i < 10; i++)
    {
        cant[i] = monto / den[i];
        monto = monto % den[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << den[i] << " : " << cant[i] << endl;
    }
    cout << "Faltante: " << monto << endl;

    cout << "-----------------------------------------" << endl;
}

void problema3()
{
    cout << "Ejecutando Problema 3..." << endl;
    cout << "Escriba un programa que debe leer un mes y un día de dicho mes para luego decir si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero, en dicho caso imprimir posiblemente año bisiesto. " << endl;
    cout << "-----------------------------------------" << endl;

    int dia, mes;
    cout << "Ingrese el mes: ";
    cin >> mes; // si ingresan solo "14" -> mes inválido será detectado
    if (mes < 1 || mes > 12)
    {
        cout << mes << " es un mes invalido." << endl;
        }
    cout << "Ingrese el dia: ";
    cin >> dia;
    // días máximo por mes (sin considerar año): febrero 28 (29 caso especial)
    int maxd;
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        maxd = 31;
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        maxd = 30;
    else
        maxd = 28; // febrero por defecto
    if (dia < 1 || dia > maxd)
    {
        if (mes == 2 && dia == 29)
        {
            cout << "29/2 es valida en bisiesto." << endl;
        }
        else
        {
            cout << dia << "/" << mes << " es una fecha invalida." << endl;
        }
    }
    else
    {
        cout << dia << "/" << mes << " es una fecha valida." << endl;
    }

    cout << "-----------------------------------------" << endl;
}

void problema4()
{
    cout << "Ejecutando Problema 4..." << endl;
}

void problema5()
{
    cout << "Resolviendo Problema 5..." << endl;
}

void problema6()
{
    cout << "Resolviendo Problema 6..." << endl;
}

void problema7()
{
    cout << "Resolviendo Problema 7..." << endl;
}

void problema8()
{
    cout << "Resolviendo Problema 8..." << endl;
}

void problema9()
{
    cout << "Resolviendo Problema 9..." << endl;
}

void problema10()
{
    cout << "Resolviendo Problema 10..." << endl;
}

void problema11()
{
    cout << "Resolviendo Problema 11..." << endl;
}

void problema12()
{
    cout << "Resolviendo Problema 12..." << endl;
}

void problema13()
{
    cout << "Resolviendo Problema 13..." << endl;
}

void problema14()
{
    cout << "Resolviendo Problema 14..." << endl;
}

void problema15()
{
    cout << "Resolviendo Problema 15..." << endl;
}

void problema16()
{
    cout << "Resolviendo Problema 16..." << endl;
}

void problema17()
{
    cout << "Resolviendo Problema 17..." << endl;
}

void problema18()
{
    cout << "Resolviendo Problema 18..." << endl;
}

int main()
{
    cout << "-----MENU DEL LABORATORIO PRACTICO 1-----" << endl;
    cout << "-----------------------------------------" << endl;

    int opcion = 0;

    while (opcion != 19)
    {

        cout << "1. Problema 1" << endl;
        cout << "2. Problema 2" << endl;
        cout << "3. Problema 3" << endl;
        cout << "4. Problema 4" << endl;
        cout << "5. Problema 5" << endl;
        cout << "6. Problema 6" << endl;
        cout << "7. Problema 7" << endl;
        cout << "8. Problema 8" << endl;
        cout << "9. Problema 9" << endl;
        cout << "10. Problema 10" << endl;
        cout << "11. Problema 11" << endl;
        cout << "12. Problema 12" << endl;
        cout << "13. Problema 13" << endl;
        cout << "14. Problema 14" << endl;
        cout << "15. Problema 15" << endl;
        cout << "16. Problema 16" << endl;
        cout << "17. Problema 17" << endl;
        cout << "18. Problema 18" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "19. Salir" << endl;
        cout << "Ingrese una opcion: " << endl;

        cin >> opcion;

        switch (opcion)
        {
        case 1:
            problema1();
            break;
        case 2:
            problema2();
            break;
        case 3:
            problema3();
            break;

        case 4:
            problema4();
            break;
        case 5:
            problema5();
            break;
        case 6:
            problema6();
            break;
        case 7:
            problema7();
            break;
        case 8:
            problema8();
            break;
        case 9:
            problema9();
            break;
        case 10:
            problema10();
            break;
        case 11:
            problema11();
            break;
        case 12:
            problema12();
            break;
        case 13:
            problema13();
            break;
        case 14:
            problema14();
            break;
        case 15:
            problema15();
            break;
        case 16:
            problema16();
            break;
        case 17:
            problema17();
            break;
        case 18:
            problema18();
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