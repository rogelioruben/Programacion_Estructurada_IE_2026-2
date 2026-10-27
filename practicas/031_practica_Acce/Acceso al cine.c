#include <stdio.h>

int main() {

    int edad, boleto;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    printf("Ingrese si tiene boleto (0: No, 1: Sí): ");
    scanf("%d", &boleto);

    if (edad < 18 && boleto == 0) {
        printf("Usted es menor de edad. No puede acceder al cine.\n");
    } else {
        printf("Usted es mayor de edad. Puede acceder al cine.\n");
    }
return 0;

}
