/* 
 *                Máximo común divisor.
 * El programa, al recibir como datos dos números enteros, 
 * calcula el máximo común divisor de dichos números. 
 */

#include <stdio.h>

int mcd(int, int);

int main(void)
{
        int NU1, NU2, RES;

        printf("\nIngresa los dos números enteros: ");
        scanf("%d %d", &NU1, &NU2);

        RES = mcd (NU1, NU2);

        printf("\nEl máximo común divisor de %d y %d es: %d\n", NU1, NU2, RES);
}

/* Esta función calcula el máximo común divisor de los números N1 y N2. */
int mcd(int N1, int N2)
{
        int I;

        /* I se inicializa con el máximo valor posible que puede ser divisor de N1 y N2. */
        if (N1 < N2)
                I = N1 / 2;

        else
                I = N2 / 2;
        
        /* 
         * El ciclo se mantiene activo mientras (N1 % I) o (N2 % I) sean
         * distintos de cero. Cuando el resultado de la evaluación sea 0, el`
         * ciclo se detiene ya que se habrá encontrado el máximo común divisor.
         */
        
        while ((N1 % I) || (N2 % I)) {
                I--;
        }

        return I;
}