#include<stdio.h>

int main () {
    int edad;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    if (edad < 0) {
        printf("Error: La edad no puede ser negativa.\n");
        return 1;
    }

    if (edad < 18) {
        printf("Eres menor de edad.\n");
    } else if (edad >= 18 && edad < 65) {
        printf("Eres adulto.\n");
    } else {
        printf("Eres adulto mayor.\n");
    }

    return 0;
}