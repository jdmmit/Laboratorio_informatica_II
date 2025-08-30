#include <iostream>
#include <cmath>

using namespace std;

int A, B;

void pedir_Valores()
{
    cout << "Ingresa el valor de A: " << endl;
    cin >> A;
    cout << "Ingresa el valor de B: " << endl;
    cin >> B;
}

void ejercicio1()
{
    cout << "Escriba un programa que pida dos numeros A y B e imprima en pantalla el residuo de la division A/B." << endl;
    cout << "Ejemplo: si se ingresan 8 y 3 se debe imprimir: El residuo de la division 8/3 es: 2" << "\n"
         << endl;

    pedir_Valores();

    cout << "El residuo de la division " << A << "/" << B << " es: " << A % B << endl;
    cout << "-----------------------------------------" << endl;
}

void ejercicio2()
{
    cout << "Ejecutando Ejercicio 2..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima en pantalla si es par o impar." << endl;

    int N;

    cout << "Ingrese un numero: " << endl;
    cin >> N;

    if (N % 2 == 0)
    {
        cout << "El numero " << N << " es par." << endl;
    }
    else
    {
        cout << "El numero " << N << " es impar." << endl;
    }
    cout << "-----------------------------------------" << endl;
}

void ejercicio3()
{
    cout << "Ejecutando Ejercicio 3..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida dos numeros A y B e imprima en pantalla el mayor." << endl;

    pedir_Valores();

    if (A > B)
    {
        cout << "El mayor es: " << A << endl;
    }
    else if (B > A)
    {
        cout << "El mayor es: " << B << endl;
    }
    else
    {
        cout << "Los numeros son iguales." << endl;
    }
    cout << "-----------------------------------------" << endl;
}

void ejercicio4()
{
    cout << "Ejecutando Ejercicio 4..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida dos numeros A y B e imprima en pantalla el menor." << endl;

    pedir_Valores();

    if (A < B)
    {
        cout << "El menor es: " << A << endl;
    }
    else if (B < A)
    {
        cout << "El menor es: " << B << endl;
    }
    else
    {
        cout << "Los numeros son iguales." << endl;
    }
    cout << "-----------------------------------------" << endl;
}

void ejercicio5()
{
    cout << "Ejecutando Ejercicio 5..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida dos numeros A y B e imprima en pantalla la division A/B con redondeo." << endl;

    pedir_Valores();

    double resultado = (double)A / (double)B;

    cout << "La division de A/B redondeada al entero mas cercano es: " << round(resultado) << endl;
}

void ejercicio6()
{
    cout << "Ejecutando Ejercicio 6..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida dos numeros A y B e imprima en pantalla la potencia AB, sin hacer uso de librerias matematicas." << endl;

    pedir_Valores();

    int resultado = 1;
    for (int i = 0; i < B; i++)
    {
        resultado *= A;
    }
    cout << "La potencia " << A << "^" << B << " es: " << resultado << endl;
}

void ejercicio7()
{
    cout << "Ejecutando Ejercicio 7..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima en pantalla la suma de todos los numeros entre 0 y N (incluyendose el mismo)." << endl;

    int N;
    cout << "Ingrese un numero: " << endl;
    cin >> N;

    int suma = 0;
    for (int i = 0; i <= N; i++)
    {
        suma += i;
    }
    cout << "La suma de los numeros entre 0 y " << N << " es: " << suma << endl;
}

void ejercicio8()
{
    cout << "Ejecutando Ejercicio 8..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima en pantalla su factorial." << endl;

    int N;
    cout << "Ingrese un numero: " << endl;
    cin >> N;

    int factorial = 1;
    for (int i = 1; i <= N; i++)
    {
        factorial *= i;
    }
    cout << "El factorial de " << N << " es: " << factorial << endl;
}

void ejercicio9()
{
    cout << "Ejecutando Ejercicio 9..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima el perimetro y area de un circulo con radio N. Nota: use 3.1416 como una aproximacion de pi." << endl;

    double N;
    cout << "Ingrese el valor de N: " << endl;
    cin >> N;

    double perimetro = 2 * 3.1416 * N;
    double area = 3.1416 * N * N;

    cout << "El perimetro del circulo es: " << perimetro << endl;
    cout << "El area del circulo es: " << area << endl;
}

