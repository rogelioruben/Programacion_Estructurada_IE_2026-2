#include <stdio.h>

int main() {
    float peso;
    printf("Ingrese su peso en kilogramos: ");
    scanf("%f", &peso);
    if (peso < 52) {
        printf("Categoria: Mosca\n");
    } else if (peso >= 52 && peso < 57) {
        printf("Categoria: Gallo\n");
    } else if (peso >= 57 && peso < 63) {
        printf("Categoria: Pluma\n");
    } else if (peso >= 63 && peso < 70) {
        printf("Categoria: Ligero\n");
    } else if (peso >= 70 && peso < 78) {
        printf("Categoria: Welter\n");
    } else if (peso >= 78 && peso < 86) {
        printf("Categoria: Mediano\n");
    } else if (peso >= 86 && peso < 95) {
        printf("Categoria: Semipesado\n");
    } else if (peso >= 95 && peso < 105) {
        printf("Categoria: Pesado\n");
    } else {
        printf("Categoria: Superpesado\n");
    }
    return 0;
}