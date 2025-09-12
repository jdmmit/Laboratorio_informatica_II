#!/bin/bash

for i in $(seq -w 19 30); do
    cp Ejercicios/19_Ejercicio.cpp "Ejercicios/${i}_Ejercicio.cpp"
done

echo "Archivos creados exitosamente"
