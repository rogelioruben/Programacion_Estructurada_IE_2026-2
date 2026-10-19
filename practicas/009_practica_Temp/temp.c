#include <stdio.h>

int main() {
  char entrada[100];
  float celcius;
  
  printf("Ingrese la temperatura en grados Celsius: ");
  scanf("%s", &entrada);

printf("valor sin procesar (raw): \"%s\"\n", entrada);
  
  if (sscanf(entrada, "%f", &celcius) == 1) {
    printf("valor procesado: %.2f °C\n", celcius);
  } else {
    printf("Error: Entrada inválida.\n");
  }
  return 0;
}