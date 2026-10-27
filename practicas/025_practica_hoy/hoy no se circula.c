#include <stdio.h>

int main() {
    int placa;
    printf("Ingrese el ultimo digito de su placa: ");
    scanf("%d", &placa);

    if (placa %2 == 0) {
        printf("Hoy no se circula para placas con ultimo digito par.\n");
    } else {
        printf("Hoy circula para placas con ultimo digito impar.\n");
    }
return 0;

}