Escribe un programa en C que genere un cuadrado mágico (CM). Un CM se
representa por medio de una matriz cuadrada de orden N, impar, y contiene los
números comprendidos entre 1 y N*N. En un CM la suma de cualquiera de las fi-
las, columnas y diagonales principales siempre es la misma. El cuadrado mágico
se genera aplicando los siguientes criterios:
1. El primer número (1) se coloca en la celda central de la primera fila.
2. El siguiente número se coloca en la celda de la fila anterior y columna
posterior.
3. La fila anterior al primero es el último. La columna posterior a la última es
la primera.
4. Si el número es un sucesor de un múltiplo de N, no aplique la regla 2.
Coloque el número en la celda de la misma columna de la fila posterior
#include <stdio.h>
/* Cuadrado mágico.
El programa genera un cuadrado mágico siguiendo los criterios enunciados
➥anteriormente. */
const int MAX = 50;
void Cuadrado(int [][MAX], int);
void Imprime(int [][MAX], int); /* Prototipos de funciones. */
void main(void)
{
int CMA[MAX][MAX],TAM;
do
{
printf(”Ingrese el tamaño impar de la matriz: ”);
scanf(”%d”, &TAM);
}
while ((TAM > MAX  TAM < 1) && (TAM % 2));
/* Se verifica el tamaño del arreglo y el orden (impar) del mismo. */
Cuadrado(CMA, TAM);
Imprime(CMA, TAM);
}
void Cuadrado(int A[][MAX],int N)
/* Esta función se utiliza para formar el cuadrado mágico. */
{
int I = 1, FIL = 0, COL = N / 2, NUM = N * N;
while (I <= NUM)
{
A[FIL][COL] = I;
if (I%N != 0)
{
FIL = (FIL – 1 + N) % N;
COL = (COL + 1) % N;
}
else
FIL++;
I++;
}
}
void Imprime(int A[][MAX], int N)
/* Esta función se utiliza para escribir el cuadrado mágico. */
{
int I, J;
for (I=0; I<N; I++)
for (J=0; J<N; J++)
printf(”\nElemento %d %d: %d”,I+1, J+1, A[I][J]);
}
