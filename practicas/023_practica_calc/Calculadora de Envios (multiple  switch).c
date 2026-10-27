#include <stdio.h>

int main() {
 int local=50, nacional= 150, internacional=500;
 float  zona, precio;
printf("Ingrese el tipo de envio (1: Local, 2: Nacional, 3: Internacional): ");
scanf("%d", &zona);

switch(zona) {
    case 1:
        precio = local;
        break;
    case 2:
        precio = nacional;
        break;
    case 3:
        precio = internacional;
        break;
    default:
        printf("Tipo de envio invalido.\n");
        return 1; // Exit the program with an error code
return 0;

}
}