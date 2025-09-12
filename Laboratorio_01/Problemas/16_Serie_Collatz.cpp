#include <iostream>

using namespace std;

int main()
{
    cout << "Ejecutando Problema 16..." << endl;
    cout << " La serie de Collatz se conforma con la siguiente regla: sea n un elemento de la serie, si n es par, el siguiente elemento es n/2, y si n es impar, el siguiente elemento es 3n+1. Escriba un programa que reciba un número k y calcule cual es el elemento inicial j (semilla), menor que k, que produce la serie más larga y diga cuantos términos m tiene la serie. Tip: la serie termina al llegar a un elemento cuyo valor sea 1." << endl;
    cout << "-----------------------------------------" << endl;

    int k;
    cin >> k;

    int mejor = 1, mayor = 0;

    for (int j = 1; j < k; j++)
    {
        int n = j, len = 1;
        while (n != 1)
        {
            n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
            len++;
        }
        if (len > mayor)
        {
            mayor = len;
            mejor = j;
        }
    }

    cout << "Semilla: " << mejor << endl;
    cout << "Longitud: " << mayor << endl;
    return 0;
}