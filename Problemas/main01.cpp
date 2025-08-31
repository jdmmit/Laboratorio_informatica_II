#include <iostream>

using namespace std;

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

        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Ejecutando Problema 1..." << endl;
            cout << "Escriba un programa que identifique si un carácter ingresado es una vocal, una consonante o ninguna de las 2 e imprima un mensaje según el caso." << endl;

            char c;
            cout << "Ingrese un caracter: ";
            cin >> c;

            if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
            {
                cout << "No es una letra." << endl;
            }
            else
            {

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
            break;
        case 2:
            cout << "Ejecutando Problema 2..." << endl;
            cout << "Se necesita un programa que permita determinar la mínima combinación de billetes y monedas para una cantidad de dinero determinada.Los billetes en circulación son de $50.000, $20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.Hacer un programa que entregue el número de billetes y monedas de cada denominación para completar la cantidad deseada.Si por medio de los billetes y monedas disponibles no se puede lograr la cantidad deseada, el sistema deberá decir lo que resta para lograrla." << endl;

            int monto;
            cout << "Ingrese el monto: ";
            cin >> monto;

            int valor;

            valor = monto / 50000;
            cout << "50000 : " << valor << endl;
            monto %= 50000;
            valor = monto / 20000;
            cout << "20000 : " << valor << endl;
            monto %= 20000;
            valor = monto / 10000;
            cout << "10000 : " << valor << endl;
            monto %= 10000;
            valor = monto / 5000;
            cout << "5000  : " << valor << endl;
            monto %= 5000;
            valor = monto / 2000;
            cout << "2000  : " << valor << endl;
            monto %= 2000;
            valor = monto / 1000;
            cout << "1000  : " << valor << endl;
            monto %= 1000;
            valor = monto / 500;
            cout << "500   : " << valor << endl;
            monto %= 500;
            valor = monto / 200;
            cout << "200   : " << valor << endl;
            monto %= 200;
            valor = monto / 100;
            cout << "100   : " << valor << endl;
            monto %= 100;
            valor = monto / 50;
            cout << "50    : " << valor << endl;
            monto %= 50;

            cout << "Faltante: " << monto << endl;

            break;
        case 3:
            cout << "Ejecutando Problema 2..." << endl;
            cout << "Escriba un programa que debe leer un mes y un día de dicho mes para luego decir si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero, en dicho caso imprimir posiblemente año bisiesto. " << endl;
            cout << "-----------------------------------------" << endl;

            int dia, mes;
            cout << "Ingrese el mes (1-12): ";
            cin >> mes;

            cout << "Ingrese el día: ";
            cin >> dia;

            if (mes < 1 || mes > 12 || dia < 1 || dia > 31)
            {
                cout << "Fecha inválida." << endl;
            }
            else if (mes == 2 && dia == 29)
            {
                cout << "Posiblemente año bisiesto." << endl;
            }
            else
            {
                cout << "Fecha válida." << endl;
            }
            break;
        case 4:
            cout << "Ejecutando Problema 4..." << endl;
            break;
        case 5:
            cout << "Ejecutando Problema 5..." << endl;
            break;
        case 6:
            cout << "Ejecutando Problema 6..." << endl;
            break;
        case 7:
            cout << "Ejecutando Problema 7..." << endl;
            break;
        case 8:
            cout << "Ejecutando Problema 8..." << endl;
            break;
        case 9:
            cout << "Ejecutando Problema 9..." << endl;
            break;
        case 10:
            cout << "Ejecutando Problema 10..." << endl;
            break;
        case 11:
            cout << "Ejecutando Problema 11..." << endl;
            break;
        case 12:
            cout << "Ejecutando Problema 12..." << endl;
            break;
        case 13:
            cout << "Ejecutando Problema 13..." << endl;
            break;
        case 14:
            cout << "Ejecutando Problema 14..." << endl;
            break;
        case 15:
            cout << "Ejecutando Problema 15..." << endl;
            break;
        case 16:
            cout << "Ejecutando Problema 16..." << endl;
            break;
        case 17:
            cout << "Ejecutando Problema 17..." << endl;
            break;
        case 18:
            cout << "Ejecutando Problema 18..." << endl;
            break;
        case 19:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion no valida. Por favor, seleccione una opcion del 1 al 19." << endl;
            break;
        }
    }
    return 0;
}