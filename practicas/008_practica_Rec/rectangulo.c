#include <stdio.h>

int main() {
    float base, altura, area;
    printf("Ingrese la base del rectángulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del rectángulo: ");
    scanf("%f", &altura);

    if (base < 0 || altura < 0) {
        printf("Error: La base y la altura deben ser positivas.\n");
        return 1;
    }

    area = base * altura;
    float perimetro;
    perimetro = 2 * (base + altura);
    printf("El área del rectángulo es: %.2f\n", area);
    printf("El perímetro del rectángulo es: %.2f\n", perimetro);

    return 0;
}