#include <stdio.h>

int main() {
int imc, peso, estatura;
printf("Ingrese su peso en kilogramos: ");
scanf("%d", &peso);
printf("Ingrese su estatura en metros: ");
scanf("%d", &estatura);
imc=peso/(estatura*estatura);
printf("su indice de masa corporal (imc) es de : %d\n", imc);

return 0;

}