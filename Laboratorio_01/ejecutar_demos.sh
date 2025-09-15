#!/bin/bash

# Script para ejecutar demostraciones de todos los ejercicios
# Laboratorio 02: Punteros y Arreglos

echo "=== DEMOSTRACIONES AUTOMÁTICAS - LABORATORIO 02 ==="

# Verificar que los ejecutables existen
if [ ! -d "ejecutables" ]; then
    echo "Error: Directorio 'ejecutables' no encontrado."
    echo "Ejecute primero: ./compilar_todo.sh"
    exit 1
fi

echo ""
echo "--- EJERCICIO 01: INVERSIÓN DE ARREGLOS ---"
if [ -f "ejecutables/ejercicio_01" ]; then
    ./ejecutables/ejercicio_01
else
    echo "Ejercicio 01 no compilado"
fi

echo ""
echo "--- EJERCICIO 02: PUNTEROS BÁSICOS ---"
if [ -f "ejecutables/ejercicio_02" ]; then
    ./ejecutables/ejercicio_02
else
    echo "Ejercicio 02 no compilado"
fi

echo ""
echo "--- EJERCICIO 05: ALGORITMOS DE ORDENAMIENTO ---"
if [ -f "ejecutables/ejercicio_05" ]; then
    ./ejecutables/ejercicio_05
else
    echo "Ejercicio 05 no compilado"
fi

echo ""
echo "--- EJERCICIO 06: BÚSQUEDA Y FILTRADO ---"
if [ -f "ejecutables/ejercicio_06" ]; then
    ./ejecutables/ejercicio_06
else
    echo "Ejercicio 06 no compilado"
fi

echo ""
echo "--- EJERCICIO 07: QUICKSORT ---"
if [ -f "ejecutables/ejercicio_07" ]; then
    ./ejecutables/ejercicio_07
else
    echo "Ejercicio 07 no compilado"
fi

echo ""
echo "--- EJERCICIO 08: LISTA ENLAZADA ---"
if [ -f "ejecutables/ejercicio_08" ]; then
    ./ejecutables/ejercicio_08
else
    echo "Ejercicio 08 no compilado"
fi

echo ""
echo "=== DEMOSTRACIONES COMPLETADAS ==="
echo ""
echo "Para ejercicios interactivos (que requieren entrada del usuario):"
echo "  ./ejecutables/ejercicio_03  # Arreglos y punteros"
echo "  ./ejecutables/ejercicio_04  # Punteros dobles"
echo "  ./ejecutables/problema_01   # Calculadora de estadísticas"
echo "  ./ejecutables/problema_02   # Operaciones con matrices"
echo "  ./ejecutables/problema_03   # Sistema de estudiantes"
echo "  ./ejecutables/problema_04   # Sistema de inventario"
