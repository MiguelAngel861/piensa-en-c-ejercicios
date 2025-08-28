n la fábrica de lácteos TREGAR, localizada en Gobernador Crespo, Santa Fe,
Argentina, se proporcionan las ventas mensuales de sus 15 principales productos
de la siguiente manera:
1, 5, 150
1, 5, 50
1, 8, 100
1, 8, 30
2, 5, 50
. . .
-1, -1, -1
Observa que el primer valor de la transacción corresponde al mes, el segundo al pro-
ducto y el tercero a la cantidad vendida del mismo. La primera transacción indica
que en el mes 1 se vendieron 150 unidades del producto 5. Observa que en un mis-
mo mes se pueden tener diferentes ventas de un mismo producto (transacción 2).
Se conocen además los precios de venta de cada uno de los productos. Escribe
un programa en C que calcule lo siguiente:
a) El monto de venta anual de cada uno de los productos.
b) El monto total de ventas de la fábrica de lácteos.
c) El tipo de producto que más se ha vendido y el monto de las ventas.
Datos: MES 1
, PRO1
, CAN1
MES 2
, PRO2
, CAN2
. . .
-1, -1, -1
COS1
, COS2
, ..., COS15
Donde: MES i es una variable de tipo entero que hace referencia al mes de
producción de la transacción i, 1 ≤ MES ≤ 12.
PRO ii es una variable de tipo entero que indica el tipo de producto,
1 ≤ PRO ≤ 15.
CAN i es una variable de tipo entero que representa las ventas del producto
PRO en la transacción i.
COS i es una variable de tipo real que representa el costo de producto
i, 1 ≤ i ≤ 15.

#include <stdio.h>
/* Fábrica de lácteos.
El programa, al recibir como datos las ventas mensuales de diferentes
➥productos, obtiene información estadística valiosa para la empresa. */
void Lectura1(int [15][12]);
void Lectura2(float, int);
void Funcion1(int [][12], int, int, float *, float *); /* Prototipos de
➥funciones. */
void Funcion2(float *, int);
void Funcion3(float *, int);
void main(void)
{
int FAB[15][12] = {0}; /* Inicialización en 0 del arreglo FAB. */
float COS[15], VEN[15];
Lectura1(FAB);
Lectura2(COS, 15);
Funcion1(FAB, 15, 12, COS, VEN);
Funcion2(VEN, 15);
Funcion3(VEN, 15);
}
void Lectura1(int A[][12])
/* Esta función se utiliza para almacenar en el arreglo bidimensional las
➥diferentes transacciones que representan las ventas de los diferentes
➥productos. El fin de datos está dado por –1. */
{
int MES, PRO, CAN;
printf(”\nIngrese mes, tipo de producto y cantidad vendida: ”);
scanf(”%d %d %d”, &MES, &PRO, &CAN);
while (MES!= -1 && PRO!= -1 && CAN!=-1)
{
A[MES-1][PRO-1] += CAN;
printf(”Ingrese mes, tipo de producto y cantidad vendida: ”);
scanf(”%d %d %d”, &MES, &PRO, &CAN);
}
}
void Lectura2(float A[], int N)
/* Esta función se utiliza para leer los precios de venta de los diferentes
➥productos. */
{
int I;
for (I=0; I<N; I++)
{
printf(”Ingrese costo del producto %d: ”, I+1);
scanf(”%f”, &A[I]);
}
}
void Funcion1(int A[][12], int F, int C, float V1[], float V2[])
/* Esta función se utiliza para calcular el monto de venta anual de cada uno
➥de los productos. Observa que el resultado se almacena en un arreglo
➥unidimensional que se utilizará posteriormente. */
{
int I, J, SUM;
printf(”\n”);
for (I=0; I< F; I++)
{
SUM = 0;
for (J=0; J<C; J++)
SUM += A[I][J];
V2[I] = V1[I] * SUM;
printf(”\nTotal de ventas del producto %d: %8.2f”, I+1, V2[I]);
}
}
void Funcion2(float A[], int C)
/* Esta función se utiliza para calcular el monto total de ventas de la fábrica. */
{
        int I;
float SUM = 0.0;
for (I=0; I<C; I++)
SUM += A[I];
printf(”\n\nTotal de ventas de la fábrica: %.2f”, SUM);
}
void Funcion3(float A[], int C)
/* Esta función se utiliza para obtener el tipo de producto que más se ha vendido
➥y el monto de las ventas de dicho producto. */
{
int I, TPR = 0;
float VEN = A[0];
for (I=1; I<C; I++)
if (VEN < A[I])
{
TPR = I;
VEN = A[I];
}
printf(”\n\nTipo de Producto más vendido: %d \t Ventas: %.2f”, TPR + 1, VEN);
}