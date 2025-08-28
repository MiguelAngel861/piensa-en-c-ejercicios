/* Construye un diagrama de flujo y el correspondiente programa en C que, al
recibir como datos de entrada tres valores enteros diferentes entre sí, determine
si los mismos están en orden creciente.

Datos : N1, N2 y N3 (variables de tipo entero que representan los datos que se
ingresan). */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N1, N2, N3;

    printf("Ingrese el numero \"a\": ");
    scanf("%i", &N1);

    printf("Ingrese el numero \"b\": ");
    scanf("%i", &N2);

    printf("Ingrese el numero \"c\": ");
    scanf("%i", &N3);

    if (N3 < N2 & N2 < N1)
    {
        printf("Los numeros estan en orden creciente\n");
    }
    else
    {
        printf("Los no numeros estan en orden creciente\n");
        system("pause");
        return 1;
    }
    system("pause");
    return 0;
}