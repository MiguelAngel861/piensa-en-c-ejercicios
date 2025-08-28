/*
 * Búsqueda secuencial en arreglos desordenados.
 * La búsqueda secuencial en arreglos desordenados consiste en revisar elemento por elemento, 
 * de izquierda a derecha, hasta encontrar el dato buscado o bien hasta llegar al final del arreglo,
 * lo que ocurra primero. Cuando el procedimiento concluye con éxito, se proporciona la posición
 * en la cual fue encontrado el elemento. En caso contrario, se regresa a 0 para indicar que el 
 * elemento no fue localizado.
 * 
 * Datos: VEC[N], ELE
 * 
 * Donde: VEC es un arreglo unidimensional de tipo entero de N elementos, 1 ≤ N ≤ 100,
 * y ELE una variable de tipo entero que representa el elemento a buscar.
 */

#include <stdio.h>

/* Búsqueda secuencial en arreglos desordenados. */
const int MAX = 100;

/* Prototipos de funciones. */
void lectura(int *, int);
int busca(int *, int, int);

int main(void)
{
        int res, ele, tam, vec[MAX];

        do {
                printf("Ingrese el tamaño del arreglo: ");
                scanf("%d", &tam);

        } while (tam > MAX || tam < 1); /* Se verifica que el tamaño del arreglo sea correcto. */

        lectura(vec, tam);

        printf("\nIngrese el elemento a buscar: ");
        scanf("%d", &ele);

        res = busca(vec, tam, ele); /* Se llama a la función que busca en el arreglo. */

        /* Si res tiene un valor verdadero —diferente de 0—, se 
         * escribe la posición en la que se encontró el elemento. 
         */

        if (res)
                printf("\nEl elemento se encuentra en la posición %d", res);
        
        else
                printf("\nEl elemento no se encuentra en el arreglo");
}

void lectura(int a[], int t)
{
        /* La función lectura se utiliza para leer un arreglo unidimensional de t
         * elementos de tipo entero. 
         */

        int i;

        for (i = 0; i < t; i++) {
                printf("Ingrese el elemento %d: ", i + 1);
                scanf("%d", &a[i]);
        }
}

int busca(int a[], int t, int k)
{
        /* Esta función localiza en el arreglo un elemento determinado. Si el elemento
         * es encontrado, regresa la posición correspondiente. En caso contrario, regresa 0. 
         */

        int i = 0, ban = 0, res;

        while (i < t && !ban) {
                if (a[i] == k)
                        ban++;
                else
                        i++;
        }

        if (ban)
                res = i + 1; /* Se asigna i+1 dado que las posiciones en el arreglo comienzan desde cero. */
        else
                res = ban;

        return res;
}