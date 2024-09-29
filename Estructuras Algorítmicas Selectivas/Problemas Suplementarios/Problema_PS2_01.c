/* El número de sonidos emitidos por un grillo en un minuto es una función de la
temperatura. Es posible entonces determinar el nivel de la temperatura utilizando 
un grillo como termómetro. Construye un programa en C que calcule la temperatura 
con base en el númerovde sonidos emitidos por el grillo. */

#include <stdio.h>

int main(void)
{
    int S;
    float FA;

    printf("Cuantos sonidos emitio el grillo en un minuto?\n");
    scanf("%i", &S);

    FA = (float) (S / 4) + 40;

    if (S > 0)
    {
        printf("La temperatura es de %f grados Farenheit\n", FA);
    }
    else
    {
        printf("Ingrese una cantida valida.");
        return 1;
    }
    return 0;
}