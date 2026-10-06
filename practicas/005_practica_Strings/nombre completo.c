#include<stdio.h>

int main () {
    char nombre1[100], nombre2[100], apellido1[100], apellido2[100];
    printf("Ingrese su primer nombre: ");
    scanf("%s", nombre1);

    printf("Ingrese su segundo nombre: ");
    scanf("%s", nombre2);

    printf("Ingrese su apellido paterno: ");
    scanf("%s", apellido1);

    printf("Ingrese su apellido materno: ");
    scanf("%s", apellido2);

    printf("HOLA %s %s %s %s\n", nombre1, nombre2, apellido1, apellido2);


    return 0;
}