/*
 * En un arreglo unidimensional de tipo real se tienen almacenadas las toneladas
 * mensuales de cereales cosechadas durante el año anterior en una estancia de la
 * pampa Argentina. Escribe un programa que calcule e imprima lo siguiente:
 * 
 * a) El promedio anual de toneladas cosechadas.
 * b) ¿Cuántos meses tuvieron una cosecha superior al promedio anual?
 * c) ¿En qué mes se produjo el mayor número de toneladas? ¿Cuántas fueron?
 * 
 * Dato: COS[12] (arreglo unidimensional de tipo real de 12 elementos).
 */

#include <stdio.h>

#define MAX 12

int main(void)
{       
        int mes_de_mayor_produccion,cantidad_meses_mayores_promedio_anual = 0;
        float mayor_produccion_registrada = 0, promedio_anual_cosechas = 0, COS[MAX] = {0};

        printf("Ingrese el numero de toneladas que se cosecharon alrededor del año: \n\n");

        for (size_t i = 0; i < MAX; i++) {
                printf("Toneladas cosechadas en el mes numero %ld: ", i + 1);
                scanf("%f", &COS[i]);

                promedio_anual_cosechas += COS[i];
        }

        promedio_anual_cosechas /= MAX;

        for (int i = 0; i < MAX; i++) {
                if (COS[i] > promedio_anual_cosechas)
                        cantidad_meses_mayores_promedio_anual++;
        }

        for (int i = 0; i < MAX; i++) {
                if (COS[i] > mayor_produccion_registrada) {
                        mayor_produccion_registrada = COS[i];
                        mes_de_mayor_produccion = i + 1;
                }
        }

        printf("\nEl promedio de produccion del año fue de %.2f toneladas\n", promedio_anual_cosechas);
        printf("Hubieron %i meses con una cosecha mayor al promedio\n", cantidad_meses_mayores_promedio_anual);
        printf("En el mes numero %i fue el mes con la mayor produccion del año (%.2f toneladas)\n", mes_de_mayor_produccion, mayor_produccion_registrada);

        return 0;
}