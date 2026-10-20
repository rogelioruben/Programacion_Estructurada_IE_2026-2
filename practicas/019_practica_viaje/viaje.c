#include <stdio.h>

int main() {
float distancia, rendimiento, precio_de_gas, casetas, costo_de_casetas, total_gastado;
printf("ingrese la distancia recorrida en kilometros: ");
scanf("%f", &distancia);
printf("ingrese el rendimiento del vehiculo en Km/L: ");
scanf("%f", &rendimiento);
printf("ingrese el precio de la gasolina por litro: ");
scanf("%f", &precio_de_gas);
printf("ingrese el total de casetas: ");
scanf("%f", &casetas);
printf("ingrese el costo de cada caseta: ");
scanf("%f", &costo_de_casetas);
total_gastado = (distancia/rendimiento)*precio_de_gas + casetas * costo_de_casetas;
printf("el total gastado en el viaje es de: $%.3f\n", total_gastado);

return 0;

}