#include <stdio.h>
#define filas 3
#define cols 4
int main (void) {
    int i, j; int sala [filas][cols]= {{0,1,0,0},{1,1,0,0},{0,0,0,1}};
    for (i=0; i<filas; i++){
        for (j=0; j<cols; j++){
            printf("%d ", sala[i][j]);
        }
        printf("\n");
    }
  
    return 0;

}