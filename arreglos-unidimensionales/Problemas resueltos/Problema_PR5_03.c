/* Primos.
El programa almacena en un arreglo unidimensional los primeros 100 números
➥primos. */

#include <stdio.h>

const int TAM = 100;

/* Prototipos de funciones. */
void Imprime(int *, int); 
void Primo(int, int *);

int main(void)
{
        int P[TAM] = {1, 2};
        int FLA, J = 2, PRI = 3;
        
        while (J <= TAM) {
                FLA = 1;
                
                Primo(PRI, &FLA); /* Se llama a la función que determina si PRI es primo. */

                /* Si FLA es 1, entonces PRI es primo. */
                if (FLA) {
                        P[J] = PRI;
                        
                        J++;
                }

                PRI += 2;
        }
        
        Imprime(P, TAM);

        return 0;
}

/* Esta función determina si A es primo, en cuyo caso el valor de *B no se altera. */
void Primo(int A, int *B)
{
        int DI = 3;
        
        while (*B && (DI < (A / 2))) {
                if ((A % DI) == 0)
                        *B = 0;
        
                DI++;
        }
}

/* Esta función imprime el arreglo unidimensional de números primos. */
void Imprime(int Primos[], int T)
{
        int I;
        
        for (I=0; I<T; I++) {
                printf("\nPrimos[%d]: %d", I, Primos[I]);
        }
}
