#include<stdio.h>

int main () {
    int pesos, dolares;
    printf("Ingrese la cantidad de pesos a convertir: ");
    scanf("%d", &pesos);
    printf("La cantidad de pesos menos la comsion por el cambio es: %d\n", pesos);
    dolares = pesos / 17.90;
    printf("su total en dolares es: %d\n", dolares);
    return 0;
}
