#include <stdio.h>

int main(void)
{
        int N, NUM;

        printf("Ingresa la cantidad de numeros que ingresara: ");
        scanf("%i", &N);

        for (int i = 1; i <= N; i++) {
                printf("Ingrese un numero: ");
                scanf("%d", &NUM);

                if (NUM > 0)
                        printf("%d es un numero positivo\n", NUM);

                else if (NUM < 0)
                        printf("%d es un numero negativo\n", NUM);

                else
                        printf("%d es un valor nulo\n", NUM);
        }

        return 0;
}