/*
 * Escribe un programa que, al dar como dato un arreglo unidimensional de números
 * enteros, determine cuántos de ellos son positivos, cuántos negativos y cuántos
 * nulos. 
 * 
 * Dato: VEC[N] (arreglo unidimensional de tipo entero de N elementos, 1 ≤ N ≤ 100).
 */

#include <stdio.h>

int main(void)
{
        int cantidad_negativos = 0, cantidad_positivos = 0, cantidad_nulos = 0;
        int N, i;

        printf("Introduce la cantidad de elementos del arreglo: ");
        scanf("%d", &N);

        int VEC[N];

        for (i = 0; i < N; i++) {
                printf("Introduce el valor del elemento %d: ", i + 1);
                scanf("%d", &VEC[i]);

                if (VEC[i] < 0) 
                        cantidad_negativos++;
                
                else if (VEC[i] > 0)
                        cantidad_positivos++;
                
                else
                        cantidad_nulos++;
        }

        printf("\nCantidad de numeros negativos: %d\n", cantidad_negativos);
        printf("Cantidad de numeros positivos: %d\n", cantidad_positivos);
        printf("Cantidad de valores nulos: %d\n", cantidad_nulos);

        return 0;
}