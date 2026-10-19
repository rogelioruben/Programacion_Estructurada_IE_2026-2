#include <stdio.h>

int main() {
    float farenheit, celsius;
    printf("Ingrese la temperatura en grados Fahrenheit: ");
    scanf("%f", &farenheit);
    celsius = (farenheit - 32) * 5/9;
    printf("La temperatura en grados Celsius es: %.2f\n", celsius);
    return 0;
}