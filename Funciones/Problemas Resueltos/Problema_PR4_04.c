/* 
 *                             Pares e impares.
 * El programa, al recibir como datos N números enteros, calcula cuántos
 * de ellos son pares y cuántos impares, con la ayuda de una función. 
 */

#include <stdio.h>
#include <math.h>

void par_o_impar(int, int *, int *); /* Prototipo de función. */

int main(void)
{
        int I, N, NUM, PAR = 0, IMP = 0;

        printf("Ingresa el número de datos: ");
        scanf("%d", &N);

        for (I =1; I <= N; I++)
        {
                printf("Ingresa el número %d:", I);
                scanf("%d", &NUM);

                /* Llamada a la función. Paso de parámetros por valor y por referencia. */
                par_o_impar(NUM, &PAR, &IMP);
        }

        printf("\nNúmero de pares: %d", PAR);
        printf("\nNúmero de impares: %d", IMP);

        return 0;
}

/* La función incrementa el parámetro *P o *I, según sea el número par o impar. */ 
void par_o_impar(int NUM, int *P, int *I)
{
        int RES = pow(-1, NUM);

        if (RES > 0)
                *P += 1;

        else
                *I += 1;
}