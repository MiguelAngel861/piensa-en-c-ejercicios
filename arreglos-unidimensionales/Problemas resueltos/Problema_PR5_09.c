#include <stdio.h>
#include <math.h>

/* Constante para el tamaño máximo del arreglo. */
const int MAX = 100;

/* Prototipos de funciones. */
void lectura(int *a, int t);
float media(int *a, int t);
float varianza(int *a, int t, float m);
float desviacion(float v);
void frecuencia(int *a, int p, int *b);
int moda(int *a, int t);

void main(void)
{
        int tam, mod, alu[MAX], fre[11] = {0};
        float med, var, des;

        do {
                printf("Ingrese el tamaño del arreglo: ");
                scanf("%d", &tam);
        } while (tam > MAX || tam < 1);
        /* Se verifica que el tamaño del arreglo sea correcto. */

        lectura(alu, tam);
        med = media(alu, tam);
        var = varianza(alu, tam, med);
        des = desviacion(var);
        frecuencia(alu, tam, fre);
        mod = moda(fre, 11);

        printf("\nMedia: %.2f", med);
        printf("\nVarianza: %.2f", var);
        printf("\nDesviación: %.2f", des);
        printf("\nModa: %d", mod);
}

void lectura(int *a, int t)
{
        /* La función lectura se utiliza para leer un arreglo unidimensional de t
         * elementos de tipo entero. */
        int i;

        for (i = 0; i < t; i++) {
                printf("Ingrese el elemento %d: ", i + 1);
                scanf("%d", &a[i]);
        }
}

float media(int *a, int t)
{
        /* Esta función se utiliza para calcular la media. */
        int i;
        float sum = 0.0;

        for (i = 0; i < t; i++)
                sum += a[i];

        return sum / t;
}

float varianza(int *a, int t, float m)
{
        /* Esta función se utiliza para calcular la varianza. */
        int i;
        float sum = 0.0;

        for (i = 0; i < t; i++)
                sum += pow((a[i] - m), 2);

        return sum / t;
}

float desviacion(float v)
{
        /* Esta función se utiliza para calcular la desviación estándar. */
        return sqrt(v);
}

void frecuencia(int *a, int p, int *b)
{
        /* Esta función se utiliza para calcular la frecuencia de calificaciones. */
        int i;

        for (i = 0; i < p; i++)
                b[a[i]]++;
}

int moda(int *a, int t)
{
        /* Esta función se utiliza para calcular la moda. */
        int i, mod = 0, val = a[0];

        for (i = 1; i < t; i++) {
                if (val < a[i]) {
                        mod = i;
                        val = a[i];
                }
        }

        return mod;
}