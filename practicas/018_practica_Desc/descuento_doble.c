#include <stdio.h>

int main () {

    float precio_producto = 0, precio_final = 0;
printf("ingrese el precio del producto:");
scanf("%f", &precio_producto);
precio_final=precio_producto*(1-0.20)*(1-0.10);
printf("el precio final es: $%.2f\n", precio_final);


return 0;

}