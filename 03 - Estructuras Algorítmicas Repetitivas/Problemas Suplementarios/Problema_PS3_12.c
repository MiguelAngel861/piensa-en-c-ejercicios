#include <stdio.h>

int main(void)
{
        int NUM;
        int cout = 0;

        printf("Ingrese un numero: ");
        scanf("%i", &NUM);
        putchar(' ');

        while (NUM != 1) {
                for (int i = 1; i <= NUM; i++) {
                        if (NUM % i == 0)
                                cout++;
                }

                if (cout == 2)
                        printf("%i\n", NUM);

                NUM--;
                cout = 0;
        }
}