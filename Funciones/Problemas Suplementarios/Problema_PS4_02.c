/*
 * Escribe un programa en C que lea un número entero NUM
 * y calcule el resultado de la siguiente serie:
 * 
 *     1 * (1 / 2) / (1 / 3) * (1 / 4) / ... (*, /) (1 / N)
 * 
 * Datos: NUM (variable de tipo entero que representa el número de términos de la serie).
 */

#include <stdio.h>

// Prototipo de función
float calcularSerie(int numeroDeTerminos);

int main(void)
{
    int NUM;
    double resultado;

    // Solicitar al usuario el número de términos de la serie
    printf("Ingrese el número de términos: ");
    scanf("%d", &NUM);

    resultado = calcularSerie(NUM);

    printf("El resultado de la serie es: %lf\n", resultado);

    return 0;
}

// Función para calcular el resultado de la serie
float calcularSerie(int numeroDeTerminos)
{
    float resultado = 1.0;

    for (int i = 1; i <= numeroDeTerminos; i++) {
        if (i % 2 == 0) {
            resultado *= (1.0 / i);

        } else {
            resultado /= (1.0 / i);
        }
    }

    return resultado;
}
