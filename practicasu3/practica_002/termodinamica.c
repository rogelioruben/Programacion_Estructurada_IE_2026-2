#include <stdio.h>

int main () {
int n;

printf("Ingrese el numero de mediciones : ");
scanf("%d", &n);
if (n<=0){
    printf("El numero de mediciones debe ser mayor a 0\n");
    return 1;
}
float mediciones[n];

 printf("\n entrada de datos \n");
 for (int i=0; i<n; i++){
    printf("Ingrese la medicion %d: ", i+1);
    scanf("%f", &mediciones[i]);
 }

 float maximo = mediciones[0];
 float minimo = mediciones[0];
 for (int i=0; i<n; i++){
    if (mediciones[i]>maximo){
        maximo=mediciones[i];
    }
    if (mediciones[i]<minimo){
        minimo=mediciones[i];
    }
 }

 printf("\n El valor maximo es: %.2f\n", maximo);
    printf("\n El valor minimo es: %.2f\n", minimo);
 
return 0;
}

