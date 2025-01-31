/*
 * Escribe un programa que inserte y elimine elementos en un arreglo unidimensional
 * de tipo entero que se encuentre ordenado en forma creciente. Toma en cuenta
 * que no se pueden insertar elementos repetidos.
 * 
 * Datos: VEC[N], ELE
 * 
 * Donde: VEC es un arreglo unidimensional de tipo entero de N elementos, 1 ≤ N ≤
 * 100, y ELE una variable de tipo entero que representa el número que se va a
 * insertar o eliminar. 
 */

#include <stdio.h>
#include <stdbool.h>

#define MAX 100

bool verificar_elemento(int VEC[], int N, int ELE);

int main(void)
{
        int VEC[MAX], ELE;
        int menu_de_opcion = 0, N = 0, posicion;

        do
        {
                printf("\n-- Menu --\n");
                printf("1. Insertar un elemento en el arreglo.\n");
                printf("2. Eliminar un elemento del arreglo.\n");
                printf("3. Mostrar el arreglo.\n");
                printf("4. Salir.\n");

                printf("\nElige una opción: ");
                scanf("%d", &menu_de_opcion);

                switch (menu_de_opcion) {
                        case 1:
                                if (N >= MAX) {
                                        puts("El arreglo esta lleno.");
                                        
                                        break;
                                }

                                printf("Ingresa el numero a insertar: ");
                                scanf("%d", &ELE);

                                if (verificar_elemento(VEC, N, ELE) == true) {
                                        printf("El numero %d ya se encuentra en el arreglo. \n", ELE);

                                        break;
                                }
                                
                                posicion = N;

                                for (int i = 0; i < N; i++) {
                                        if (VEC[i] > ELE) {
                                                posicion = i;

                                                break;
                                        }
                                }

                                for (int j = N; j > posicion; j--) {
                                        VEC[j] = VEC[j - 1];
                                }
                                        
                                VEC[posicion] = ELE;
                                N++;
                                
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
                                                
                                                printf("Elemento %d eliminado con éxito.\n", ELE);

                                                N--;
                                                
                                                break;
                                        }
                                }

                                break;

                        case 3:
                                if (N == 0) {
                                        printf("El arreglo esta vacio.\n");
                                        
                                        break;
                                }

                                for (int i = 0; i < N; i++) {
                                        printf("Elemento %d: %d\n", i + 1, VEC[i]);
                                }

                                break;

                        case 4:
                                puts("Saliendo del programa...");

                                break; 
                        
                        default:
                                puts("Opción no válida.");

                }

        } while (menu_de_opcion != 4);

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