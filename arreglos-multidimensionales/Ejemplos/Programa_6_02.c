/*
 * Escribe un programa en C que, al recibir dos arreglos bidimensionales MA y MB de
 * MxN elementos cada uno, calcule la suma de ambos arreglos, almacene el resultado
 * en otro arreglo bidimensional e imprima, además, el resultado obtenido.
 * 
 *  Datos: MA[M][N], MB[M][N] (arreglos bidimensionales de tipo entero de MxN
 *         elementos, 1 ≤ M ≤ 50 y 1 ≤ N ≤ 50).
 */

/* Suma matrices.
 * El programa, al recibir como datos dos arreglos bidimensionales del mismo
 * tamaño, calcula la suma de ambos y la almacena en un tercer arreglo bidimensional. 
 */

#include <stdio.h>

const int MAX = 50;

/* Prototipo de funciones. */
void Lectura(int[][MAX], int, int);
void Suma(int[][MAX], int[][MAX], int[][MAX], int, int);
void Imprime(int[][MAX], int, int);

void main(void)
{       
        /* Declaración de los tres arreglos */
        int MA[MAX][MAX], MB[MAX][MAX], MC[MAX][MAX];
        int FIL, COL;

        do {
                printf("Ingrese el número de filas de los arreglos: ");
                scanf("%d", &FIL);
        } while (FIL > MAX || FIL < 1); /* Se verifica que el número de filas sea correcto. */


        do {
                printf("Ingrese el número de columnas de los arreglos: ");
                scanf("%d", &COL);
        } while (COL > MAX || COL < 1);  /* Se verifica que el número de columnas sea correcto. */

        printf("\nLectura del Arreglo MA\n");
        Lectura(MA, FIL, COL);

        printf("\nLectura del Arreglo MB\n");
        Lectura(MB, FIL, COL);

        Suma(MA, MB, MC, FIL, COL);

        printf("\nImpresión del Arreglo MC\n");
        Imprime(MC, FIL, COL);
}
void Lectura(int A[][MAX], int F, int C)
{
        /* La función Lectura se utiliza para leer un arreglo bidimensional
         * entero de F filas y C columnas. 
         */

        int I, J;
        
        for (I = 0; I < F; I++) {
                for (J = 0; J < C; J++) {
                        printf("Ingrese el elemento %d %d: ", I + 1, J + 1);
                        scanf("%d", &A[I][J]);
                }
        }
}
void Suma(int M1[][MAX], int M2[][MAX], int M3[][MAX], int F, int C)
{
        /* La función Suma se utiliza para sumar los arreglos y almacenar el resultado
         * en un tercer arreglo bidimensional. 
         */

        int I, J;
        
        for (I = 0; I < F; I++) {
                for (J = 0; J < C; J++) {
                        M3[I][J] = M1[I][J] + M2[I][J];
                }
        }
}
void Imprime(int A[][MAX], int F, int C)
{
        /* La función Imprime se utiliza para escribir un arreglo bidimensional de tipo
         * entero de F filas y C columnas. 
         */

        int I, J;

        for (I = 0; I < F; I++) {
                for (J = 0; J < C; J++) {
                        printf("\nElemento %d %d: %d ", I, J, A[I][J]);
                }
        }
}