void ejercicio10()
{
    cout << "Ejecutando Ejercicio 10..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima en pantalla todos los multiplos de dicho numero entre 1 y 100." << endl;

    int N;
    cout << "Ingrese un numero: ";
    cin >> N;
    cout << "Multiplos de " << N << " entre 1 y 100:" << endl;
    for (int i = 1; i <= 100; i++)
    {
        if (i % N == 0)
        {
            cout << i << endl;
        }
    }
}

void ejercicio11()
{
    cout << "Ejecutando Ejercicio 11..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima en pantalla su tabla de multiplicar hasta 10xN." << endl;

    int N;
    cout << "Ingrese el valor de N: " << endl;
    cin >> N;

    for (int i = 1; i <= 10; i++)
    {
        cout << N << " x " << i << " = " << N * i << endl;
    }
}

void ejercicio12()
{
    cout << "Ejecutando Ejercicio 12..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima todas las potencias desde N^1 hasta N^5." << endl;

    int N;
    cout << "Ingrese el valor de N: ";
    cin >> N;

    int potencia = 1; // empezamos en N^0 = 1

    for (int i = 1; i <= 5; i++)
    {
        potencia *= N; // multiplicamos por N en cada paso
        cout << N << "^" << i << " = " << potencia << endl;
    }
}

