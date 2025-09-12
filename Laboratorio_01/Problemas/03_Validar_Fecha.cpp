#include <iostream>

using namespace std;

int main()
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
        return 0;
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
    return 0;
}