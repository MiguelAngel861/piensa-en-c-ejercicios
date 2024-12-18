/*
 * Escribe un programa en C que lea un número entero NUM
 * y calcule el resultado de la siguiente serie:
 * 
 *     1 * (1 / 2) / (1 / 3) * (1 / 4) / ... (*, /) (1 / N)
 * 
 * Datos: NUM (variable de tipo entero que representa el número de términos de la serie).
 */

#include <stdio.h>

float calculo_de_serie(int numero);

int main(void)
{
        int NUM;
        double res;

        printf("Ingrese el número de términos: ");
        scanf("%d", &NUM);

        res = calculo_de_serie(NUM);

        printf("El resultado de la serie es: %lf\n", res);

        return 0;
}

float calculo_de_serie(int numero)
{
        float resultado = 1.0;

        for (int i = 1; i <= numero; i++) {
                if (i % 2 == 0)
                                resultado *= (float) (1.0 / i); // Multiplicar en términos pares

                else
                                resultado /= (float) (1.0 / i); // Dividir en términos impares
        }

        return resultado;
}