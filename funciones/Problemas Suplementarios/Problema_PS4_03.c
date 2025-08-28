/*
 * Construye un diagrama de flujo y un programa en C que, al recibir como 
 * dato un número entero N, calcule el factorial de dicho número. 
 * 
 * Dato: NUM (variable de tipo entero que representa el número que se ingresa).
 */

#include <stdio.h>

int calculo_factorial(int numero);

int main(void)
{
        int NUM;
        double resultado;

        printf("Ingrese el número de términos: ");
        scanf("%d", &NUM);

        resultado = calculo_factorial(NUM);

        printf("El resultado de la ecuacion factorial es: %lf\n", resultado);
}

int calculo_factorial(int numero)
{
        int factorial = 1;

        if (numero == 1 || numero == 0)
                return 1;

        for (int i = 1; i <= numero; i++) {
                factorial *= i;
        }
        
        return factorial;
}
