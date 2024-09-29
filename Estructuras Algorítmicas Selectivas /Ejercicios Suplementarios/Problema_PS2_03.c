/* Construye un diagrama de flujo y el correspondiente programa en C que determine,
al recibir como datos dos números enteros, si un número es divisor de otro.

Datos: N1 y N2 (variables de tipo entero que representan los datos que se ingresan). */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int N1, N2;

    printf("Ingrese el numero \"a\": ");
    scanf("%i", &N1);

    printf("Ingrese el numero \"b\": ");
    scanf("%i", &N2);

    if (N1 % N2 == 0)
    {
        printf("\n%i es divisor de %i", N1, N2);
    }
    
    else if (N2 % N1 == 0)
    {
        printf("\n%i es divisor de %i", N2, N1);
        printf("\n%i no es divisor de %i", N1, N2);
    }
    else
    {
        printf("\n%i no es divisor de %i", N1, N2);
        printf("\n%i no es divisor de %i", N2, N1);
    }

}