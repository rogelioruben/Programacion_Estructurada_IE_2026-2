#include<stdio.h>

int main () {
    int cal1, cal2, cal3, cal4, cal5;
    float promedio;
    printf("Ingrese la calificacion 1: ");
    scanf("%d", &cal1);
    printf("Ingrese la calificacion 2: ");
    scanf("%d", &cal2);
    printf("Ingrese la calificacion 3: ");
    scanf("%d", &cal3);
    printf("Ingrese la calificacion 4: ");
    scanf("%d", &cal4);
    printf("Ingrese la calificacion 5: ");
    scanf("%d", &cal5);

    promedio = (cal1 + cal2 + cal3 + cal4 + cal5) / 5.0;
    if (promedio >= 70) {
        printf("Felicidades has Aprobado\n");
    } else {
        printf("Reprobado :(\n");
    }
    
    printf("El promedio semestral es: %.2f\n", promedio);

    return 0;
}