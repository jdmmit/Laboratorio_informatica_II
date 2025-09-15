#!/bin/bash

# Script para compilar todos los ejercicios y problemas del Laboratorio 02
# Autor: Sistema de Laboratorio de Informática II

echo "=== COMPILANDO LABORATORIO 02: PUNTEROS Y ARREGLOS ==="

# Crear directorio para ejecutables si no existe
mkdir -p ejecutables

# Compilar ejercicios
echo ""
echo "--- Compilando Ejercicios ---"

echo "Compilando Ejercicio 01 (Inversión de arreglos)..."
g++ -o ejecutables/ejercicio_01 Ejercicios/Ejercico_01.cpp
if [ $? -eq 0 ]; then
    echo "✓ Ejercicio 01 compilado exitosamente"
else
    echo "✗ Error compilando Ejercicio 01"
fi

echo "Compilando Ejercicio 02 (Punteros básicos)..."
g++ -o ejecutables/ejercicio_02 Ejercicios/Ejercicio_02.cpp
if [ $? -eq 0 ]; then
    echo "✓ Ejercicio 02 compilado exitosamente"
else
    echo "✗ Error compilando Ejercicio 02"
fi

echo "Compilando Ejercicio 03 (Arreglos y punteros)..."
g++ -o ejecutables/ejercicio_03 Ejercicios/Ejercicio_03.cpp
if [ $? -eq 0 ]; then
    echo "✓ Ejercicio 03 compilado exitosamente"
else
    echo "✗ Error compilando Ejercicio 03"
fi

echo "Compilando Ejercicio 04 (Punteros dobles)..."
g++ -o ejecutables/ejercicio_04 Ejercicios/Ejercicio_04.cpp
if [ $? -eq 0 ]; then
    echo "✓ Ejercicio 04 compilado exitosamente"
else
    echo "✗ Error compilando Ejercicio 04"
fi

echo "Compilando Ejercicio 05 (Algoritmos de ordenamiento)..."
g++ -o ejecutables/ejercicio_05 Ejercicios/Ejercicio_05.cpp
if [ $? -eq 0 ]; then
    echo "✓ Ejercicio 05 compilado exitosamente"
else
    echo "✗ Error compilando Ejercicio 05"
fi

echo "Compilando Ejercicio 06 (Búsqueda y filtrado)..."
g++ -o ejecutables/ejercicio_06 Ejercicios/Ejercicio_06.cpp
if [ $? -eq 0 ]; then
    echo "✓ Ejercicio 06 compilado exitosamente"
else
    echo "✗ Error compilando Ejercicio 06"
fi

echo "Compilando Ejercicio 07 (QuickSort)..."
g++ -o ejecutables/ejercicio_07 Ejercicios/Ejercicio_07.cpp
if [ $? -eq 0 ]; then
    echo "✓ Ejercicio 07 compilado exitosamente"
else
    echo "✗ Error compilando Ejercicio 07"
fi

echo "Compilando Ejercicio 08 (Lista enlazada)..."
g++ -o ejecutables/ejercicio_08 Ejercicios/Ejercicio_08.cpp
if [ $? -eq 0 ]; then
    echo "✓ Ejercicio 08 compilado exitosamente"
else
    echo "✗ Error compilando Ejercicio 08"
fi

# Compilar problemas
echo ""
echo "--- Compilando Problemas ---"

echo "Compilando Problema 01 (Calculadora de estadísticas)..."
g++ -o ejecutables/problema_01 Problemas/Problema_01.cpp
if [ $? -eq 0 ]; then
    echo "✓ Problema 01 compilado exitosamente"
else
    echo "✗ Error compilando Problema 01"
fi

echo "Compilando Problema 02 (Operaciones con matrices)..."
g++ -o ejecutables/problema_02 Problemas/Problema_02.cpp
if [ $? -eq 0 ]; then
    echo "✓ Problema 02 compilado exitosamente"
else
    echo "✗ Error compilando Problema 02"
fi

echo "Compilando Problema 03 (Sistema de gestión de estudiantes)..."
g++ -o ejecutables/problema_03 Problemas/Problema_03.cpp
if [ $? -eq 0 ]; then
    echo "✓ Problema 03 compilado exitosamente"
else
    echo "✗ Error compilando Problema 03"
fi

echo "Compilando Problema 04 (Sistema de inventario)..."
g++ -o ejecutables/problema_04 Problemas/Problema_04.cpp
if [ $? -eq 0 ]; then
    echo "✓ Problema 04 compilado exitosamente"
else
    echo "✗ Error compilando Problema 04"
fi

echo ""
echo "=== COMPILACIÓN COMPLETADA ==="
echo "Los ejecutables están en la carpeta 'ejecutables/'"
echo ""
echo "Para ejecutar un programa, usa:"
echo "  ./ejecutables/ejercicio_01"
echo "  ./ejecutables/problema_01"
echo "  etc."
echo ""
echo "Para ejecutar todos los ejercicios automáticamente:"
echo "  ./ejecutar_demos.sh"
