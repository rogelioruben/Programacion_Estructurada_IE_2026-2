#include <stdio.h>

int main () {

    float horas_trabajadas = 0, pago_por_hora = 100, horas_extras = 0, pago_total = 0;
    printf("Ingrese el total de horas trabajadas: ");
    scanf("%f", &horas_trabajadas);
    printf("Ingrese el total de horas extras: ");
    scanf("%f", &horas_extras);
    pago_total = horas_trabajadas * pago_por_hora + horas_extras * pago_por_hora * 2;
    printf("El pago total es: $%.2f\n", pago_total);
    return 0;
}