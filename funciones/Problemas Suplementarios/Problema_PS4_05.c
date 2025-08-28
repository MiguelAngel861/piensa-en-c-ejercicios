/*
 * Escribe un programa en C que, al recibir como dato un número 
 * entero N, obtenga el resultado de la siguiente serie:
 * 
 *              1^1 - 2^2 + 3^3 - ... +- N^N
 * 
 * Dato: N (variable de tipo entero que representa el número de términos de la erie).
 */

#include <stdio.h>
#include <math.h>

// Prototipo de función
float calcularSerie(int numeroDeTerminos);

int main(void)
{
        int NUM;
        float resultado;

        do {
                printf("Ingrese el número de términos: ");
                scanf("%d", &NUM);

        } while (NUM <= 0);

        resultado = calcularSerie(NUM);

        printf("El resultado de la serie es: %.2f\n", resultado);

        return 0;
}

float calcularSerie(int numeroDeTerminos)
{
        float resultado = 0;

        for (int i = 1; i <= numeroDeTerminos; i++) {
                 if (i % 2 == 0) {
                        resultado -= pow(i, i);

                } else {
                        resultado += pow(i, i);
                }
        }

        return resultado;
}