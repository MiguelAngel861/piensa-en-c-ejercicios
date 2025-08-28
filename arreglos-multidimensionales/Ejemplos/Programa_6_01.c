/*
 * Escribe un programa en C que, al recibir como dato un arreglo bidimensional
 * cuadrado de tipo entero de dimensión 10, imprima la diagonal de dicha matriz.
 *
 * Dato: MAT[10][10] (arreglo bidimensional de tipo entero que almacena 100
 *       elementos).
 */

/* Diagonal principal.
 * El programa, al recibir como dato una matriz
 * de tipo entero, escribe la diagonal principal. 
 */

#include <stdio.h>

const int TAM = 10;

/* Prototipo de funciones. */
/* Observa que siempre es necesario declarar el número de columnas.
 * Si no lohaces, el compilador marcará un error de sintaxis. 
 */

void Lectura(int[][TAM], int);
void Imprime(int[][TAM], int);

void main(void)
{
        int MAT[TAM][TAM];
        Lectura(MAT, TAM);
        Imprime(MAT, TAM);
}

/* La función Lectura se utiliza para leer un arreglo bidimensional. Observa
 * que sólo se debe pasar como parámetro el número de filas ya que la matriz
 * es cuadrada. 
 */
void Lectura(int A[][TAM], int F)
{
        int I, J;

        for (I = 0; I < F; I++) {
                for (J = 0; J < F; J++) {
                        printf("Ingrese el elemento % d % d : ", I + 1, J + 1);
                        scanf("% d", &A[I][J]);
                }
        }
}

/* La función Imprime se utiliza para escribir un
 * arreglo bidimensional cuadrado de F filas y columnas. 
 */
void Imprime(int A[][TAM], int F)
{
        int I, J;

        for (I = 0; I < F; I++) {
                for (J = 0; J < TAM; J++) {
                        if (I == J)
                                printf("\nDiagonal %d %d: %d ", I, J, A[I][J]);
                }
        }
}