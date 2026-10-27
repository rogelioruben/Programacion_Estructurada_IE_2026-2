#include <stdio.h>

int main() {
    int mes;
    printf("Ingrese el numero del mes (1-12): ");
    scanf("%d", &mes);

    switch(mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("El mes %d tiene 31 dias.\n", mes);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("El mes %d tiene 30 dias.\n", mes);
            break;
        case 2:
            printf("El mes %d tiene 28 o 29 dias.\n", mes);
            break;
        default:
            printf("Mes invalido. Por favor ingrese un numero entre 1 y 12.\n");
            return 1; // Exit the program with an error code
    }

    return 0;
}