/*
 * Universidad de las Fuerzas Armadas "ESPE"
 * Enunciado: Ingreso Datos Char
 * Autor: Leandro Mendoza
 * Fecha de Creacion: 7 de Noviembre del 2024
 * Fecha de Modificacion: 7 de Noviembre del 2024
 * NRC: 1978
 * Curso: Estructura de Datos
 * Docente: Edgar Solis
 */

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

char ingresar(char *msj) {
    printf("%s", msj);
    char c;

    while (true) {
        c = getch(); 

        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            printf("%c", c);  // Muestra la letra ingresada
            return c;         // Devuelve la letra
        }
    }
}

int main() {
    printf("\nLetra ingresada: %c\n", ingresar("Ingrese una letra: "));
    return 0;
}
