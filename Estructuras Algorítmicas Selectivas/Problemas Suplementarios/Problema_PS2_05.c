/* En una tienda departamental ofrecen descuentos a los clientes en la Navidad, de
acuerdo con el monto de su compra. El criterio para establecer el descuento se
muestra abajo. Construye un diagrama de flujo y el correspondiente programa en
C que, al recibir como dato el monto de la compra del cliente, obtenga el precio
real que debe pagar luego de aplicar el descuento correspondiente.

Compra < $800 ⇒ Descuento 0%.
$800 <= Compra <= $1500 ⇒ Descuento 10%.
$1500 < Compra <= $5000 ⇒ Descuento 15%.
$5000 < Compra ⇒ Descuento 20%.

Dato: COM (variable de tipo real que representa el monto de la compra). */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float COM;

    printf("Ingrese el monto de la compra: ");
    scanf("%f", &COM);

    if (COM < 800)
    {
        printf("\nSu compra no obtuvo un descuento\n");
        printf("Valor de la compra: %f\n\n", COM);
    }
    else if (COM > 800 & COM <= 1500)
    {
        COM *= 0.90;

        printf("\nSu compra obtuvo un descuento del 10 porciento\n");
        printf("Valor de la compra: %f\n\n", COM);
    }
    else if (COM > 1500 & COM <= 5000)
    {
        COM *= 0.85;

        printf("\nSu compra obtuvo un descuento del 15 porciento\n");
        printf("Valor de la compra: %f\n\n", COM);
    }
    else if (COM > 5000)
    {
        COM *= 0.80;

        printf("\nSu compra obtuvo un descuento del 20 porciente\n");
        printf("Valor de la compra: %f\n\n", COM);
    }
        system("pause");
        return 0;
}