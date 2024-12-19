/*
 * Examina cuidadosamente el siguiente segmento de programa y 
 * determina cuáles de las siguientes llamadas a las funciones
 * son correctas si 'x', 'y' y 'z' son variables de tipo entero.
 * 
 * 1. trueque(suma (&x), &x);
 * 2. trueque(3, 4);
 * 3. suma(10);
 * 4. y = suma(10);
 * 5. z = trueque(&x, &y);
 * 6. trueque(&x, &y);
 */

#include <stdio.h>
void trueque(int *x, int *y)
{
int tem;
tem = *x;
*x = *y;
*y = tem;
}
int suma(int x)
{
return (x + x);
}