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

bool validoTiempo(int t)
{
    int hh = t / 100;
    int mm = t % 100;
    return (t >= 0 && hh >= 0 && hh < 24 && mm >= 0 && mm < 60);
}

void problema4()
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
        return;
    }

    cout << "Ingrese la duracion (hhmm): ";
    cin >> dur;
    int dh = dur / 100;
    int dm = dur % 100;
    if (dm < 0 || dm >= 60 || dh < 0)
    {
        cout << dur << " es un tiempo invalido." << endl;
        return;
    }

    int hh = t / 100;
    int mm = t % 100;
    mm += dm;
    hh += dh + (mm / 60);
    mm = mm % 60;
    hh = hh % 24; // ajustar en 24h
    int resultado = hh * 100 + mm;
    cout << "La hora es " << resultado << "." << endl;
}

void problema5()
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
}

void problema6()
{
    cout << "Ejecutando Problema 6..." << endl;
    cout << " Escriba un programa que encuentre el valor aproximado del número de euler en base a la siguiente suma infinita : e = 1 / 0 !+1 / 1 !+1 / 2 !+1 / 3 !+1 / 4 !+1 / 5 !+... El usuario debe ingresar el número de elementos usados en la aproximación." << endl;

    cout << "-----------------------------------------" << endl;

    int elementos;
    cout << "Ingrese el número de elementos para la aproximación: ";
    cin >> elementos;

    double euler = 0.0;
    long long factorial = 1;

    for (int i = 0; i < elementos; i++)
    {
        if (i > 0)
            factorial *= i;
        euler += 1.0 / factorial;
    }

    cout << "El valor aproximado de euler es: " << euler << endl;

    cout << "-----------------------------------------" << endl;
}

void problema7()
{
    cout << "Ejecutando Problema 7..." << endl;
    cout << " En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y 1. Ej: 1, 1, 2, 3, 5, 8, .... Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie de Fibonacci menores a n" << endl;
    cout << "-----------------------------------------" << endl;

    int n;
    cout << "Ingrese un número: ";
    cin >> n;

    int a = 1, b = 1, suma = 0;
    while (b < n)
    {
        if (b % 2 == 0)
        {
            suma += b;
        }
        int temp = b;
        b += a;
        a = temp;
    }

    cout << "La suma de los números pares en la serie de Fibonacci menores a " << n << " es: " << suma << endl;

    cout << "-----------------------------------------" << endl;
}

void problema8()
{
    cout << "Ejecutando Problema 8..." << endl;
    cout << "Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los múltiplos de a y b que sean menores a c. Tenga en cuenta no sumar 2 veces los múltiplos comunes. " << endl;
    cout << "-----------------------------------------" << endl;

    int a;
    int b;
    int c;
    cout << "Ingrese el numero de a: ";
    cin >> a;
    cout << "Ingrese el numero de b: ";
    cin >> b;
    cout << "Ingrese el numero de c: ";
    cin >> c;

    int multiplos = 0;
    for (int i = 1; i < c; i++)
    {
        if (i % a == 0 || i % b == 0)
        {
            multiplos += i;
        }
    }
    cout << "La suma de los múltiplos de " << a << " y " << b << " menores a " << c << " es: " << multiplos << endl;

    cout << "-----------------------------------------" << endl;
}

void problema9()
{
    cout << "Ejecutando Problema 9..." << endl;
    cout << " Escriba un programa que pida un número entero N e imprima el resultado de la suma de todos sus dígitos elevados a sí mismos." << endl;
    cout << "-----------------------------------------" << endl;

    int n;
    cout << "Ingrese un numero entero: ";
    cin >> n;

    int suma = 0;
    while (n > 0)
    {
        int digito = n % 10;
        int potencia = 1;
        for (int i = 0; i < digito; ++i)
            potencia *= digito;
        suma += potencia;
        n /= 10;
    }

    cout << "La suma de los dígitos elevados a sí mismos es: " << suma << endl;
    cout << "-----------------------------------------" << endl;
}

void problema10()
{
    cout << "Ejecutando Problema 10..." << endl;
    cout << " Escriba un programa que reciba un número n e imprima el enésimo número primo." << endl;
    cout << "-----------------------------------------" << endl;

    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    int contador = 0;
    int numero = 1;

    while (contador < n)
    {
        numero++;
        bool esPrimo = true;

        for (int i = 2; i <= numero / 2; i++)
        {
            if (numero % i == 0)
            {
                esPrimo = false;
                break;
            }
        }

        if (esPrimo)
        {
            contador++;
        }
    }

    cout << "El " << n << "° número primo es: " << numero << endl;

    cout << "-----------------------------------------" << endl;
}

void problema11()
{
    cout << "Ejecutando Problema 11..." << endl;
    cout << "Escriba un programa que reciba un número y calcule el mínimo común múltiplo de todos los números enteros entre 1 y el número ingresado." << endl;
    cout << "-----------------------------------------" << endl;
    int n;
    cout << "Ingrese un número: ";
    cin >> n;

    int mcm = 1;
    for (int i = 1; i <= n; i++)
    {
        // Calcula el MCD de mcm e i
        int a = mcm, b = i;
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        int mcd = a;
        mcm = (mcm * i) / mcd;
    }

    cout << "El mínimo común múltiplo de los números entre 1 y " << n << " es: " << mcm << endl;
    cout << "-----------------------------------------" << endl;
}

void problema12()
{
    cout << "Ejecutando Problema 12..." << endl;
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