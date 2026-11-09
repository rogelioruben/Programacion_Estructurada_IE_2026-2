#include <stdio.h>
int main () {
int calificaciones[5];
int i;
calificaciones [0]=10;
calificaciones [1]=8;
calificaciones [2]=9;
calificaciones [3]=7;
calificaciones [4]=10;
for (i=0; i < 5; i++) {
printf("calificacion en casilla [%d]: %d\n", i, calificaciones[i]);
}
return 0;

}