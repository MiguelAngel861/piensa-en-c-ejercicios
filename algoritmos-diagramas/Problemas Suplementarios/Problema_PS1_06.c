/* En una casa de cambio necesitan construir un programa tal que al dar como dato
una cantidad expresada en dólares, convierta esa cantidad a pesos. Construye el
diagrama de flujo y el programa correspondiente.

Dato: CAN (variable de tipo real que representa la cantidad en dólares).
Consideraciones:

    • Toma en cuenta que el tipo de cambio actual es el siguiente: 1 dólar → 12.48 pesos. */

#include <stdio.h>

int main(void)
{
    const float PES = 12.48;
    float CAN;

    printf("Ingrese una cantidad de dolares: ");
    scanf("%f", &CAN);

    printf("%1.2f dolares son: %1.3f pesos", CAN, CAN * PES); 
}