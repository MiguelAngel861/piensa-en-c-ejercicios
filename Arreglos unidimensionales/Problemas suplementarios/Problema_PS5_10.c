/*
 * Construye un programa en C que, al recibir como datos dos arreglos unidimensionales
 * de tipo entero, el primero ordenado en forma ascendente y el segundo en forma descendente,
 * de N y M elementos respectivamente, genere un nuevo arreglo unidimensional ordenado en
 * forma ascendente de N+M elementos de tipo entero, mezclando los dos primeros arreglos.
 *
 * Datos: VEC1[N], VEC2[M]
 *
 * Donde: VEC1 y VEC2 son dos arreglos unidimensionales de tipo entero de N y M
 *        elementos, respectivamente, 1 ≤ N ≤ 100, 1 ≤ M ≤ 100.
 */

#include <stdio.h>

#define MAX 100

void lectura_de_arreglos(int VEC[], int tamano_arreglo);
void duplicacion_de_arreglos(int VEC1[], int VEC2[], int tamano_arreglo, int inicio);
void bubble_sort(int tamano_arreglo, int VEC[]);
void impresion_arreglo(int tamano_arreglo, int VEC[]);

int main(void)
{
        int N, M, O, VEC1[MAX] = {0}, VEC2[MAX] = {0}, VEC3[200] = {0};

        // Lectura del tamaño de los arreglos 1 y 2
        printf("Ingresa el tamaño del arreglo numero 1: ");
        scanf("%d", &N);

        printf("Ingresa el tamaño del arreglo numero 2: ");
        scanf("%d", &M);

        O = N + M;

        // Entrada de datos en los arreglos
        printf("\nIngrese los datos del arreglo numero 1.\n");
        lectura_de_arreglos(VEC1, N);
        bubble_sort(N, VEC1);

        printf("\nIngrese los datos del arreglo numero 2.\n");
        lectura_de_arreglos(VEC2, M);
        
        int aux;

        for (int i = 0; i < M - 1; i++)
        {
                for (int j = 0; j < M - 1 - i; j++)
                {
                        if (VEC2[j] < VEC2[j + 1])
                        {
                                aux = VEC2[j];
                                VEC2[j] = VEC2[j + 1];
                                VEC2[j + 1] = aux;
                        }
                }
        }

        printf("\nArreglo numero uno ordenado en forma ascendente:\n");
        impresion_arreglo(N, VEC1);

        printf("\n\nArreglo numero dos ordenado en forma descendente:\n");
        impresion_arreglo(M, VEC2);

        // Duplicacion de los arreglos uno y dos en el arreglo numero tres
        duplicacion_de_arreglos(VEC1, VEC3, N, 0);
        duplicacion_de_arreglos(VEC2, VEC3, O, N);

        bubble_sort(O, VEC3);

        printf("\n\nArreglo numero tres ordenado en forma ascendente:\n");
        impresion_arreglo(O, VEC3);

        putchar('\n');

        return 0;
}

void impresion_arreglo(int tamano_arreglo, int VEC[])
{
        for (int i = 0; i < tamano_arreglo; i++)
        {
                printf("%d ", VEC[i]);
        }
}
// Lectura de datos en los elementos de un arreglo
void lectura_de_arreglos(int VEC[], int tamano_arreglo)
{
        for (int i = 0; i < tamano_arreglo; i++)
        {
                printf("Ingresa el valor de la posicion numero %d: ", i + 1);
                scanf("%d", &VEC[i]);
        }
}

// Duplicacion de los valores de un arreglo en otro
void duplicacion_de_arreglos(int VEC1[], int VEC2[], int tamano_arreglo, int inicio)
{
        for (int i = 0; i < tamano_arreglo; i++)
        {
                VEC2[i + inicio] = VEC1[i];
        }
}

void bubble_sort(int tamano_arreglo, int VEC[])
{
        int aux;

        for (int i = 0; i < tamano_arreglo - 1; i++)
        {
                for (int j = 0; j < tamano_arreglo - 1 - i; j++)
                {
                        if (VEC[j] > VEC[j + 1])
                        {
                                aux = VEC[j];
                                VEC[j] = VEC[j + 1];
                                VEC[j + 1] = aux;
                        }
                }
        }
}