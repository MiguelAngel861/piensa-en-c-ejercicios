/*
 * Escribe un programa que almacene en un arreglo unidimensional los primeros
 * 100 números de Fibonacci e imprima el arreglo correspondiente.
 */

#include <stdio.h>

void generarFibonacci(int *VEC, int n) 
{
        for (int i = 2; i < n; i++) {
                VEC[i] = VEC[i - 1] + VEC[i - 2];
        }
}

int main(void)
{
        int fibonachi[100] = {0, 1};

        generarFibonacci(fibonachi, 100);

        for (int i = 0; i < 100; i++) {
                printf("\n%d", fibonachi[i]);
        }
}