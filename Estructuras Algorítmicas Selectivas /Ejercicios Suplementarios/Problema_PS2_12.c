#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int NUM;

    printf("Ingrese un numero de cuatro digitos: ");
    scanf("%i", &NUM);

    if (NUM > 999 && NUM < 10000)
    {
        if ((NUM % 10) % 2 == 0)
        {
            printf("%i es un numero par\n", NUM % 10);

            NUM /= 10;

            if((NUM % 10) % 2 == 0)
            {
                printf("%i es un numero par\n", NUM % 10);

                NUM /= 10;

                if((NUM % 10) % 2 == 0)
                {
                    printf("%i es un numero par\n", NUM % 10);

                    NUM /= 10;

                    if((NUM % 10) % 2 == 0)
                    {
                        printf("%i es un numero par\n\n", NUM % 10);

                        NUM /= 10;
                    }
                    else
                    {
                        printf("%i NO es un numero par\n\n", NUM % 10);
                    }
                }
                else
                {
                    printf("%i NO es un numero par\n\n", NUM % 10);
                }
            }
            else
            {
                printf("%i NO es un numero par\n\n", NUM % 10);
            }
        }
        else
        {
            printf("%i NO es un numero par\n\n", NUM % 10);
        }
    }
    else
    {
        printf("Ingrese un numero valido\n\n");
    }
}