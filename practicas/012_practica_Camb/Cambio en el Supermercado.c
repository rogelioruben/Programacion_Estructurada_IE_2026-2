#include<stdio.h>

int main () {
    int precio, cantidad, total;
    printf("Ingrese el precio del producto: ");
    scanf("%d", &precio);
    printf("Ingrese la cantidad de productos: ");
    scanf("%d", &cantidad);

    total = precio * cantidad;
    printf("El total a pagar es: %d\n", total);

    printf("Ingrese el monto con el que va a pagar: ");
int pago;
    scanf("%d", &pago);
    printf("El cambio es: %d\n", pago - total);

    printf("Gracias por su compra\n");
    
    return 0;
}   