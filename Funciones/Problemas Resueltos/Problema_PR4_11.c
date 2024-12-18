/*
 * Analiza cuidadosamente el siguiente programa e indica qué imprime. 
 * Si tus re sultados coinciden con los presentados,felicitaciones. 
 * Si son diferentes, revisa principalmente la aplicación de los parámetros
 * por referencia, porque tal vez hay algún concepto que aún no dominas.
 */

#include <stdio.h>

/* Prototipo de función. */
int F1(int , int *);

/* Variables globales. */
int A = 3;
int B = 7;
int C = 4;
int D = 2;

int main(void)
{
        A = F1(C, &D);

        printf("\n%d %d %d %d", A, B, C, D);

        C = 3;

        C = F1(A, &C);

        printf("\n%d %d %d %d", A, B, C, D);
}

int F1(int X, int *Y)
{
        int A;

        A = X * *Y;
        C++;
        B += *Y;

        printf("\n%d %d %d %d", A, B, C, D);

        *Y--;

        return  (C);
}