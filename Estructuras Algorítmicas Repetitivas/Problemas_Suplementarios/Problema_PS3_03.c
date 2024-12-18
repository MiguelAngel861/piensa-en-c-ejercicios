#include <stdio.h>

int main(void) {

        int NUM;
        double resultado = 1.0;

        printf("Ingrese el número de términos: ");
        scanf("%d", &NUM);

        for (int i = 1; i <= NUM; i++) {
                if (i % 2 == 0) {
                        resultado *= (1.0 / i); // Multiplicar en términos pares
                } else {
                        resultado /= (1.0 / i); // Dividir en términos impares
                }
        }

        printf("El resultado de la serie es: %lf\n", resultado);

        return 0;
}
