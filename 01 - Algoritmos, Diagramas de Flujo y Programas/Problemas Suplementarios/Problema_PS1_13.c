/* Construye un diagrama de flujo y el correspondiente programa en C que, al recibir
como dato el lado de un hexaedro o cubo, calcule el área de la base, el área
lateral, el área total y el volumen.

    Dato: LAD (variable de tipo real que representa el lado del hexaedro). */

#include <stdio.h>
#include <math.h>

int main (void)
{
    float LAD, AB, AL, AT, VOL;

    printf("Cuanto miden los lados del cubo?\n");
    scanf("%f", &LAD);

    AB = pow(LAD, 2);
    AL = 4 * pow(LAD, 2);
    AT = 6 * pow(LAD, 2);
    VOL = pow(LAD, 3);

    printf("%.3f\n", AB);
    printf("%.3f\n", AL);
    printf("%.3f\n", AT);
    printf("%.3f\n", VOL);
}