# GUÍA COMPLETA - LABORATORIO 02: PUNTEROS Y ARREGLOS

## ÍNDICE DE CONTENIDOS

1. [Ejercicio 01: Inversión de Arreglos](#ejercicio-01)
2. [Ejercicio 02: Punteros Básicos](#ejercicio-02)
3. [Ejercicio 03: Arreglos y Punteros](#ejercicio-03)
4. [Ejercicio 04: Punteros Dobles](#ejercicio-04)
5. [Ejercicio 05: Algoritmos de Ordenamiento](#ejercicio-05)
6. [Ejercicio 06: Búsqueda y Filtrado](#ejercicio-06)
7. [Problema 01: Calculadora de Estadísticas](#problema-01)
8. [Problema 02: Operaciones con Matrices](#problema-02)
9. [Problema 03: Sistema de Gestión de Estudiantes](#problema-03)

---

## EJERCICIO 01: Inversión de Arreglos {#ejercicio-01}

### **Objetivo**
Entender cómo invertir un arreglo usando punteros y funciones auxiliares.

### **Conceptos Clave**
- **Punteros**: Variables que almacenan direcciones de memoria
- **Paso por referencia**: Modificar directamente los valores originales
- **Aritmética de punteros**: Navegar por elementos del arreglo

### **Explicación del Código**

```cpp
void fun_a(int *px, int *py)
{
    int tmp = *px;    // Guardar valor de px
    *px = *py;        // px toma el valor de py
    *py = tmp;        // py toma el valor original de px
}
```

**¿Qué hace `fun_a`?**
- Intercambia los valores de dos variables usando sus direcciones
- `*px` y `*py` son los valores en esas direcciones
- `tmp` es una variable temporal para no perder datos

```cpp
void fun_b(int a[], int tam)
{
    int f, l;
    int *b = a;                           // b apunta al inicio del arreglo
    for (f = 0, l = tam - 1; f < l; f++, l--)
    {
        fun_a(&b[f], &b[l]);             // Intercambiar extremos
    }
}
```

**¿Qué hace `fun_b`?**
- `f` (first) comienza en 0, `l` (last) en el último índice
- En cada iteración intercambia elementos de los extremos
- Se mueve hacia el centro hasta que `f` y `l` se encuentran

### **Resultado**
- Arreglo original: `0 1 2 3 4 5 6 7 8 9`
- Arreglo invertido: `9 8 7 6 5 4 3 2 1 0`

---

## EJERCICIO 02: Punteros Básicos {#ejercicio-02}

### **Objetivo**
Comprender el uso fundamental de punteros, direcciones de memoria y desreferenciación.

### **Conceptos Clave**
- **Declaración de punteros**: `int *ptr`
- **Operador de dirección**: `&variable`
- **Operador de desreferenciación**: `*ptr`
- **Direcciones de memoria**: Ubicaciones hexadecimales

### **Explicación Detallada**

```cpp
int num1 = 25;
int *ptrNum1 = &num1;  // ptrNum1 guarda la dirección de num1
```

**Operaciones importantes:**
- `ptrNum1`: Dirección donde está almacenado num1
- `*ptrNum1`: Valor de num1 (25)
- `&ptrNum1`: Dirección donde está almacenado el puntero mismo

### **Salida Explicada**
```
Dirección de memoria: 0x7fffdda31fd8    // Donde está num1
Valor a través del puntero: 25          // *ptrNum1
Dirección del puntero: 0x7fffdda31fb8   // Donde está ptrNum1
```

---

## EJERCICIO 03: Arreglos y Punteros {#ejercicio-03}

### **Objetivo**
Manipular arreglos usando punteros y aritmética de punteros.

### **Conceptos Clave**
- **Aritmética de punteros**: `ptr + i` equivale a `&arr[i]`
- **Equivalencias**: `*(arr + i)` es igual a `arr[i]`
- **Algoritmos básicos**: Búsqueda, ordenamiento

### **Aritmética de Punteros Explicada**

```cpp
int *ptr = numeros;
cout << *ptr;        // Primer elemento
cout << *(ptr+1);    // Segundo elemento  
cout << *(ptr+2);    // Tercer elemento
```

**¿Por qué funciona?**
- Los arreglos se almacenan en memoria consecutiva
- `ptr + 1` avanza sizeof(int) bytes (4 bytes en sistemas de 32 bits)
- El compilador calcula automáticamente el desplazamiento correcto

---

## EJERCICIO 04: Punteros Dobles {#ejercicio-04}

### **Objetivo**
Entender punteros a punteros y cómo modificar las direcciones a las que apuntan.

### **Conceptos Clave**
- **Puntero doble**: `int **ptr` - puntero que apunta a otro puntero
- **Niveles de indirección**: `*ptr` (dirección), `**ptr` (valor)
- **Modificación de punteros**: Cambiar a qué dirección apunta un puntero

### **Explicación Visual**

```
Variable:    a = 10
Puntero:     ptrA -----> &a
Puntero doble: &ptrA -----> ptrA -----> &a
```

**Operaciones:**
- `**ptr`: Valor final (10)
- `*ptr`: Dirección intermedia (&a)
- `ptr`: Dirección del puntero (&ptrA)

---

## EJERCICIO 05: Algoritmos de Ordenamiento {#ejercicio-05}

### **Objetivo**
Implementar y comparar diferentes algoritmos de ordenamiento usando punteros.

### **Algoritmos Implementados**

#### **1. Ordenamiento Burbuja**
- **Complejidad**: O(n²)
- **Método**: Compara elementos adyacentes y los intercambia
- **Ventaja**: Simple de implementar
- **Desventaja**: Lento para arreglos grandes

#### **2. Ordenamiento por Selección**
- **Complejidad**: O(n²)
- **Método**: Encuentra el mínimo y lo coloca en su posición
- **Ventaja**: Menos intercambios que burbuja
- **Desventaja**: Siempre O(n²), incluso si está ordenado

#### **3. Ordenamiento por Inserción**
- **Complejidad**: O(n²) promedio, O(n) mejor caso
- **Método**: Inserta cada elemento en su posición correcta
- **Ventaja**: Eficiente para arreglos pequeños o casi ordenados
- **Desventaja**: Lento para arreglos grandes desordenados

---

## EJERCICIO 06: Búsqueda y Filtrado {#ejercicio-06}

### **Objetivo**
Implementar algoritmos de búsqueda y técnicas de filtrado con punteros.

### **Algoritmos de Búsqueda**

#### **Búsqueda Lineal**
- **Complejidad**: O(n)
- **Método**: Revisa cada elemento secuencialmente
- **Ventaja**: Funciona con arreglos no ordenados
- **Desventaja**: Lenta para arreglos grandes

#### **Búsqueda Binaria**
- **Complejidad**: O(log n)
- **Método**: Divide el arreglo por la mitad repetidamente
- **Ventaja**: Muy rápida
- **Desventaja**: Requiere arreglo ordenado

### **Técnicas de Filtrado**
- **Filtro de pares**: Selecciona elementos divisibles por 2
- **Filtro por rango**: Selecciona elementos dentro de un rango específico
- **Asignación dinámica**: Crea nuevos arreglos del tamaño exacto necesario

---

## PROBLEMA 01: Calculadora de Estadísticas {#problema-01}

### **Objetivo**
Calcular estadísticas descriptivas usando asignación dinámica de memoria.

### **Estadísticas Calculadas**
1. **Promedio**: Suma de todos los valores / cantidad de valores
2. **Máximo**: Valor más grande del conjunto
3. **Mínimo**: Valor más pequeño del conjunto
4. **Desviación Estándar**: Medida de dispersión de los datos
5. **Rango**: Diferencia entre máximo y mínimo

### **Fórmula de Desviación Estándar**
```
σ = √(Σ(xi - μ)² / n)
```
Donde:
- σ = desviación estándar
- xi = cada valor
- μ = promedio
- n = cantidad de valores

---

## PROBLEMA 02: Operaciones con Matrices {#problema-02}

### **Objetivo**
Trabajar con matrices bidimensionales usando punteros dobles y asignación dinámica.

### **Operaciones Implementadas**

#### **1. Creación Dinámica de Matrices**
```cpp
int **matriz = new int*[filas];
for (int i = 0; i < filas; i++) {
    matriz[i] = new int[cols];
}
```

#### **2. Suma de Matrices**
- Suma elemento por elemento: `C[i][j] = A[i][j] + B[i][j]`
- Requiere matrices del mismo tamaño

#### **3. Transposición**
- Intercambia filas por columnas: `T[j][i] = M[i][j]`
- La matriz resultante tiene dimensiones invertidas

### **Gestión de Memoria**
- **Asignación**: `new` para crear matrices dinámicamente
- **Liberación**: `delete[]` para evitar memory leaks
- **Orden**: Liberar primero las filas, luego el arreglo de punteros

---

## PROBLEMA 03: Sistema de Gestión de Estudiantes {#problema-03}

### **Objetivo**
Combinar estructuras, punteros y arreglos dinámicos en un sistema completo.

### **Estructura de Datos**
```cpp
struct Estudiante {
    int id;
    string nombre;
    float *calificaciones;    // Arreglo dinámico
    int numMaterias;
    float promedio;
};
```

### **Funcionalidades**
1. **Ingreso de datos**: Captura información de cada estudiante
2. **Cálculo de promedios**: Automático para cada estudiante
3. **Búsqueda del mejor**: Encuentra el estudiante con mayor promedio
4. **Ordenamiento**: Ordena estudiantes por promedio descendente
5. **Gestión de memoria**: Libera correctamente toda la memoria asignada

### **Conceptos Avanzados**
- **Estructuras con punteros**: Cada estudiante tiene su propio arreglo de calificaciones
- **Arreglos de estructuras**: Lista dinámica de estudiantes
- **Punteros a estructuras**: Acceso eficiente usando `->` 

---

## CONCEPTOS FUNDAMENTALES RESUMIDOS

### **1. Punteros**
- Variable que almacena una dirección de memoria
- Declaración: `tipo *nombrePuntero`
- Inicialización: `puntero = &variable`

### **2. Operadores**
- `&`: Operador de dirección
- `*`: Operador de desreferenciación
- `->`: Acceso a miembros de estructura via puntero

### **3. Aritmética de Punteros**
- `ptr + n`: Avanza n elementos
- `ptr++`: Avanza al siguiente elemento
- `ptr - ptr2`: Diferencia entre punteros

### **4. Gestión de Memoria**
- `new`: Asignación dinámica
- `delete`: Liberación de memoria
- `new[]` y `delete[]`: Para arreglos

### **5. Buenas Prácticas**
- Siempre inicializar punteros
- Liberar memoria asignada dinámicamente
- Verificar punteros nulos antes de usar
- Usar const cuando sea apropiado

---

## COMANDOS DE COMPILACIÓN

```bash
# Compilar ejercicios individuales
g++ -o ejercicio_01 Ejercico_01.cpp
g++ -o ejercicio_02 Ejercicio_02.cpp
g++ -o ejercicio_03 Ejercicio_03.cpp
g++ -o ejercicio_04 Ejercicio_04.cpp
g++ -o ejercicio_05 Ejercicio_05.cpp
g++ -o ejercicio_06 Ejercicio_06.cpp

# Compilar problemas
g++ -o problema_01 Problema_01.cpp
g++ -o problema_02 Problema_02.cpp
g++ -o problema_03 Problema_03.cpp

# Ejecutar
./ejercicio_01
./problema_01
```

---

## EJERCICIOS ADICIONALES SUGERIDOS

1. **Implementar QuickSort** con punteros
2. **Crear una lista enlazada** simple
3. **Sistema de inventario** con estructuras
4. **Calculadora de matrices** más completa
5. **Algoritmo de búsqueda** en cadenas

¡Practica estos ejercicios para dominar completamente los punteros y arreglos en C++!
