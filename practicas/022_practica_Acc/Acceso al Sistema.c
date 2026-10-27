#include <stdio.h>
int main() {
    int contraseña;
    printf("Ingrese la contraseña: ");
    scanf("%d", &contraseña);
    if (contraseña == 1234) {
        printf("acceso concedido");
    } else {
        printf("acceso denegado");
    
    }
    return 0;

}