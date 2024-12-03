/* Construye un diagrama de flujo y el correspondiente programa en C que, al recibir
como datos el radio, la generatriz y la altura de un cono, calcule e imprima el
área de la base, el área lateral, el área total y su volumen. */
#include <stdio.h>
#include <math.h>

#define Pi 3.1416

int main(void)
{
    int RAD, ALT, GEN; //Datos
    int AB, AL, AT, VOL; //Ecuaciones

    printf("Ingrese Altura del cono: ");
    scanf("%i", &ALT);

    printf("Ingrese Radio del cono: ");
    scanf("%i", &RAD);

    printf("Ingrese Genetriz del cono: ");
    scanf("%i", &GEN);
    AB = Pi * pow(RAD, 2);
    AL = Pi * RAD * GEN;
    AT =  AB * AL;
    VOL = 0.33 * AB * AL;

    printf("El area del Cono es: %i\n", AT);
    printf("El volumen del Cono es: %i", VOL);
}