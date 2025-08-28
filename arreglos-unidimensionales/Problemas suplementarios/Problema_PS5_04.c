/*
 * Escribe un programa que inserte y elimine elementos en un arreglo unidimensional 
 * de tipo entero que se encuentre desordenado. Considera que no se pueden insertar
 * elementos repetidos.
 * 
 * Datos: VEC[N], ELE
 * 
 * Donde: VEC es un arreglo unidimensional de tipo entero de N elementos, 1 ≤ N ≤ 100,
 * y ELE una variable de tipo entero que expresa el número que se va a insertar o eliminar.
 */

#include <stdio.h>
#include <stdbool.h>

int const MAX = 100;

bool verificar_elemento(int VEC[], int N, int ELE);

int main(void)
{
        int VEC[MAX], N = 0, ELE;
        int opcion_a_elegir;

        do {
                printf("-- Menu --\n");
                printf("1. Insertar un elemento en el arreglo.\n");
                printf("2. Eliminar un elemento del arreglo.\n");
                printf("3. Mostrar el arreglo.\n");
                printf("4. Salir.\n");

                printf("Elige una opción: ");
                scanf("%d", &opcion_a_elegir);

                switch (opcion_a_elegir)
                {
                        case 1:
                                printf("Ingresa el número a insertar: ");
                                scanf("%d", &ELE);

                                if (N >= MAX) {
                                        printf("El arreglo esta lleno.\n");
                                        break;
                                }

                                if (verificar_elemento(VEC, N, ELE) == true) {
                                        printf("El numero %d ya se encuentra en el arreglo.\n", ELE);

                                } else {
                                        VEC[N] = ELE;
                                        N++;
                                }

                                break;
                        
                        case 2:
                                if (N == 0) {
                                        printf("El arreglo esta vacio.\n");
                                        
                                        break;
                                }

                                printf("Ingresa el numero a eliminar: ");
                                scanf("%d", &ELE);

                                for (int i = 0; i < N; i++) {
                                        if (VEC[i] == ELE) {
                                                for (int j = i; j < N - 1; j++) {
                                                        VEC[j] = VEC[j + 1];
                                                        }
                                                
                                                N--;
                                                
                                                printf("Elemento %d eliminado con éxito.\n", ELE);
                                                
                                                break;

                                        }
                                }

                                if (verificar_elemento(VEC, N, ELE) == false)
                                        printf("El número %d no se encuentra en el arreglo.\n", ELE);
                                
                                break;
                        case 3:
                                if (N == 0) {
                                        printf("El arreglo esta vacio.\n");
                                        
                                        break;
                                }
                                
                                printf("El arreglo es: ");

                                for (int i = 0; i < N; i++) {
                                        printf("Elemento %d: %d\n", i + 1, VEC[i]);
                                }

                                break;

                        case 4:
                                printf("Saliendo del programa...\n");
                                
                                break;
                        
                        default:
                                printf("Opción no válida.\n");
                }
        } while (opcion_a_elegir != 4);

        return 0;
}

bool verificar_elemento(int VEC[], int N, int ELE) 
{
        for (int i = 0; i < N; i++) {
                if (VEC[i] == ELE)
                        return true;
        }

        return false;
}