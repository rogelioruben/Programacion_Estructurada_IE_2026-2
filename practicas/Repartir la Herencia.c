#include <stdio.h>

int main() {
    int herencia, hijos, parte;

    printf("ingresa la cantidad de herencia total a repartir: ");
    scanf("%d", &herencia);

    printf("ingresa la cantidad de hijos: ");
    scanf("%d", &hijos);

    if (hijos == 0) {
        printf("\nno hay hijos herederos.\n");
        return 1;
    }

    parte = herencia / hijos;
    printf("\nLa cantidad de herencia que corresponde a cada uno es de $%d\n", parte);

    return 0;
}   