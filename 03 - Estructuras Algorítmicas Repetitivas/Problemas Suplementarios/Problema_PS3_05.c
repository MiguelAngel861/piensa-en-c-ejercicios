#include <stdio.h>

int main(void)
{
        int N;
        int PROD = 1;

        printf("Ingresa la cantidad de numeros que ingresara: ");
        scanf("%i", &N);

        for (int i = 1; i <= N; i++) {
                PROD *= i;
        }

        printf("%d", PROD);
}