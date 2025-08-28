#include <stdio.h>

/* 
 * Prueba de variables globales, locales y estáticas.
 * 
 * El programa utiliza funciones en las que se usan 
 * diferentes tipos de variables. 
 */

/* Prototipos de funciones. */
int f1(void);
int f2(void);
int f3(void); 
int f4(void);

/* Variable global. */
int K = 3;

void main(void)
{
        int I;

        for (I = 1; I <= 3; I++) {
                printf("\nEl resultado de la función f1 es: %d", f1());
                printf("\nEl resultado de la función f2 es: %d", f2());
                printf("\nEl resultado de la función f3 es: %d", f3());
                printf("\nEl resultado de la función f4 es: %d", f4());
        }
}

/* La función f1 utiliza la variable global. */
int f1(void)
{
        K += K; 

        return (K);
}

/* La función f2 utiliza la variable local. */
int f2(void)
{
        int K = 1;

        K++; 

        return (K);
}

/* La función f3 utiliza la variable estática. */
int f3(void)
{
        static int K = 8;

        K += 2; 

        return (K);
}

/* La función f4 utiliza dos variables con el mismo nombre: local y global. */
int f4(void)
{
        int K = 5;

        K = K + ::K; /* Uso de la variable local (K) y global (::K) */
        
        return (K);
}