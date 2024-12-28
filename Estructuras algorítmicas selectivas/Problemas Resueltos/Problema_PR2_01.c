/* Expresión.

El programa, al recibir como datos tres valores enteros, establece si los
➥mismos satisfacen una expresión determinada.

R, T y Q: variables de tipo entero.
RES: variable de tipo real. */

#include <stdio.h>
#include <math.h>

void main(void)
{
    float RES;
    int R = 10, T = 8, Q = 4;

    printf("Ingrese los valores de R, T y Q: ");
    //scanf("%d %d %d", &R, &T, &Q);

    RES = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2);

    if (RES < 820)
    {
        printf("\nR = %d\tT = %d\t Q = %d", R, T, Q);
    }
}