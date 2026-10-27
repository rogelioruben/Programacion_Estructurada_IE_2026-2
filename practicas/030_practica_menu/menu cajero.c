#include <stdio.h>

int main() {
    int menu;
    printf("Bienvenido al menu del cajero automatico\n");
    printf("Seleccione una opcion:\n");
    printf("1. Consultar saldo\n");
    printf("2. Retirar dinero\n");
    printf("3. Depositar dinero\n");
    printf("Ingrese su opcion (1-3): ");
    scanf("%d", &menu);
    switch (menu) {
        case 1:
            printf("Su saldo actual es de $1000.\n");
            break;
        case 2:
            printf("Ingrese la cantidad a retirar: ");
            int retiro;
            scanf("%d", &retiro);
            if (retiro > 1000) {
                printf("Saldo insuficiente para realizar el retiro.\n");
            } else {
                printf("Ha retirado $%d. Su nuevo saldo es de $%d.\n", retiro, 1000 - retiro);
            }
            break;
        case 3:
            printf("Ingrese la cantidad a depositar: ");
            int deposito;
            scanf("%d", &deposito);
            printf("Ha depositado $%d. Su nuevo saldo es de $%d.\n", deposito, 1000 + deposito);
            break;
        default:
            printf("Opcion invalida. Por favor seleccione una opcion entre 1 y 3.\n");
    }
 return 0;
                                                                  
}