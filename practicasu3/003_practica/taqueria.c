/*
practica 003 - tacos don beto
nombre del alumno:
grado grupo
carrera
...datos de la practica
*/
#include <stdio.h>

int main () {
//declaracion de variables
int tacos[5]; //arreglo donde se va a guardar 5 dias de ventas de tacos
int i; // es un indice de mi arreglo para saber la posicion 
int total_tacos; //total de vendidos
int dinero_total; //total de dinero acumulado
float promedio; //promedio de tacos vendidos
int precio; //precio por taco

precio=15;
i=0;
printf("registro semanal de taqueria DON BETO");

//total de venta de tacos por dia l m m v [0] to [4] ciclo for
for (i=0 ;i < 5 ; i=i+1 ){
    printf("Ingrese las ventas por dia %d\n", i+1);
    scanf("%d", &tacos[i]);
}

//extraer los datos de ventas de tacos
total_tacos=0;
for (i=0; i < 5; i=i+1){
    printf("dia %d:%d\n", i, tacos[i]);
    total_tacos=total_tacos+tacos[i];
}

//operaciones restantes

promedio= (float)total_tacos/5.0;
printf("El promedio de tacos vendidos es: %.3f\n", promedio);
dinero_total=total_tacos*precio;

if (total_tacos>200){
    printf("\n buena semana");
}
else{
    printf("\n mala semana");
}
printf("el total de la semana es: %d\n", dinero_total);
return 0;
}