#include <stdio.h>
#define TAMANO 5

int main () {
int  pastillas[TAMANO];
int i;
pastillas[0]=10;
pastillas[1]=8;
for(i=0;i<TAMANO;i++){
printf("indice [%d]: %d\n", i, pastillas[i]);

}

return 0;

}