#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

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

        cin >> opcion;

        switch (opcion)
        {
        case 1:
        {
            cout << "Ejecutando Ejercicio 1..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que pida dos numeros A y B e imprima en pantalla el residuo de la division A/B." << endl;
            cout << endl;

            int A, B;

            cout << "Ingrese el valor del numero A: " << endl;
            cin >> A;
            cout << "Ingrese el valor del numero B: " << endl;
            cin >> B;
            cout << "El residuo de la division " << A << "/" << B << " es: " << A % B << endl;
            cout << "-----------------------------------------" << endl;
            break;
        }
        case 2:
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

            break;
        }
        case 3:
        {
            cout << "Ejecutando Ejercicio 3..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que pida dos numeros A y B e imprima en pantalla el mayor." << endl;

            int C, D;
            cout << "Ingrese el valor de A: " << endl;
            cin >> C;
            cout << "Ingrese el valor de B: " << endl;
            cin >> D;

            if (C > D)
            {
                cout << "El mayor es: " << C << endl;
            }
            else if (D > C)
            {
                cout << "El mayor es: " << D << endl;
            }
            else
            {
                cout << "Los numeros son iguales." << endl;
            }
            cout << "-----------------------------------------" << endl;

            break;
        }
        case 4:
        {
            cout << "Ejecutando Ejercicio 4..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que pida dos numeros A y B e imprima en pantalla el menor." << endl;

            int E, F;
            cout << "Ingrese el valor de A: " << endl;
            cin >> E;
            cout << "Ingrese el valor de B: " << endl;
            cin >> F;

            if (E < F)
            {
                cout << "El menor es: " << E << endl;
            }
            else if (F < E)
            {
                cout << "El menor es: " << F << endl;
            }
            else
            {
                cout << "Los numeros son iguales." << endl;
            }
            cout << "-----------------------------------------" << endl;

            break;
        }
        case 5:
        {
            cout << "Ejecutando Ejercicio 5..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que pida dos numeros A y B e imprima en pantalla la division A/B con redondeo." << endl;

            int H, I;
            cout << "Ingrese el valor de H: " << endl;
            cin >> H;
            cout << "Ingrese el valor de I: " << endl;
            cin >> I;

            double resultado = (double)H / (double)I;

            cout << "La division de H/I redondeada al entero mas cercano es: " << round(resultado) << endl;

            break;
        }
        case 6:
        {
            cout << "Ejecutando Ejercicio 6..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que pida dos numeros A y B e imprima en pantalla la potencia AB, sin hacer uso de librerias matematicas." << endl;

            int J, K;
            cout << "Ingrese el valor de A: " << endl;
            cin >> J;
            cout << "Ingrese el valor de B: " << endl;
            cin >> K;

            int resultado = 1;
            for (int i = 0; i < K; i++)
            {
                resultado *= J;
            }
            cout << "La potencia " << J << "^" << K << " es: " << resultado << endl;
            break;
        }
        case 7:
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
            break;
        }
        case 8:
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

            break;
        }
        case 9:
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

            break;
        }
        case 10:
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
            break;
        }
        case 11:
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
            break;
        }
        case 12:
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
            break;
        }
        case 13:
        {
            cout << "Ejecutando Ejercicio 13..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que pida un numero N e imprima todos los divisores de N." << endl;

            int M;
            cout << "Ingrese un numero: ";
            cin >> M;

            cout << "Los divisores de " << M << " son: ";
            for (int i = 1; i <= M; i++)
            {
                if (M % i == 0)
                {
                    cout << i << " ";
                }
            }
            cout << endl;
            break;
        }
        case 14:
        {
            cout << "Ejecutando Ejercicio 14..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que imprima dos columnas paralelas, una con los numeros del 1 al 50 y otra con los numeros del 50 al 1." << endl;

            for (int i = 1; i <= 50; i++)
            {
                cout << i << "\t" << (51 - i) << endl;
            }
            break;
        }
        case 15:
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
            break;
        }
        case 16:
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

            break;
        }
        case 17:
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
            break;
        }
        case 18:
        {
            cout << "Ejecutando Ejercicio 18...\n";
            cout << "-----------------------------------------\n";
            cout << "Escriba un programa que pida un numero N e imprima si es o no un cuadrado perfecto.\n";

            int N;
            cout << "Ingrese un numero: ";
            cin >> N;

            cout << N << (sqrt(N) == (int)sqrt(N) ? " es " : " no es ") << "un cuadrado perfecto.\n";
            break;
        }
        case 19:
        {
            cout << "Ejecutando Ejercicio 19..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que pida un numero N e imprima si es o no un numero primo" << endl;

            int N;
            cout << "Ingrese un numero: ";
            cin >> N;

            bool esPrimo = true;

            if (N <= 1)
            {
                esPrimo = false;
            }
            else
            {
                for (int i = 2; i <= sqrt(N); i++)
                {
                    if (N % i == 0)
                    {
                        esPrimo = false;
                        break;
                    }
                }
            }

            if (esPrimo)
            {
                cout << "El numero " << N << " es primo." << endl;
            }
            else
            {
                cout << "El numero " << N << " no es primo." << endl;
            }

            break;
        }
        case 20:
        {
            cout << "Ejecutando Ejercicio 20..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que pida un numero N e imprima si es o no un palindromo (igual de derecha a izquierda que de izquierda a derecha)." << endl;

            int N;
            cout << "Ingrese un numero: ";
            cin >> N;

            int original = N;
            int invertido = 0;

            while (N > 0)
            {
                invertido = invertido * 10 + N % 10;
                N /= 10;
            }

            if (original == invertido)
            {
                cout << "El numero es un palindromo." << endl;
            }
            else
            {
                cout << "El numero no es un palindromo." << endl;
            }
            break;
        }
        case 21:
        {
            cout << "Ejecutando Ejercicio 21..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que pida un caracter C, si es una letra la debe convertir de mayuscula a minuscula y viceversa e imprimirla." << endl;

            char C;
            cout << "Ingrese un caracter: ";
            cin >> C;

            cout << (C >= 'A' && C <= 'Z' ? char(C + 32) : (C >= 'a' && C <= 'z' ? char(C - 32) : 'X')) << endl;
            break;
        }
        case 22:
        {
            cout << "Ejecutando Ejercicio 22..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que pida una cantidad entera de segundos y la imprima en formato horas:minutos:segundos." << endl;

            int totalSegundos;
            cout << "Ingrese la cantidad de segundos: ";
            cin >> totalSegundos;

            int horas = totalSegundos / 3600;
            int minutos = (totalSegundos % 3600) / 60;
            int segundos = totalSegundos % 60;

            cout << "La cantidad de segundos " << totalSegundos << " es equivalente a: ";
            cout << horas << " horas, " << minutos << " minutos y " << segundos << " segundos." << endl;
            break;
        }
        case 23:
        {
            cout << "Ejecutando Ejercicio 23..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que pida dos numeros A y B e imprima en pantalla el minimo comun multiplo entre los dos." << endl;
            int H, I;
            cout << "Ingrese el valor de A: ";
            cin >> H;
            cout << "Ingrese el valor de B: ";
            cin >> I;

            int maximo = (H > I) ? H : I;
            int minimo = (H < I) ? H : I;
            int a = H, b = I;

            while (minimo != 0)
            {
                int temp = minimo;
                minimo = maximo % minimo;
                maximo = temp;
            }

            cout << "El minimo comun multiplo de " << a << " y " << b << " es: " << (a * b) / maximo << endl;
            break;
        }
        case 24:
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
                {
                    if (i == 0 || i == N - 1 || j == 0 || j == N - 1)
                    {
                        cout << "+";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                cout << endl;
            }
            break;
        }
        case 25:
        {
            cout << "Ejecutando Ejercicio 25..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que pida un numero N e imprima en pantalla la cantidad de digitos de N." << endl;

            int N;
            cout << "Ingrese un numero: ";
            cin >> N;

            int cantidad_digitos = 0;
            int temp = N;
            if (temp == 0)
                cantidad_digitos = 1;
            else
            {
                while (temp != 0)
                {
                    temp /= 10;
                    cantidad_digitos++;
                }
            }

            cout << "La cantidad de digitos es: " << cantidad_digitos << endl;
            break;
        }
        case 26:
        {
            cout << "Ejecutando Ejercicio 26..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que pida tres numeros e imprima el tipo de triangulo (isosceles, equilatero, escaleno) que se formaria, si sus lados tienen la longitud definida por los numeros ingresados. Tenga en cuenta el caso en que los numeros ingresados no forman un triangulo." << endl;

            int lado1, lado2, lado3;
            cout << "Ingrese el lado 1: ";
            cin >> lado1;
            cout << "Ingrese el lado 2: ";
            cin >> lado2;
            cout << "Ingrese el lado 3: ";
            cin >> lado3;

            if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0)
            {
                cout << "Los lados deben ser numeros positivos." << endl;
            }
            else if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1)
            {
                if (lado1 == lado2 && lado2 == lado3)
                {
                    cout << "El triangulo es equilatero." << endl;
                }
                else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
                {
                    cout << "El triangulo es isosceles." << endl;
                }
                else
                {
                    cout << "El triangulo es escaleno." << endl;
                }
            }
            else
            {
                cout << "Los numeros ingresados no forman un triangulo." << endl;
            }
            break;
        }
        case 27:
        {
            cout << "Ejecutando Ejercicio 27..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que actue como una calculadora con operaciones de suma, resta, multiplicacion y division, el usuario debe ingresar los operandos y la operacion a realizar." << endl;

            char operacion;
            double resultado;

            int J, K;
            cout << "Ingrese el primer operando: ";
            cin >> J;
            cout << "Ingrese el segundo operando: ";
            cin >> K;
            cout << "Ingrese la operacion a realizar (+, -, *, /): ";
            cin >> operacion;

            switch (operacion)
            {
            case '+':
                resultado = J + K;
                cout << "El resultado de " << J << " + " << K << " es: " << resultado << endl;
                break;
            case '-':
                resultado = J - K;
                cout << "El resultado de " << J << " - " << K << " es: " << resultado << endl;
                break;
            case '*':
                resultado = J * K;
                cout << "El resultado de " << J << " * " << K << " es: " << resultado << endl;
                break;
            case '/':
                if (K != 0)
                {
                    resultado = (double)J / K;
                    cout << "El resultado de " << J << " / " << K << " es: " << resultado << endl;
                }
                else
                {
                    cout << "Error: Division por cero no permitida." << endl;
                }
                break;
            default:
                cout << "Operacion no valida." << endl;
                break;
            }
            break;
        }
        case 28:
        {
            cout << "Ejecutando Ejercicio 28..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que encuentre el valor aproximado de pi en base a la siguiente suma infinita:" << endl;
            cout << "π = 4(1 − 1/3 + 1/5 − 1/7 + 1/9 − ...)" << endl;
            cout << "El usuario debe ingresar el numero de elementos usados en la aproximacion: ";

            int n;
            cin >> n;

            double pi = 0;
            for (int i = 0; i < n; i++)
            {
                pi += (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1);
            }
            pi *= 4;

            cout << "El valor aproximado de pi es: " << pi << endl;
            break;
        }
        case 29:
        {
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que adivine un numero A (entre 0 y 100) seleccionado por el usuario(el numero NO se ingresa al programa), el programa imprimira en pantalla un numero B y el usuario usara los simbolos `> ', `<' y `=' para indicarle al programa si B es mayor, menor o igual que A.El programa imprimira un nuevo numero B, con base en simbolo ingresado por el usuario, y repetira el proceso hasta acertar el numero seleccionado por usuario." << endl;

            int B;
            char simbolo;

            do
            {
                B = rand() % 101; // Generar un nuevo numero B
                cout << "Numero B generado: " << B << endl;
                cout << "Ingrese el simbolo correspondiente (>, <, =): ";
                cin >> simbolo;

                if (simbolo == '>')
                {
                    cout << "El numero A es mayor que B." << endl;
                }
                else if (simbolo == '<')
                {
                    cout << "El numero A es menor que B." << endl;
                }
                else if (simbolo == '=')
                {
                    cout << "¡Felicidades! Ha adivinado el numero A." << endl;
                }
                else
                {
                    cout << "Simbolo no valido. Intente de nuevo." << endl;
                }
            } while (simbolo != '=');
            break;
        }
        case 30:
        {
            cout << "Ejecutando Ejercicio 30..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Escriba un programa que genere un numero aleatorio A (entre 0 y 100) y le pida al usuario que lo adivine, el usuario ingresa un numero B y el programa le dira si B es mayor o menor que A, esto se repetira hasta que el usuario adivine el numero, en ese momento el programa le dira el numero de intentos que tardo el usuario en adivinar el numero. Nota: para generar el numero aleatorio use la funcion rand() de la libreria <cstdlib>, recuerde convertirlo al rango (0,100)." << endl;

            srand(time(0));       // inicializa la semilla para numeros aleatorios
            int A = rand() % 101; // genera un numero aleatorio entre 0 y 100
            int B;
            int intentos = 0;

            do
            {
                cout << "Adivina el numero (entre 0 y 100): ";
                cin >> B;
                intentos++;

                if (B > A)
                {
                    cout << "El numero es menor que " << B << endl;
                }
                else if (B < A)
                {
                    cout << "El numero es mayor que " << B << endl;
                }
                else
                {
                    cout << "¡Correcto! El numero era " << A << endl;
                    cout << "Numero de intentos: " << intentos << endl;
                }

            } while (B != A);
            break;
        }
        case 31:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion invalida. Por favor, seleccione una opcion del 1 al 30." << endl;
            break;
        }
    }
    return 0;
}