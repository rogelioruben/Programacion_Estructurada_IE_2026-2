#include <stdio.h>

int main () {
    int cuenta, propina, personas;
float total, por_persona;

    printf("Ingrese el total de la cuenta:");
scanf("%d", &cuenta);
printf("ingrese el total de la propina:");
scanf("%d", &propina);
printf("Ingrese el total de personas: ");
scanf("%d", &personas);

total=cuenta+propina;
por_persona=total/personas;
printf("Cada persona debe de pagar: $%.2f\n", por_persona);

return 0;

}