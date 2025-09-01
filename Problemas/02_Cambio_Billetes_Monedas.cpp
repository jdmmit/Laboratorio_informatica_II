#include <iostream>

using namespace std;

int main()
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

    return 0;
}