void ejercicio13()
{
    cout << "Ejecutando Ejercicio 13..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima todos los divisores de N." << endl;

    int N;
    cout << "Ingrese un numero: ";
    cin >> N;

    cout << "Los divisores de " << N << " son: ";
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

void ejercicio14()
{
    cout << "Ejecutando Ejercicio 14..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que imprima dos columnas paralelas, una con los numeros del 1 al 50 y otra con los numeros del 50 al 1." << endl;

    for (int i = 1; i <= 50; i++)
    {
        cout << i << "\t" << (51 - i) << endl;
    }
}

void ejercicio15()
{
    cout << "Ejecutando Ejercicio 15..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida constantemente numeros hasta que se ingrese el numero cero e imprima en pantalla la suma de todos los numeros ingresados." << endl;

    int numero, suma = 0;

    while (true)
    {
        cout << "Ingrese un numero (0 para terminar): ";
        cin >> numero;

        if (numero == 0)
            break; // condicion de salida

        suma += numero;
    }

    cout << "La suma de todos los numeros ingresados es: " << suma << endl;
}

void ejercicio16()
{
    cout << "Ejecutando Ejercicio 16..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida constantemente numeros hasta que se ingrese el numero cero e imprima en pantalla el promedio de los numeros ingresados (excluyendo el cero)." << endl;

    int numero, suma = 0, contador = 0;

    cout << "Ingrese un numero (0 para terminar): ";
    while (cin >> numero && numero != 0)
    {
        suma += numero;
        contador++;
        cout << "Ingrese un numero (0 para terminar): ";
    }

    if (contador)
        cout << "El promedio de los numeros ingresados es: " << (double)suma / contador << endl;
    else
        cout << "No se ingresaron numeros validos." << endl;
}

void ejercicio17()
{
    cout << "Ejecutando Ejercicio 17..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida constantemente numeros hasta que se ingrese el numero cero e imprima en pantalla el mayor de todos los numeros ingresados." << endl;

    int numero, mayor;
    bool hayNumeros = false; // bandera para saber si se ingreso al menos un numero

    cout << "Ingrese un numero (0 para terminar): ";
    while (cin >> numero && numero != 0)
    {
        if (!hayNumeros || numero > mayor)
        {
            mayor = numero;
            hayNumeros = true;
        }
        cout << "Ingrese un numero (0 para terminar): ";
    }

    if (hayNumeros)
        cout << "El mayor de los numeros ingresados es: " << mayor << endl;
    else
        cout << "No se ingresaron numeros validos." << endl;
}

void ejercicio18()
{
    cout << "Ejecutando Ejercicio 18..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima si es o no un cuadrado perfecto." << endl;

    int N;
    cout << "Ingrese un numero: ";
    cin >> N;

    cout << N << (sqrt(N) == (int)sqrt(N) ? " es " : " no es ") << "un cuadrado perfecto." << endl;
}

void ejercicio19()
{
    cout << "Ejecutando Ejercicio 19..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima si es o no un numero primo" << endl;

    int N;
    cout << "Ingrese un numero: ";
    cin >> N;

    bool primo = (N > 1);

    for (int i = 2; i * i <= N && primo; i++)
    {
        if (N % i == 0)
            primo = false;
    }

    cout << "El numero " << N << (primo ? " es primo." : " no es primo.") << endl;
}
void ejercicio20()
{
    cout << "Ejecutando Ejercicio 20..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima si es o no un palindromo (igual de derecha a izquierda que de izquierda a derecha)." << endl;

    int N, orig, inv = 0;
    cout << "Ingrese un numero: ";
    cin >> N;
    orig = N;

    while (N)
    {
        inv = inv * 10 + N % 10;
        N /= 10;
    }

    cout << (orig == inv ? "El numero es un palindromo." : "El numero no es un palindromo.") << endl;
}
void ejercicio21()
{
    cout << "Ejecutando Ejercicio 21..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un caracter C, si es una letra la debe convertir de mayuscula a minuscula y viceversa e imprimirla." << endl;

    char C;
    cout << "Ingrese un caracter: ";
    cin >> C;

    if (C >= 'A' && C <= 'Z')
        cout << "En minuscula: " << char(C + 32) << endl;
    else if (C >= 'a' && C <= 'z')
        cout << "En mayuscula: " << char(C - 32) << endl;
    else
        cout << "El caracter ingresado no es una letra." << endl;
}
void ejercicio22()
{
    cout << "Ejecutando Ejercicio 22..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida una cantidad entera de segundos y la imprima en formato horas:minutos:segundos." << endl;

    int s;
    cout << "Ingrese la cantidad de segundos: ";
    cin >> s;

    cout << s << " segundos equivalen a "
         << s / 3600 << " horas, "
         << (s % 3600) / 60 << " minutos y "
         << s % 60 << " segundos." << endl;
}
void ejercicio23()
{
    cout << "Ejecutando Ejercicio 23..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida dos numeros A y B e imprima en pantalla el minimo comun multiplo entre los dos." << endl;

    int A, B;
    cout << "Ingrese dos numeros: ";
    cin >> A >> B;

    int x = A, y = B;
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }

    cout << "El minimo comun multiplo de " << A << " y " << B
         << " es: " << (A * B) / x << endl;
}
void ejercicio24()
{
    cout << "Ejecutando Ejercicio 24..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida una numero entero e imprima un cuadrado de dicho tamano, los bordes del cuadrado deben estar hechos con el caracter `+' y el interior debe estar vacio." << endl;

    int N;
    cout << "Ingrese el tamano del cuadrado: ";
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << ((i == 0 || i == N - 1 || j == 0 || j == N - 1) ? '+' : ' ');
        cout << endl;
    }
}
void ejercicio25()
{
    cout << "Ejecutando Ejercicio 25..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida un numero N e imprima en pantalla la cantidad de digitos de N." << endl;

    int N;
    cout << "Ingrese un numero: ";
    cin >> N;

    int digitos = (N == 0) ? 1 : 0;
    while (N != 0)
    {
        N /= 10;
        digitos++;
    }

    cout << "La cantidad de digitos es: " << digitos << endl;
}
void ejercicio26()
{
    cout << "Ejecutando Ejercicio 26..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que pida tres numeros e imprima el tipo de triangulo (isosceles, equilatero, escaleno) que se formaria, si sus lados tienen la longitud definida por los numeros ingresados. Tenga en cuenta el caso en que los numeros ingresados no forman un triangulo." << endl;

    int a, b, c;
    cout << "Ingrese tres lados: ";
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0)
        cout << "Los lados deben ser positivos." << endl;
    else if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c)
            cout << "El triangulo es equilatero." << endl;
        else if (a == b || a == c || b == c)
            cout << "El triangulo es isosceles." << endl;
        else
            cout << "El triangulo es escaleno." << endl;
    }
    else
        cout << "Los numeros ingresados no forman un triangulo." << endl;
}
void ejercicio27()
{
    cout << "Ejecutando Ejercicio 27..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que actue como una calculadora con operaciones de suma, resta, multiplicacion y division, el usuario debe ingresar los operandos y la operacion a realizar." << endl;

    double A, B, resultado;
    char op;

    cout << "Ingrese el primer numero: ";
    cin >> A;
    cout << "Ingrese el segundo numero: ";
    cin >> B;
    cout << "Ingrese la operacion (+, -, *, /): ";
    cin >> op;

    switch (op)
    {
    case '+':
        resultado = A + B;
        break;
    case '-':
        resultado = A - B;
        break;
    case '*':
        resultado = A * B;
        break;
    case '/':
        if (B != 0)
            resultado = A / B;
        else
        {
            cout << "Error: division por cero no permitida." << endl;
        }
        break;
    default:
        cout << "Operacion no valida." << endl;
        break;
    }

    cout << "El resultado de " << A << " " << op << " " << B << " es: " << resultado << endl;
}
void ejercicio28()
{
    cout << "Ejecutando Ejercicio 28..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que encuentre el valor aproximado de pi en base a la siguiente suma infinita:" << endl;
    cout << "π = 4(1 − 1/3 + 1/5 − 1/7 + 1/9 − ...)" << endl;
    cout << "El usuario debe ingresar el numero de elementos usados en la aproximacion: ";

    int n;
    cout << "Ingrese el numero de elementos: ";
    cin >> n;

    double pi = 0;
    for (int i = 0; i < n; i++)
        pi += ((i % 2 == 0) ? 1.0 : -1.0) / (2 * i + 1);

    cout << "Valor aproximado de pi con " << n
         << " terminos: " << pi * 4 << endl;
}
void ejercicio29()
{
    cout << "Ejecutando Ejercicio 29..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que adivine un numero A (entre 0 y 100) seleccionado por el usuario(el numero NO se ingresa al programa), el programa imprimira en pantalla un numero B y el usuario usara los simbolos `> ', `<' y `=' para indicarle al programa si B es mayor, menor o igual que A.El programa imprimira un nuevo numero B, con base en simbolo ingresado por el usuario, y repetira el proceso hasta acertar el numero seleccionado por usuario." << endl;

    int low = 0, high = 100, B;
    char simbolo;

    cout << "Piensa un numero entre 0 y 100 y yo intentare adivinarlo." << endl;

    do
    {
        B = (low + high) / 2; // estrategia de busqueda binaria
        cout << "¿Es " << B << "? (>, <, =): ";
        cin >> simbolo;

        if (simbolo == '>')
            low = B + 1;
        else if (simbolo == '<')
            high = B - 1;
        else if (simbolo == '=')
            cout << "¡Genial! El numero es " << B << endl;
        else
            cout << "Entrada no valida. Use >, < o =." << endl;

    } while (simbolo != '=');
}
void ejercicio30()
{
    cout << "Ejecutando Ejercicio 30..." << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Escriba un programa que genere un numero aleatorio A (entre 0 y 100) y le pida al usuario que lo adivine, el usuario ingresa un numero B y el programa le dira si B es mayor o menor que A, esto se repetira hasta que el usuario adivine el numero, en ese momento el programa le dira el numero de intentos que tardo el usuario en adivinar el numero. Nota: para generar el numero aleatorio use la funcion rand() de la libreria <cstdlib>, recuerde convertirlo al rango (0,100)." << endl;

    srand(time(0));       // semilla aleatoria
    int A = rand() % 101; // numero entre 0 y 100
    int B, intentos = 0;

    while (true)
    {
        cout << "Ingresa tu intento: ";
        cin >> B;
        intentos++;

        if (B < 0 || B > 100)
        {
            cout << "Numero fuera de rango. Intenta nuevamente (0 - 100)." << endl;
            continue;
        }

        if (B > A)
        {
            cout << "El numero secreto es MENOR que " << B << endl;
        }
        else if (B < A)
        {
            cout << "El numero secreto es MAYOR que " << B << endl;
        }
        else
        {
            cout << "¡Correcto! El numero era " << A << endl;
            cout << "Intentos realizados: " << intentos << endl;
            break;
        }
    }
}
int main()
{
    cout << "-----MENU DEL LABORATORIO PRACTICO 1-----" << endl;
    cout << "-----------------------------------------" << endl;

    int opcion = 0;

    while (opcion != 31)
    {

        cout << "1. Ejercicio 1" << endl;
        cout << "2. Ejercicio 2" << endl;
        cout << "3. Ejercicio 3" << endl;
        cout << "4. Ejercicio 4" << endl;
        cout << "5. Ejercicio 5" << endl;
        cout << "6. Ejercicio 6" << endl;
        cout << "7. Ejercicio 7" << endl;
        cout << "8. Ejercicio 8" << endl;
        cout << "9. Ejercicio 9" << endl;
        cout << "10. Ejercicio 10" << endl;
        cout << "11. Ejercicio 11" << endl;
        cout << "12. Ejercicio 12" << endl;
        cout << "13. Ejercicio 13" << endl;
        cout << "14. Ejercicio 14" << endl;
        cout << "15. Ejercicio 15" << endl;
        cout << "16. Ejercicio 16" << endl;
        cout << "17. Ejercicio 17" << endl;
        cout << "18. Ejercicio 18" << endl;
        cout << "19. Ejercicio 19" << endl;
        cout << "20. Ejercicio 20" << endl;
        cout << "21. Ejercicio 21" << endl;
        cout << "22. Ejercicio 22" << endl;
        cout << "23. Ejercicio 23" << endl;
        cout << "24. Ejercicio 24" << endl;
        cout << "25. Ejercicio 25" << endl;
        cout << "26. Ejercicio 26" << endl;
        cout << "27. Ejercicio 27" << endl;
        cout << "28. Ejercicio 28" << endl;
        cout << "29. Ejercicio 29" << endl;
        cout << "30. Ejercicio 30" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "31. Salir" << endl;
        cout << "Ingrese una opcion: " << endl;

        cin >> opcion;

        switch (opcion)
        {
        case 1:
            ejercicio1();
            break;
        case 2:
            ejercicio2();
            break;
        case 3:
            ejercicio3();
            break;

        case 4:
            ejercicio4();
            break;
        case 5:
            ejercicio5();
            break;
        case 6:
            ejercicio6();
            break;
        case 7:
            ejercicio7();
            break;
        case 8:
            ejercicio8();
            break;
        case 9:
            ejercicio9();
            break;
        case 10:
            ejercicio10();
            break;
        case 11:
            ejercicio11();
            break;
        case 12:
            ejercicio12();
            break;
        case 13:
            ejercicio13();
            break;
        case 14:
            ejercicio14();
            break;
        case 15:
            ejercicio15();
            break;
        case 16:
            ejercicio16();
            break;
        case 17:
            ejercicio17();
            break;
        case 18:
            ejercicio18();
            break;
        case 19:
            ejercicio19();
            break;
        case 20:
            ejercicio20();
            break;
        case 21:
            ejercicio21();
            break;
        case 22:
            ejercicio22();
            break;
        case 23:
            ejercicio23();
            break;
        case 24:
            ejercicio24();
            break;
        case 25:
            ejercicio25();
            break;
        case 26:
            ejercicio26();
            break;
        case 27:
            ejercicio27();
            break;
        case 28:
            ejercicio28();
            break;
        case 29:
            ejercicio29();
            break;
        case 30:
            ejercicio30();
            break;
        case 31:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion invalida. Por favor, seleccione una opcion del 1 al 18." << endl;
            break;
        }

        cout << endl;
    }
}