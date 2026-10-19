#include <stdio.h>

int main() {
 char nombre[10], edad[10], estatura[10];
 printf("Ingrese su nombre : ");
    scanf("%s", nombre);
    
printf("Ingrese su edad: ");
    scanf("%s", edad);

    printf("Ingrese su estatura en cm: ");
    scanf("%s", estatura);

    printf("Nombre: %s\n", nombre);
    printf("Edad: %s\n", edad);
    printf("Estatura: %scm\n", estatura);

    return 0;

 
}