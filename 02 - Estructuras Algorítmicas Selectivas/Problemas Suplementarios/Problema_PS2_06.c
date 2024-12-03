/* Construye un diagrama de flujo y el correspondiente programa en C que, al
recibir como datos tres números reales, identifique cuál es el mayor. Considera
que los números pueden ser iguales.

Datos: N1, N2 y N3 (variables de tipo real que representan los números que se
ingresan). */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float N1, N2, N3;

    printf("Ingrese un valor para N1: ");
    scanf("%f", &N1);

    printf("Ingrese un valor para N2: ");
    scanf("%f", &N2);

    printf("Ingrese un valor para N3: ");
    scanf("%f", &N3);

    if (N1 > N2 & N1 > N3)
    {
        printf("\nN1 (%.2f), es el mayor de todos los numeros.\n\n", N1);
    }
    else if (N2 > N3 & N2 > N1)
    {
        printf("\nN2 (%.2f), es el mayor de todos los numeros.\n\n", N2);
    }
    else if (N3 > N2 & N3 > N1)
    {
        printf("\nN3 (%.2f), es el mayor de todos los numeros.\n\n", N3);
    }
    else if(N1 == N2 & N1 > N3)
    {
        printf("\nN1 (%.2f) y N2 (%.2f) son los numeros mayores\n\n", N1, N2);
    }
    else if(N1 == N3 & N1 > N2)
    {
        printf("\nN1 (%.2f) y N3 (%.2f) son los numeros mayores\n\n", N1, N3);
    }
    else if (N2 == N3 & N2 > N1)
    {
        printf("\nN2 (%.2f) y N3 (%.2f) son los numeros mayores\n\n", N2, N3);
    }
    else
    {
        printf("\nTodos los numeros poseen el mismo valor\n\n");
    }

    system("pause");
    return 0;
}