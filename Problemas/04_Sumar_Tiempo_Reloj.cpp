#include <iostream>
using namespace std;

// Función para validar el formato hhmm
bool validoTiempo(int t)
{
    int hh = t / 100;
    int mm = t % 100;
    return (t >= 0 && hh >= 0 && hh < 24 && mm >= 0 && mm < 60);
}

int main()
{
    cout << "Ejecutando Problema 4..." << endl;
    cout << "Escriba un programa para leer dos numeros enteros con el siguiente significado: el valor del primer numero representa una hora del dia en un reloj de 24 horas, de modo que 1245 representa las doce y cuarenta y cinco de la tarde. El segundo entero representa un tiempo de duracion de la misma manera, por lo que 345 representa tres horas y 45 minutos. El programa debe sumar esta duracion al primer numero, y el resultado sera impreso en la misma notacion, en este caso 1630, que es el tiempo de 3 horas y 45 minutos despues de 12:45." << endl;
    cout << "-----------------------------------------" << endl;

    int t, dur;
    cout << "Ingrese la hora actual (hhmm): ";
    cin >> t;
    if (!validoTiempo(t))
    {
        cout << t << " es un tiempo invalido." << endl;
        return 0;
    }

    cout << "Ingrese la duracion (hhmm): ";
    cin >> dur;
    int dh = dur / 100;
    int dm = dur % 100;
    if (dm < 0 || dm >= 60 || dh < 0)
    {
        cout << dur << " es un tiempo invalido." << endl;
        return 0;
    }

    int hh = t / 100;
    int mm = t % 100;
    mm += dm;
    hh += dh + (mm / 60);
    mm = mm % 60;
    hh = hh % 24; // ajustar en 24h
    int resultado = hh * 100 + mm;
    cout << "La hora es " << resultado << "." << endl;
    return 0;
}