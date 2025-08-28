#include <stdio.h>

/* Búsqueda secuencial en arreglos ordenados en forma creciente. */
const int MAX = 100;

void lectura(int *, int); /* Prototipos de funciones. */
int busca(int *, int, int);

void main(void)
{
        int res, ele, tam, vec[MAX];

        do {
                printf("Ingrese el tamaño del arreglo: ");
                scanf("%d", &tam);
        } while (tam > MAX || tam < 1);
        /* Se verifica que el tamaño del arreglo sea correcto. */

        lectura(vec, tam);

        printf("\nIngrese el elemento a buscar: ");
        scanf("%d", &ele);

        res = busca(vec, tam, ele); /* Se llama a la función que busca en el arreglo. */

        if (res)
                /* Si res tiene un valor verdadero —diferente de 0—, se escribe la
                 * posición en la que se encontró al elemento. */
                printf("\nEl elemento se encuentra en la posición: %d", res);
        else
                printf("\nEl elemento no se encuentra en el arreglo");
}

void lectura(int a[], int t)
{
        /* La función lectura se utiliza para leer un arreglo unidimensional de t
         * elementos de tipo entero. */
        int i;

        for (i = 0; i < t; i++) {
                printf("Ingrese el elemento %d: ", i + 1);
                scanf("%d", &a[i]);
        }
}

int busca(int a[], int t, int e)
{
        /* Esta función se utiliza para localizar el elemento e en el arreglo
         * unidimensional a.
         * Si se encuentra, la función regresa la posición correspondiente. En caso
         * contrario regresa 0. */
        int res, i = 0, ban = 0;

        while ((i < t) && (e >= a[i]) && !ban) {
                /* Observa que se incorpora una nueva condición. */
                if (a[i] == e)
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