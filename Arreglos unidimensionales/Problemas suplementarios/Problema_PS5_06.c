/*
 * En un arreglo unidimensional de tipo real se almacenan las calificaciones de un
 * grupo de N alumnos que presentaron un examen de admisión a una universidad.
 * Escribe un programa que calcule e imprima lo siguiente:
 * 
 * a) El promedio general del grupo.
 * b) El porcentaje de alumnos aprobados (todos aquellos alumnos cuyo puntaje supere los 1300 puntos).
 * c) El número de alumnos cuya calificación sea mayor o igual a 1500.
 * 
 * Dato: ALU[N] (arreglo unidimensional de tipo real de N elementos, 1 ≤ N ≤ 100).
 */

#include <stdio.h>

int const MAX = 100;

int main(void)
{
        int N, VEC[MAX];
        int contador_alumnos_destacados = 0, contador_alumnos_aprobados = 0;
        float porcentaje = 0, promedio_grupo = 0;

        puts("Cuentos alumnos se presentaron al examen de admision?");

        do {
                printf("Se presentaron: ");
                scanf("%d", &N);

        } while (N > 100 || N < 0);

        printf("Ingrese la notas de los siguientes %d alumnos:", N);

        for (size_t i = 0; i < N; i++) {
                printf("Alumno numero %d", i + 1);
                scanf("%d", VEC[i]);
        }

        for (size_t i = 0; i < N; i++) {                
                promedio_grupo += VEC[i];

                if (VEC[i] >= 1300) {
                        contador_alumnos_aprobados++;

                        if (VEC[i] >= 1500)
                                contador_alumnos_destacados++;
                }
                
        }

        promedio_grupo = (float) promedio_grupo / N;
        porcentaje = (float) (contador_alumnos_aprobados / N) * 100;

        printf("El promedio genereal del grupo es: %f", promedio_grupo);
        printf("%.2d es el %.2f%% de %.2d\n", contador_alumnos_aprobados, porcentaje, N);
        printf("El porcentaje de alumnos aprobados es: %.2f%%\n", porcentaje);

        return 0;
}