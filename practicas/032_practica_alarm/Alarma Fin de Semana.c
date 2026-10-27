#include <stdio.h>

int main() {

    int alarma;
    printf("Ingrese el dia de la semana (1: Lunes, 2: Martes, 3: Miercoles, 4: Jueves, 5: Viernes, 6: Sabado, 7: Domingo): ");
    scanf("%d", &alarma);

    if (alarma >= 1 && alarma <= 5) {
        printf("Es un dia laboral. La alarma esta activada.\n");
    } else if (alarma == 6 || alarma == 7) {
        printf("Es fin de semana. La alarma esta desactivada.\n");
    } else {
        printf("Dia invalido. Por favor ingrese un numero entre 1 y 7.\n");
    }

    return 0;
}