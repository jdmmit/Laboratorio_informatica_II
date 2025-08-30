#!/bin/bash

for i in $(seq -w 1 18); do
    cp 01_Problema.cpp "${i}_Problema.cpp"
done

echo "Archivos creados exitosamente"
