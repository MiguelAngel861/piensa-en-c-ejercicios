#include <stdio.h>

int main(void)
{
        int N1;

        printf("Ingrese el primer numero: ");
        scanf("%d", &N1);

        for (int i = 1; i <= N1; i++) {
                for (int j = 1; j <= i; j++) {
                        printf("%d ", j);
                }

                putchar('\n');
        }

        for (int i = 1; i <= N1 - 1; i++) {
                for (int j = 1; j <= N1 - i; j++) {
                        printf("%d ", j );
                }

                putchar('\n');
        }

        return 0;
}