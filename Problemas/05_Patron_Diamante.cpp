#include <iostream>

using namespace std;

int main()
{
    cout << "Ejecutando Problema 5..." << endl;
    cout << "Escriba un programa que muestre el siguiente patrón en la pantalla: El tamaño del patrón estará determinado por un número entero impar que ingrese el usuario. En el ejemplo mostrado, el tamaño de la figura es 7" << endl;
    cout << "-----------------------------------------" << endl;

    int n;
    cout << "Ingrese un numero impar positivo: ";
    cin >> n;
    if (n % 2 == 0 || n <= 0)
    {
        cout << "Ingrese un numero impar positivo." << endl;
        return 0;
    }
    int mid = (n / 2) + 1;
    // parte superior
    for (int i = 1; i <= mid; i++)
    {
        int stars = 2 * i - 1;
        int spaces = mid - i;
        for (int s = 0; s < spaces; s++)
            cout << ' ';
        for (int j = 0; j < stars; j++)
            cout << '*';
        cout << endl;
    }
    // parte inferior
    for (int i = mid - 1; i >= 1; i--)
    {
        int stars = 2 * i - 1;
        int spaces = mid - i;
        for (int s = 0; s < spaces; s++)
            cout << ' ';
        for (int j = 0; j < stars; j++)
            cout << '*';
        cout << endl;
    }
    cout << "-----------------------------------------" << endl;
    return 0;
}