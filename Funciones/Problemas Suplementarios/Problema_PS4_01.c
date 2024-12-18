/*
 * Escribe un programa que, al dar como datos N números enteros (1 ≤ N ≤ 500),
 * obtenga el promedio de los números pares e impares. 
 * 
 * Datos: N, NUM
 * 
 * Donde: N es una variable de tipo entero que representa el número de datos
 *        NUM es una variable de tipo entero que representa el número que se ingresa. 
 */

#include <stdio.h>

// Prototipos de funciones
int calcular_promedio(int suma, int conteo, char *tipo);

int main (void)
{
        int N, NUM;
        int prom_num_pares, prom_num_impares;
        int suma_num_pares = 0, suma_num_impares = 0;
        int conteo_num_pares = 0, conteo_num_impares = 0;

        do {
                printf("Ingrese un numero: ");
                scanf("%d", &N);

                if (N <= 0 || N > 500)
                        puts("Solo se permiten numeros del 1 al 500");
                
        } while (N <= 0 || N > 500);

        for (int i = 1; i <= N; i++) {
                printf("Ingrese el numero %d: ", i);
                scanf("%d", &NUM);

                if (NUM % 2 == 0) {
                        suma_num_pares += NUM;
                        conteo_num_pares++;

                } else {
                        suma_num_impares += NUM;
                        conteo_num_impares++;
                }
        }
        
        prom_num_pares = calcular_promedio(suma_num_pares, conteo_num_pares, "pares");
        prom_num_impares = calcular_promedio(suma_num_impares, conteo_num_impares, "impares");

        printf("\nEl promedio de numeros pares es: %d\n", prom_num_pares);
        printf("El promedio de numeros impares es: %d\n", prom_num_impares);

        return 0;
}

int calcular_promedio(int suma, int conteo, char *tipo)
{
        if (conteo == 0) {
                printf("\nNo se ingresaron numeros %s\n", tipo);

                return 0;
        }

        return (suma / conteo);
}