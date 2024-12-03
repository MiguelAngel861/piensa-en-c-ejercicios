/* Construye un diagrama de flujo y el correspondiente programa en C que, al recibir
como dato el salario de un profesor de una universidad, calcule el incremento del
salario de acuerdo con el siguiente criterio y escriba el nuevo salario del profesor.

Salario < $18,000 ⇒ Incremento 12%.
$18,000 <= Salario <= $30,000 ⇒ Incremento 8%.
$30,000 < Salario =< $50,000 ⇒ Incremento 7%.
$50,000 < Salario ⇒ Incremento 6%.

Dato: SAL (variable de tipo real que representa el salario del profesor). */

#include <stdio.h>

int main(void)
{
    float SAL;

    printf("Ingrese el salario del Maestro: ");
    scanf("%f", &SAL);

    if (SAL >= 1 && SAL < 18000)
    {
        SAL *= 1.12;
        printf("%.2f", SAL);
    }
    else if (SAL >= 18000 && SAL < 30000)
    {
        SAL *= 1.08;
        printf("%.2f", SAL);
    }
    else if (SAL >= 30000 && SAL < 50000)
    {
        SAL *= 1.07;
        printf("%.2f", SAL);
    }
    else if (SAL >= 50000)
    {
        SAL *= 1.06;
        printf("%.2f", SAL);
    }
    else
    {
        printf("Ingrese un salario valido");
    }
}