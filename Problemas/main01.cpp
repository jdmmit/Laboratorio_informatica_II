#include <iostream>

using namespace std;

int main()
{
    cout << "-----MENU DEL LABORATORIO PRACTICO 1-----" << endl;
    cout << "-----------------------------------------" << endl;

    int opcion = 0;

    while (opcion != 18)
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
        cout << "-----------------------------------------" << endl;
        cout << "18. Salir" << endl;

        cin >> opcion;

        switch (opcion)
        {
        case 1:
        {
            cout << "Ejecutando Problema 1..." << endl;
            cout << "Escriba un programa que identifique si un carácter ingresado es una vocal, una consonante o ninguna de las 2 e imprima un mensaje según el caso." << endl;

            char c1;
            cout << "Ingrese un caracter: ";
            cin >> c1;

            if (!((c1 >= 'a' && c1 <= 'z') || (c1 >= 'A' && c1 <= 'Z')))
            {
                cout << "No es una letra." << endl;
            }
            else
            {

                if (c1 >= 'A' && c1 <= 'Z')
                {
                    c1 = c1 + 32;
                }

                if (c1 == 'a' || c1 == 'e' || c1 == 'i' || c1 == 'o' || c1 == 'u')
                {
                    cout << "Es una vocal." << endl;
                }
                else
                {
                    cout << "Es una consonante." << endl;
                }
            }
            break;
        }
        case 2:
        {
            cout << "Ejecutando Problema 2..." << endl;
            cout << "Se necesita un programa que permita determinar la mínima combinación de billetes y monedas para una cantidad de dinero determinada.Los billetes en circulación son de $50.000, $20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.Hacer un programa que entregue el número de billetes y monedas de cada denominación para completar la cantidad deseada.Si por medio de los billetes y monedas disponibles no se puede lograr la cantidad deseada, el sistema deberá decir lo que resta para lograrla." << endl;

            int monto2;
            cout << "Ingrese el monto: ";
            cin >> monto2;

            int valor2;

            valor2 = monto2 / 50000;
            cout << "50000 : " << valor2 << endl;
            monto2 %= 50000;
            valor2 = monto2 / 20000;
            cout << "20000 : " << valor2 << endl;
            monto2 %= 20000;
            valor2 = monto2 / 10000;
            cout << "10000 : " << valor2 << endl;
            monto2 %= 10000;
            valor2 = monto2 / 5000;
            cout << "5000  : " << valor2 << endl;
            monto2 %= 5000;
            valor2 = monto2 / 2000;
            cout << "2000  : " << valor2 << endl;
            monto2 %= 2000;
            valor2 = monto2 / 1000;
            cout << "1000  : " << valor2 << endl;
            monto2 %= 1000;
            valor2 = monto2 / 500;
            cout << "500   : " << valor2 << endl;
            monto2 %= 500;
            valor2 = monto2 / 200;
            cout << "200   : " << valor2 << endl;
            monto2 %= 200;
            valor2 = monto2 / 100;
            cout << "100   : " << valor2 << endl;
            monto2 %= 100;
            valor2 = monto2 / 50;
            cout << "50    : " << valor2 << endl;
            monto2 %= 50;

            cout << "Faltante: " << monto2 << endl;

            break;
        }
        case 3:
        {
            cout << "Ejecutando Problema 3..." << endl;
            cout << "Escriba un programa que debe leer un mes y un día de dicho mes para luego decir si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero, en dicho caso imprimir posiblemente año bisiesto. " << endl;
            cout << "-----------------------------------------" << endl;

            int dia3, mes3;
            cout << "Ingrese el mes (1-12): ";
            cin >> mes3;

            cout << "Ingrese el día: ";
            cin >> dia3;

            // Validar mes
            if (mes3 < 1 || mes3 > 12)
            {
                cout << "Mes inválido." << endl;
            }
            // Validar día según el mes
            else if (mes3 == 2) // Febrero
            {
                if (dia3 < 1 || dia3 > 29)
                {
                    cout << "Día inválido para febrero." << endl;
                }
                else if (dia3 == 29)
                {
                    cout << "Posiblemente año bisiesto." << endl;
                }
                else
                {
                    cout << "Fecha válida." << endl;
                }
            }
            else if (mes3 == 4 || mes3 == 6 || mes3 == 9 || mes3 == 11) // Meses de 30 días
            {
                if (dia3 < 1 || dia3 > 30)
                {
                    cout << "Día inválido para este mes (máximo 30 días)." << endl;
                }
                else
                {
                    cout << "Fecha válida." << endl;
                }
            }
            else // Meses de 31 días
            {
                if (dia3 < 1 || dia3 > 31)
                {
                    cout << "Día inválido para este mes (máximo 31 días)." << endl;
                }
                else
                {
                    cout << "Fecha válida." << endl;
                }
            }
            break;
        }
        case 4:
        {
            cout << "Ejecutando Problema 4..." << endl;
            cout << "Escriba un programa para leer dos numeros enteros con el siguiente significado: el valor del primer numero representa una hora del dia en un reloj de 24 horas, de modo que 1245 representa las doce y cuarenta y cinco de la tarde. El segundo entero representa un tiempo de duracion de la misma manera, por lo que 345 representa tres horas y 45 minutos. El programa debe sumar esta duracion al primer numero, y el resultado sera impreso en la misma notacion, en este caso 1630, que es el tiempo de 3 horas y 45 minutos despues de 12:45." << endl;
            cout << "-----------------------------------------" << endl;

            int hora4, duracion4;
            cout << "Ingrese la hora (hhmm): ";
            cin >> hora4;
            cout << "Ingrese la duracion (hhmm): ";
            cin >> duracion4;

            int horas4 = hora4 / 100;
            int minutos4 = hora4 % 100;
            minutos4 += duracion4 % 100;
            horas4 += duracion4 / 100 + (minutos4 / 60);
            minutos4 %= 60;
            horas4 %= 24;

            cout << "La hora resultante es: " << horas4 * 100 + minutos4 << endl;

            break;
        }
        case 5:
        {
            cout << "Ejecutando Problema 5..." << endl;
            cout << "Escriba un programa que muestre el siguiente patrón en la pantalla: El tamaño del patrón estará determinado por un número entero impar que ingrese el usuario. En el ejemplo mostrado, el tamaño de la figura es 7" << endl;

            int n5;
            cout << "Ingrese un numero impar positivo: ";
            cin >> n5;
            if (n5 % 2 == 0 || n5 <= 0)
            {
                cout << "Ingrese un numero impar positivo." << endl;
            }
            else
            {
                for (int i = 0; i < n5; i++)
                {
                    int diff = n5 / 2 - i;
                    int absValue = (diff < 0) ? -diff : diff; // abs manual
                    int stars = n5 - absValue * 2;
                    int spaces = absValue;
                    for (int s = 0; s < spaces; s++)
                        cout << ' ';
                    for (int j = 0; j < stars; j++)
                        cout << '*';
                    cout << endl;
                }
            }
            cout << "-----------------------------------------" << endl;

            break;
        }
        case 6:
        {
            cout << "Ejecutando Problema 6..." << endl;
            cout << " Escriba un programa que encuentre el valor aproximado del número de euler en base a la siguiente suma infinita : e = 1 / 0 !+1 / 1 !+1 / 2 !+1 / 3 !+1 / 4 !+1 / 5 !+... El usuario debe ingresar el número de elementos usados en la aproximación." << endl;

            int n6;
            cout << "Ingrese el número de términos: ";
            cin >> n6;

            double suma6 = 1.0; // arranca con 1/0! = 1
            double fact6 = 1.0; // factorial acumulado

            for (int i = 1; i < n6; i++)
            {
                fact6 *= i;           // factorial de i
                suma6 += 1.0 / fact6; // agrega 1/i!
            }

            cout << "e es aproximadamente: " << suma6 << endl;

            break;
        }
        case 7:
        {
            cout << "Ejecutando Problema 7..." << endl;
            cout << " En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y 1. Ej: 1, 1, 2, 3, 5, 8, .... Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie de Fibonacci menores a n" << endl;

            int n7;
            cout << "Ingrese un numero entero positivo: ";
            cin >> n7;
            int a7 = 1, b7 = 1;
            int suma7 = 0;
            while (b7 < n7)
            {
                if (b7 % 2 == 0)
                    suma7 += b7;
                int c7 = a7 + b7;
                a7 = b7;
                b7 = c7;
            }
            cout << "El resultado de la suma es: " << suma7 << endl;
            break;
        }
        case 8:
        {
            cout << "Ejecutando Problema 8..." << endl;
            cout << "Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los múltiplos de a y b que sean menores a c. Tenga en cuenta no sumar 2 veces los múltiplos comunes." << endl;

            int a8, b8, c8;
            cout << "Ingrese el valor de a: ";
            cin >> a8;
            cout << "Ingrese el valor de b: ";
            cin >> b8;
            cout << "Ingrese el valor de c: ";
            cin >> c8;

            int suma8 = 0;
            for (int i = 1; i < c8; i++)
            {
                if ((i % a8 == 0) || (i % b8 == 0))
                    suma8 += i;
            }

            cout << "La suma de los múltiplos de " << a8 << " y " << b8 << " menores a " << c8 << " es: " << suma8 << endl;
            cout << "-----------------------------------------" << endl;

            break;
        }
        case 9:
        {
            cout << "Ejecutando Problema 9..." << endl;
            cout << " Escriba un programa que pida un número entero N e imprima el resultado de la suma de todos sus dígitos elevados a sí mismos." << endl;
            cout << "-----------------------------------------" << endl;

            int n9;
            cout << "Ingrese un numero entero: ";
            cin >> n9;

            int sum9 = 0;
            while (n9 > 0)
            {
                int dig9 = n9 % 10;
                int pot9 = 1;
                for (int i = 0; i < dig9; ++i)
                    pot9 *= dig9;
                sum9 += pot9;
                n9 /= 10;
            }

            cout << "La suma de los dígitos elevados a sí mismos es: " << sum9 << endl;
            cout << "-----------------------------------------" << endl;

            break;
        }
        case 10:
        {
            cout << "Ejecutando Problema 10..." << endl;
            cout << "Escriba un programa que reciba un número n e imprima el enésimo número primo." << endl;

            int n10;
            cout << "Ingrese n para encontrar el n-ésimo número primo: ";
            cin >> n10;

            if (n10 <= 0)
            {
                cout << "Por favor ingrese un número positivo." << endl;
            }
            else
            {
                int contador10 = 0;
                int numero10 = 2;

                while (contador10 < n10)
                {
                    bool esPrimo10 = true;

                    // Verificar si numero es primo
                    if (numero10 == 2)
                    {
                        esPrimo10 = true;
                    }
                    else if (numero10 % 2 == 0)
                    {
                        esPrimo10 = false;
                    }
                    else
                    {
                        for (int i = 3; i * i <= numero10; i += 2)
                        {
                            if (numero10 % i == 0)
                            {
                                esPrimo10 = false;
                                break;
                            }
                        }
                    }

                    if (esPrimo10)
                    {
                        contador10++;
                        if (contador10 == n10)
                        {
                            cout << "El " << n10 << "-ésimo número primo es: " << numero10 << endl;
                            break;
                        }
                    }
                    numero10++;
                }
            }

            break;
        }
        case 11:
        {
            cout << "Ejecutando Problema 11..." << endl;
            cout << "Escriba un programa que reciba un número y calcule el mínimo común múltiplo de todos los números enteros entre 1 y el número ingresado." << endl;

            int n11;
            cout << "Ingrese un número: ";
            cin >> n11;

            int mcm11 = 1;
            for (int i = 2; i <= n11; i++)
            {
                int a11 = mcm11, b11 = i;
                while (b11 != 0)
                {
                    int temp11 = b11;
                    b11 = a11 % b11;
                    a11 = temp11;
                }
                int mcd11 = a11;
                mcm11 = mcm11 * i / mcd11;
            }

            cout << "El mínimo común múltiplo de los números entre 1 y " << n11 << " es: " << mcm11 << endl;
            break;
        }
        case 12:
        {
            cout << "Ejecutando Problema 12..." << endl;
            cout << "Escriba un programa que calcula el máximo factor primo de un número." << endl;
            cout << "-----------------------------------------" << endl;

            int num;
            cout << "Ingrese un número: ";
            cin >> num;

            int maxFac = 1;
            for (int i = 2; i <= num; i++)
            {
                while (num % i == 0)
                {
                    maxFac = i;
                    num /= i;
                }
            }

            cout << "El máximo factor primo es: " << maxFac << endl;

            break;
        }
        case 13:
        {
            cout << "Ejecutando Problema 13..." << endl;
            cout << " Escriba un programa que reciba un número y calcule la suma de todos los primos menores que el número ingresado." << endl;

            int nume;
            cout << "Ingrese un número: ";
            cin >> nume;

            int sum = 0;
            for (int i = 2; i < nume; i++)
            {
                bool Primo = true;
                for (int j = 2; j * j <= i; j++)
                {
                    if (i % j == 0)
                    {
                        Primo = false;
                        break;
                    }
                }
                if (Primo)
                {
                    sum += i;
                }
            }

            cout << "La suma de los primos menores que " << nume << " es: " << sum << endl;

            break;
        }
        case 14:
        {
            cout << "Ejecutando Problema 14..." << endl;
            cout << " Un número palíndromo es igual de derecha a izquierda y de izquierda a derecha," << endl;
            cout << "-----------------------------------------" << endl;

            int nu;
            cout << "Ingrese un número: ";
            cin >> nu;

            int original = nu;
            int invertido = 0;

            while (nu > 0)
            {
                invertido = invertido * 10 + nu % 10;
                nu /= 10;
            }

            if (original == invertido)
            {
                cout << original << " es un número palíndromo." << endl;
            }
            else
            {
                cout << original << " no es un número palíndromo." << endl;
            }

            cout << "-----------------------------------------" << endl;
            break;
        }
        case 15:
        {
            cout << "Ejecutando Problema 15..." << endl;
            cout << " Empezando con el número 1 y moviéndose hacia la izquierda y en sentido horario se genera una espiral de números como la siguiente :  En el caso de esta espiral de 5x5, la suma de los números en la diagonal es 101. Escriba un programa que reciba un número impar n y calcule la suma de los números en la diagonal de una espiral de nxn." << endl;

            int n;
            cin >> n;
            if (n % 2 == 0)
            {
                cout << "El número debe ser impar." << endl;
                return 0;
            }

            long long suma = 1, k = 1;
            while (k <= (n - 1) / 2)
            {
                suma += 16LL * k * k + 4LL * k + 4;
                k++;
            }

            cout << "Resultado: " << suma << endl;
            break;
        }
        case 16:
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
        case 17:
            cout << "Ejecutando Problema 17..." << endl;
            cout << " La secuencia de números triangulares se forma al sumar su posición en el arreglo con el valor del número anterior: 1, 1+2=3, 3+3=6, 6+4=10, 10+5=15, 15+6=21, 21+7=28..." << endl;

            int n;
            cout << "Ingrese el valor de n: ";
            cin >> n;

            int triangular = 0;
            for (int i = 1; i <= n; i++)
            {
                triangular += i;
            }

            cout << "El número triangular en la posición " << n << " es: " << triangular << endl;
            break;
        case 18:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion no valida. Por favor, seleccione una opcion del 1 al 18." << endl;
            break;
        }
    }
}