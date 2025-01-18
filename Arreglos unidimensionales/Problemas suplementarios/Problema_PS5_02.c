/*
 * Escribe un programa que reciba como entrada un arreglo unidimensional ordenado
 * 0 de N enteros y obtenga como salida ese mismo arreglo pero sin los elementos
 * repetidos. 
 * 
 * Dato: VEC[N] (arreglo unidimensional de tipo entero de N elementos, 1 ≤ N ≤ 100).
 */

#include <stdio.h>

static const valor_maximo = 100;
void eliminar_valor_repetido(int *vec, int *tamano); 

int main(void)
{
        int tamano_arreglo, VEC[valor_maximo];

        do {
                printf("Introduce el tamaño del arreglo: ");
                scanf("%d", &tamano_arreglo);

        } while (tamano_arreglo < 1 || tamano_arreglo > valor_maximo);

        for (int i = 0; i < tamano_arreglo; i++) {
                printf("Introduce el elemento %d: ", i + 1);
                scanf("%d", &VEC[i]);
        }

        eliminar_valor_repetido(VEC, &tamano_arreglo);
}

void eliminar_valor_repetido(int *vec, int *tamano)
{
        int i, j, k;
        
        for (i = 0; i  < *tamano; i++) {
                for (j = i + 1; j < *tamano; j++) {
                        if (vec[i] == vec[j]) {
                                for (k = j; k < *tamano; k++) {
                                        vec[k] = vec[k + 1];
                                }
                                *tamano--;
                                j--;
                        }
                }
        }
}