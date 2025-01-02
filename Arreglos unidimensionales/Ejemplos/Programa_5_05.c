/* Frecuencia de calificaciones. 
El programa, al recibir como datos las calificaciones de un grupo de 50
➥alumnos, obtiene la frecuencia de cada una de las calificaciones y además
➥escribe cuál es la frecuencia más alta. */ 

#include <stdio.h>

const int TAM = 50;

/* Prototipos de funciones. */
void Lectura(int *, int);
void Frecuencia(int A[], int P, int B[], int T);
void Impresion(int *, int);
void Mayor(int *, int);

int main(void)
{
       int CAL[TAM], FRE[6] = {0};  /* Declaración de los arreglos. */

        Lectura(CAL, TAM); /* Se llama a la función Lectura. */
        Frecuencia(CAL, TAM, FRE, 6); /* Se llama a la función Frecuencia, se pasan ambos arreglos. */

        printf("\nFrecuencia de Calificaciones\n");
        Impresion(FRE, 6);
        Mayor(FRE, 6);

        return 0;
}

/* La función Lectura se utiliza para leer el arreglo de calificaciones. */
void Lectura(int VEC[], int T)
{
        int I;
        
        for (I = 0; I < T; I++)
        {
                printf("Ingrese la calificación -0:5- del alumno %d: ", I+1);
                scanf("%d", &VEC[I]);
        }
}

/* La función Impresión se utiliza para imprimir el arreglo de frecuencias. */
void Impresion(int VEC[], int T)
{
        int I;

        for (I = 0; I < T; I++) {
                printf("\nVEC[%d]: %d", I, VEC[I]);
        }
}

/* Esta función calcula la frecuencia de calificaciones. */
void Frecuencia(int A[], int P, int B[], int T)
{
        int I;

        for  (I = 0; I < P; I++) {
                if ((A[I] >= 0) && (A[I] < 6)) /* Se valida que la calificación seacorrecta. */
                        B[A[I]]++; /* Observa la forma de almacenar e incrementar las frecuencias. */
        }
}

/* Esta función obtiene la primera ocurrencia de la frecuencia más alta. */
void Mayor(int *X, int T)
{
        int I, MFRE = 0, MVAL = X[0];
        
        for (I=1; I<T; I++) {
                if (MVAL < X[I]) {
                        MFRE = I;
                        MVAL = X[I];
                }
        }

        printf("\n\nMayor frecuencia de calificaciones: %d \tValor: %d", MFRE, MVAL); /* 248 */
}