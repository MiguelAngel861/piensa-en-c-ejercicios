/*Construye un diagrama de flujo y el correspondiente programa en C que calcule
e imprima el número de segundos que hay en un determinado número de días.

    Dato: DIA (variable de tipo entero que representa el número de días).*/

#include <stdio.h>

int main(void)
{
    int DIA, SEG;

    printf("Ingrese la cantidad de dias que quiere calcular: ");
    scanf("%i", &DIA);
    
    SEG = (24 * 60 * 60) * DIA;
    printf("%i dias son %i segundos", DIA, SEG);
}