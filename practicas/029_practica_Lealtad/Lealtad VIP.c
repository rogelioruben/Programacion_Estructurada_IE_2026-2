#include <stdio.h>

int main() {
int miembro, puntos;
printf("eres miembro del club VIP? (1: si, 2: no): ");
scanf("%d", &miembro);
if (miembro == 1) {
    printf("Ingrese sus puntos acumulados: ");
    scanf("%d", &puntos);
    if (puntos >= 1000) {
        printf("Felicidades! Usted es un miembro VIP con beneficios exclusivos.\n");
    } else {
        printf("Usted es un miembro VIP, pero necesita acumular mas puntos para obtener beneficios.\n");
    }
} else if (miembro == 2) {
    printf("Usted no es miembro del club VIP. Considere unirse para obtener beneficios exclusivos.\n");
} else {
    printf("Opcion invalida. Por favor ingrese 1 para si o 2 para no.\n");

}
return 0;
}