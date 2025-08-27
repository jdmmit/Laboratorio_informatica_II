#!/bin/bash

for i in $(seq -w 1 18); do
    cp 01_Ejercicio.cpp "${i}_Ejercicio.cpp"
done

echo "Archivos creados exitosamente"
