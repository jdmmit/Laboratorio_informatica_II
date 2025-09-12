#!/bin/bash

# Script para remover todas las tildes de archivos en el repositorio
# Hace backup de los archivos antes de modificarlos

echo "Iniciando proceso de remocion de tildes..."

# Crear directorio de backup
backup_dir="/tmp/backup_tildes_$(date +%Y%m%d_%H%M%S)"
mkdir -p "$backup_dir"
echo "Backup creado en: $backup_dir"

# Funcion para remover tildes de un archivo
remove_tildes_from_file() {
    local file="$1"
    
    # Crear backup
    cp "$file" "$backup_dir/$(basename "$file")"
    
    # Remover tildes usando sed
    sed -i 's/a/a/g; s/e/e/g; s/i/i/g; s/o/o/g; s/u/u/g; s/n/n/g; s/u/u/g' "$file"
    sed -i 's/A/A/g; s/E/E/g; s/I/I/g; s/O/O/g; s/U/U/g; s/N/N/g; s/U/U/g' "$file"
    
    echo "Procesado: $file"
}

# Buscar archivos con tildes y procesarlos
grep -r -l '[aeiounuAEIOUNU]' /home/ctrl/git_hub/Laboratorio_informatica_II/ 2>/dev/null | while read -r file; do
    # Solo procesar archivos de texto (evitar binarios)
    if file "$file" | grep -q "text\|ASCII"; then
        remove_tildes_from_file "$file"
    else
        echo "Saltando archivo binario: $file"
    fi
done

echo "Proceso completado. Backup disponible en: $backup_dir"
echo "Total de archivos procesados:"
ls -1 "$backup_dir" | wc -l
