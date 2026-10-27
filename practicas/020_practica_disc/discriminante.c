#include <stdio.h>

int main () {

    float a, b, c, discriminante;

    printf("Ingrese el valor de a: ");
    scanf("%f", &a);
    printf("Ingrese el valor de b: ");
    scanf("%f", &b);
    printf("Ingrese el valor de c: ");
    scanf("%f", &c);

    discriminante=(b * b) - (4 * a * c);

    printf("El valor del discriminante es: %.3f\n", discriminante);

    return 0;

}