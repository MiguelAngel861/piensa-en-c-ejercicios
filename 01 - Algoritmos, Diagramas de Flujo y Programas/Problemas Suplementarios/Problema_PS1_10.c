/* Escribe un programa en C que, al recibir como dato un número de cuatro dígitos,
genere una impresión como la que se muestra a continuación (el número 6352) */
#include <stdio.h>

int main(void)
{
    int Numero;

    printf("Ingrese un numero de 4 digitos: ");
    scanf("%i", &Numero);

    printf("%i\n", Numero / 1000);
    printf("%i\n", Numero / 100 % 10);
    printf("%i\n", Numero / 10 % 10);
    printf("%i\n", Numero % 10);
}