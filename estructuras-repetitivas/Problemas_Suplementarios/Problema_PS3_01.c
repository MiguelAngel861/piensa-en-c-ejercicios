#include <stdio.h>

int main(void)
{       
        int N;

        printf("Ingrese un numero: ");
        scanf("%i", &N);

        for (int i = 1; i <= N; i++) {
                printf("%d * %d = %d\n", i, N, i * N);
        }
}