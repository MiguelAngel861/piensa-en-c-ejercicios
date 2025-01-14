#include <stdio.h>

/* Ordenación por inserción directa. */
const int MAX = 100;

void lectura(int *, int);
void ordena(int *, int); /* Prototipos de funciones. */
void imprime(int *, int);

void main(void)
{
        int tam, vec[MAX];

        do {
                printf("Ingrese el tamaño del arreglo: ");
                scanf("%d", &tam);
        } while (tam > MAX || tam < 1);
        /* Se verifica que el tamaño del arreglo sea correcto. */

        lectura(vec, tam);
        ordena(vec, tam);
        imprime(vec, tam);
}

void lectura(int a[], int t)
{
        /* La función lectura se utiliza para leer un arreglo unidimensional de t
         * elementos de tipo entero. */
        int i;

        for (i = 0; i < t; i++) {
                printf("Ingrese el elemento %d: ", i + 1);
                scanf("%d", &a[i]);
        }
}

void imprime(int a[], int t)
{
        /* Esta función se utiliza para escribir un arreglo unidimensional
         * ordenado de t elementos de tipo entero. */
        int i;

        for (i = 0; i < t; i++)
                printf("\nA[%d]: %d", i, a[i]);
}

void ordena(int a[], int t)
{
        /* La función ordena utiliza el método de inserción directa para ordenar
         * los elementos del arreglo unidimensional a. */
        int aux, l, i;

        for (i = 1; i < t; i++) {
                aux = a[i];
                l = i - 1;

                while ((l >= 0) && (aux < a[l])) {
                        a[l + 1] = a[l];
                        l--;
                }
                a[l + 1] = aux;
        }
}