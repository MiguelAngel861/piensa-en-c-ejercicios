/* Suma-cuadrados.
El programa calcula la suma del cuadrado de los elementos de un arreglo
➥unidimensional de 100 elementos de tipo real. */

#include <stdio.h>
#include <math.h>

const int MAX = 5; /* MAX se utiliza para reservar el espacio máximo que podrá ocupar el arreglo. */

/* Prototipos de funciones. */
void Lectura(float A[], int T);
double Suma(float A[], int T);

void main(void)
{
        float VEC[MAX];
        double RES;

        Lectura(VEC, MAX);
        
        RES = Suma(VEC, MAX);/* Se llama a la función Suma y se almacena el resultado en la variable RES. */ 
        
        printf("\n\nSuma del arreglo: %.2lf", RES);

        return 0;
}

/* La función Lectura se utiliza para leer un arreglo unidimensional de T elementos de tipo real. */
void Lectura(float A[], int T)
{
        int I;
        
        for (I = 0 ; I < T; I++) {
                printf("Ingrese el elemento %d: ", I+1);
                scanf("%f", &A[I]);
        }
}

/* La función Suma se utiliza para calcular la suma del cuadrado de los componentes de un arreglo unidimensional de T elementos de tipo real. */
double Suma(float A[], int T)
{
        int I;
        double AUX = 0.0;
        
        for (I = 0; I < T; I++) {
                AUX += pow(A[I], 2);
        }

        return(AUX);
}