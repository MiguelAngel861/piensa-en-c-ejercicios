/* Construye un diagrama de flujo y el correspondiente programa en C que permita
convertir de pulgadas a milímetros, de yardas a metros y de millas a kilómetros.

Datos: MED y VAL
b
Donde: MED es una variable de tipo entero que se utiliza para el tipo de
conversión que se quiere realizar.
VAL es una variable de tipo entero que representa el valor a convertir.

Consideraciones:
• 1 pulgada equivale a 25.40 milímetros.
• 1 yarda equivale a 0.9144 metros.
• 1 milla equivale a 1.6093 kilómetros. */

#include <stdio.h>

int main(void)
{
    int MED, VAL;
    float CON;

    printf("Ingrese el valor de la medida a convertir: ");
    scanf("%i", &VAL);

    printf("\n\t\t\t\tMenu de Opciones\n");
    printf("01.- Pulgadas a Milimetros || 02.- Yardas a metros || 03.- Millas a kilometros\n");

    printf("\nElija la conversion a ejecutar: ");
    scanf("%i", &MED);

    switch (MED)
    {
        case 1:
            CON = VAL * 25.4;

            printf("%i pulgadas son %.2f milimetros\n", VAL, CON);
        break;

        case 2:
            CON = VAL * 0.9144;

            printf("%i yardas son %.2f metros\n",VAL, CON);
        break;
        
        case 3:
            CON = VAL * 1.60934;

            printf("%i millas son %.2f kilometros\n", CON);
        break;

        default:
            printf("Ingrese una opcion valida\n");
        break;
    }
}