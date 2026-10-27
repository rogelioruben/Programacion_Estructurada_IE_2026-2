#include <stdio.h>

int main() {
    int saldo_minimo = 1000, saldo_actual, penalizacion = 0;
    printf("Ingrese su saldo actual: ");
    scanf("%d", &saldo_actual);

    if (saldo_actual < saldo_minimo) {
        penalizacion = 100;
        printf("Su saldo es insuficiente. Se le ha aplicado una penalización de $%d.\n", penalizacion);
    } else {
        printf("Su saldo es suficiente.\n");
    }

    return 0;
}