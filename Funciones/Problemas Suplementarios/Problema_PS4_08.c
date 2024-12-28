/*
 * Se dice que un número es considerado perfecto si la suma de sus divisores excepto
 * el mismo, es igual al propio número. Escriba un programa que obtenga e imprima todos
 * los números perfectos comprendidos entre 1 y N. 
 * 
 * Dato: N (variable de tipo entero que representa el número entero positivo que se ingresa)
 */

#include <stdio.h>
/* Prototipo de funcion */
void calcular_num_perfecto(int num);

int main(void)
{
        int NUM;

        printf("Ingrese un numero: ");
        scanf("%d", &NUM);

        calcular_num_perfecto(NUM);

        return 0;
}

void calcular_num_perfecto(int num) 
{
        int aux_perfecto = 0;

        for (int i = 1; i < num; i++)
        {
                if (num % i == 0)
                        aux_perfecto += i;
        }

        if (num == aux_perfecto)
                printf("%d es un numero perfecto\n", num);
        
        else
                printf("%d no es un numero perfecto\n", num);
}
