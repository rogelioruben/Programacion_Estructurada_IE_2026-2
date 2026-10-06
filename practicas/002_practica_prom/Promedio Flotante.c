#include<stdio.h>

int main () {
    float nota1, nota2, promedio;
    printf("Ingrese la primera nota: ");
    scanf("%f", &nota1);
    printf("Ingrese la segunda nota: ");
    scanf("%f", &nota2);
    
    if (nota1 < 0 || nota2 < 0 ) {
        printf("Error: Las notas deben ser positivas.\n");
        return 1;
    }



    promedio = (nota1 + nota2) / 2;
    printf("El promedio es: %.2f\n", promedio);

    return 0;
}