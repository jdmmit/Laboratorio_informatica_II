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
            break;
        case 2:
            cout << "Ejecutando Problema 2..." << endl;
            break;
        case 3:
            cout << "Ejecutando Problema 3..." << endl;
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