# Desafío 1 - Informe de solución (resumen)

**Autor:** Generado con ayuda de asistente.
**Fecha:** 2025-09-14

## 1. Análisis del problema
Se recibe un mensaje comprimido (usando RLE o LZ78) y luego encriptado: rotación de bits a la izquierda por n (1..7) y XOR con clave K (0..255).
También se conoce un fragmento del texto original en claro. El objetivo es identificar el método de compresión (RLE o LZ78), los parámetros `n` y `K`, desencriptar y descomprimir el mensaje completo.

## 2. Enfoque propuesto
- Implementar funciones de desencriptado: XOR y rotación de bits (a la derecha para revertir la rotación izquierda).
- Implementar descompresión RLE (texto en formato ASCII: dígitos seguidos de un símbolo, repetición).
- Implementar descompresión LZ78 (asumiendo formato binario simple: pares [indice(1byte)][caracter(1byte)]). Guardar el diccionario como array dinámico de pointers a cadenas C (char*).
- Probar todas las combinaciones posibles: n en 1..7, K en 0..255. Para cada combinación:
  - Desencriptar los bytes.
  - Intentar interpretar como RLE textual; si su descompresión produce sólo caracteres válidos y contiene el fragmento conocido => éxito.
  - Si falla, intentar interpretar como LZ78 (pares de bytes) y reconstruir; verificar fragmento conocido.
- Reportar el método, `n`, `K` y mensaje reconstruido una vez encontrado.

## 3. Consideraciones de implementación
- No se usan `std::string` ni contenedores STL.
- Solo se usan punteros, arreglos y memoria dinámica (`new` / `delete` / `malloc` / `free` where needed).
- Interfaz: el programa recibe por línea de comandos:
  1. Una cadena hex que representa los bytes del mensaje cifrado (ej: "0A5BFF...").
  2. El fragmento conocido en texto plano (ej: "HOLA").
- El programa intenta las combinaciones y muestra resultados por stdout.

## 4. Limitaciones y supuestos
- Para LZ78 la codificación esperada en el reto se desconoce; se usa la interpretación binaria (pares index, char) como estrategia razonable. Si el reto usa otra forma textual para LZ78, habría que adaptar la heurística.
- RLE se interpreta en formato ASCII: números decimales (uno o más dígitos) seguidos de un único símbolo (un byte). Por ejemplo: `11W1B12W`.

## 5. Estructura de archivos
- /src/desafio1.cpp : código fuente principal.
- /Informe/Informe_Desafio1.md : este informe (completo).
- README.md : instrucciones rápidas.

## 6. Cómo replicar
- Abrir Qt Creator y crear un proyecto de aplicación de consola en C++.
- Copiar `desafio1.cpp` en el proyecto, compilar con un estándar C++ moderno (C++11+).
- Ejecutar por terminal: `./desafio1 <hex_string> <known_fragment>`

