/* Construye un diagrama de flujo y el respectivo programa en C que, al recibir como
datos las coordenadas de los puntos P1, P2 y P3 que corresponden a los vértices
de un triángulo, calcule su superficie.

    Datos: X1, Y1, X2, Y2, X3, Y3
    
    Donde: X1 y Y1 son variables de tipo real que indican las coordenadas del punto P1.
    X2 y Y2 son variables de tipo real que representan las coordenadas del
    punto P2.
    X3 y Y3 son variables de tipo real que indican las coordenadas del punto P3. */

#include <stdio.h>
#include <math.h>

int main(void)
{
    float X1, Y1; //Punt0 1
    float X2, Y2; //Punto 2
    float X3, Y3; //Punto 3
    float ARE;

    printf("Ingrese las coordenadas del punto P1: ");
    scanf("%f %f", &X1, &Y2);

    printf("Ingrese las coordenadas del punto P2: ");
    scanf("%f %f", &X2, &Y2);

    printf("Ingrese las coordenadas del punto P3: ");
    scanf("%f %f", &X3, &Y3);

    ARE = 0.5 * fabs(X1 * (Y2 - Y3) + X2 * (Y3 - Y1) + X3 * (Y1 - Y2));

    printf("%.3f", ARE);
}