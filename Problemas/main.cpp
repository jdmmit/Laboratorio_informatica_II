#include <iostream>
#include <cmath>

using namespace std;

void problema1()
{
    cout << "Resolviendo Problema 1..." << endl;
}

void problema2()
{
    cout << "Resolviendo Problema 2..." << endl;
}

void problema3()
{
    cout << "Resolviendo Problema 3..." << endl;
}

void problema4()
{
    cout << "Resolviendo Problema 4..." << endl;
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