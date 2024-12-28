#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
        int terminos;

        float valor_exponente, valor_seno, valor_x;
        float valor_factorial, valor_final_serie = 0;

        bool aux = true;

        printf("Ingresa el valor de 'x': ");
        scanf("%f", &valor_x);

        printf("Ingresa el numero de terminos de la serie: ");
        scanf("%d", &terminos);

        valor_seno = sin(valor_x);

        for (int i = 0; i < terminos; i++) {
                valor_exponente = 2 * i + 1;
                valor_factorial = 1.00;

                for (int j = 1; j <= valor_exponente; j++) {
                        valor_factorial *= j;
                }

                if (aux == true) {
                        valor_final_serie += pow(valor_x, valor_exponente) / valor_factorial;

                        aux = false;

                } else {
                        valor_final_serie -= pow(valor_x, valor_exponente) / valor_factorial;

                        aux = true;
                }
        }

        printf("El valor aproximado de sin(%.5f) con %d términos es: %.10f\n", valor_x, terminos, valor_final_serie);
        printf("El valor real de sin(%.5f) usando la función sin() de math.h es: %.10f\n", valor_x, valor_seno);

        return 0;
}
