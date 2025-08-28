#include <stdio.h>

int main(void) 
{
        int N1, N2;
        int aux, resultado;

        printf("Ingrese el primer numero: ");
        scanf("%d", &N1);

        printf("Ingrese el segundo numero: ");
        scanf("%d", &N2);

        if (N1 <= 0 || N2 <= 0) {
                puts("Solo se permiten numero naturales");

                return 1;
        }

        if (N1 < N2) {
                aux = N1;
                N1 = N2;
                N2 = aux;
        }
        
        while (N2 != 0) {
                resultado = N1 % N2;

                N1 = N2;
                N2 = resultado;
        }

        printf("El MCD es: %d\n", N1);
        return 0;
}