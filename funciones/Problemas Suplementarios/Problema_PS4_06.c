/*
 * Escribe un programa en C que, al recibir como dato una X 
 * cualquiera, calcule el cos(x) utilizando la siguiente serie:
 * 
 *              cos(x) = 1 - (x^2 / 2!) + (x^4 / 4!) + (x^6 / 6!) + ...
 *
 * La diferencia entre la serie y un nuevo término debe ser menor o igual a 0.001.
 * Imprima el número de términos requerido para obtener esta precisión.
 * 
 * Dato: X (variable de tipo entero que representa el número que se ingresa).
 */

#include <stdio.h>
#include <math.h>

// Prototipos de Funciones
int calculo_factorial(int numero);
double calculo_coseno(double valor_x, double precision, int *num_terminos);

int main(void)
{
    double valor_x, valor_coseno;
    int num_terminos = 0;

    // Solicitar al usuario el valor de X
    printf("Ingrese el valor de 'x': ");
    scanf("%lf", &valor_x);

    // Calcular el coseno utilizando la serie de Taylor
    valor_coseno = calculo_coseno(valor_x, 0.001, &num_terminos);

    // Imprimir el resultado y el número de términos
    printf("\nEl valor aproximado de cos(%.5f) con una precisión de 0.001 es: %.10f\n", valor_x, valor_coseno);
    printf("Número de términos utilizados: %d\n", num_terminos);

    return 0;
}

double calculo_coseno(double valor_x, double precision, int *num_terminos)
{
    double term = 1.0; // Primer término de la serie
    double coseno = term; // Inicializar el coseno con el primer término
    int n = 1;
    *num_terminos = 1;

    while (fabs(term) > precision) {
        term *= -valor_x * valor_x / (2 * n * (2 * n - 1)); // Calcular el siguiente término
        coseno += term; // Sumar el término al coseno
        n++;
        (*num_terminos)++;
    }

    return coseno;
}

int calculo_factorial(int numero)
{
    int factorial = 1;

    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }

    return factorial;
}
