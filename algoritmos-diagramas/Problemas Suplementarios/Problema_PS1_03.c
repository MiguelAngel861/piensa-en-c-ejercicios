/*Construye un diagrama de flujo y el correspondiente programa en C que, al recibir
como datos dos números reales, calcule la suma, resta y multiplicación de dichos
números.

Datos: N1, N2 (variables de tipo real que representan los números que se ingresan).*/

#include <stdio.h>

int main (void)
{
    float N1, N2;
    printf("Ingrese dos numero: ");
    scanf("%f %f", &N1, &N2);

    printf("Suma de dichos numeros %f\n", N1 + N2);
    printf("Resta de dichos numeros %f\n", N1 - N2);
    printf("Multiplicacion de dichos numeros %f\n", N1 * N2);
}