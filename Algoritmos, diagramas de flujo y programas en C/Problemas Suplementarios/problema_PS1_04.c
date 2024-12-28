#include <stdio.h>

int main(void)
{
    float PRE, PAG;;

    printf("Ingrese el costo del articulo a comprar: ");
    scanf("%f", &PRE);

    printf("Ingrese el pago del cliente: ");
    scanf("%f", &PAG);

    printf("Cambio a entregar: %f", PAG - PRE);
}