#include <stdio.h>

int main(void)
{
        int N1;

        //Validación de entrada: solicita un número entero positivo
        do {
                printf("Ingrese un numero entero positivo: ");
                scanf("%d", &N1);

                if (N1 <= 0)
                        printf("Por favor, ingrese un numero mayor que cero.\n");

        } while (N1 <= 0);

        for (int i = 0; i <= N1; i++ ) {
                for (int j = 1; j <= N1 - i; j++) {
                        printf("%d ", j);
                }

                for (int j = 0; j <= i; j++) {
                        printf("  ");
                }
                for (int j = 0; j < i; j++) {
                        printf("  ");
                }

                for (int k = N1 - i ; k >= 1; k--) {
                        printf(" %d", k);
                }
        
                putchar('\n');
        }
}