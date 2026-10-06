#include <stdio.h>

int main() {
    double radio, area;
    const double PI = 3.141592653589793;  // Pi con alta precisión

    scanf("%lf", &radio);
    area = PI * radio * radio;

    printf("%.10lf\n", area);  // Muestra el área con 10 decimales
    return 0;
}