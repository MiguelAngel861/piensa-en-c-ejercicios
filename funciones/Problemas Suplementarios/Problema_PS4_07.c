/*
 * Se dice que un número N es primo si los únicos enteros positivos que lo 
 * dividen son exactamente 1 y N. Escribe un programa en C que, al recibir 
 * como dato un número entero positivo, determine si éste es un número primo. 
 * 
 * Dato: NUM (variable de tipo entero que representa el número entero positivo que e ingresa) 
 */

#include <stdio.h>

/* Prototipo de funcion */
void verificar_num_primo(int numero);

int main(void)
{
        int NUM;

        printf("Ingrese un numero: ");
        scanf("%d", &NUM);

        verificar_num_primo(NUM);

        return 0;
}

void verificar_num_primo(int NUM) 
{
        int contador = 0;
                for (int i = 1; i <= NUM; i++) {
                        if (NUM % i == 0)
                                contador++;
                }

                if (contador == 2) 
                        printf("El numero si es primo\n");

                else
                        printf("El numero no es primo\n");

}