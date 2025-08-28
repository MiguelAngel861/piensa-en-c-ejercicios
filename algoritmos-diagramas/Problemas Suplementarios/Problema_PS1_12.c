/* Construye un diagrama de flujo y el programa correspondiente en C que, al recibir
como dato el radio de una esfera, calcule e imprima el área y su volumen.

Dato: RAD (variable de tipo real que representa el radio de la esfera).*/ 

#include <stdio.h>
#include <math.h>

#define Pi 3.1416

int main(void)
{
    float RAD, ARE, VOL;

    printf("Ingrese el radio de la esfera: ");
    scanf("%f", &RAD);

    ARE = 4 * Pi * pow(RAD, 2);
    VOL = 0.33 * Pi * pow(RAD, 3);

    printf("El Area del cuadrado es: %.3f\n", ARE);
    printf("El volumen del cuadrado es: %.3f", VOL);
}