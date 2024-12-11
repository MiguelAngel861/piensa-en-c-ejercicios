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

        //Impresión del patrón numérico
        for (int i = 1; i <= N1; i++) {

                //Imprime números ascendentes
                for (int j = 1; j <= i; j++) {
                        printf("%d ", j);
                }

                //Imprime números ascendentes
                for (int k = i - 1 ; k >= 1; k--) {
                        printf("%d ", k);

                }

                putchar('\n');
        }

        return 0;
}