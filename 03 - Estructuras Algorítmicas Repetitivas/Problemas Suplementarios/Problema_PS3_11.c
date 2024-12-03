#include <stdio.h>

int main(void)
{
        int N;
        float VIN, Prod_VIN = 0;
        float VIN_TIPO1 = 0, VIN_TIPO2, VIN_TIPO3, VIN_TIPO4;
        
        printf("Ingrese el tiempo de produccion: ");
        scanf("%i", &N);

        for (int i = 1; i <= N; i++) {
                Prod_VIN = 0;

                printf("\nyear number %i.\n", i);

                for (size_t j = 1; j <= 4; j++) {
                        printf("Ingrese la cantidad de litros producidos del vino numero %llu: ", j);
                        scanf("%f", &VIN);

                        if (j == 1) {
                                VIN_TIPO1 += VIN;
                        } else if (j == 2) {
                                VIN_TIPO2 += VIN;
                        } else if (j == 3) {
                                VIN_TIPO3 += VIN;
                        } else {
                                VIN_TIPO4 += VIN;
                        }
                        Prod_VIN += VIN;
                }
                printf("\nEl total de la produccion anual fue de: %.2f litros\n", Prod_VIN);
        }
        printf("\nEl total del vino numero 1 producido en este tiempo fue de: %.2f\n", VIN_TIPO1);
        printf("El total del vino numero 2 producido en este tiempo fue de: %.2f\n", VIN_TIPO2);
        printf("El total del vino numero 3 producido en este tiempo fue de: %.2f\n", VIN_TIPO3);
        printf("El total del vino numero 4 producido en este tiempo fue de: %.2f\n", VIN_TIPO4);
}