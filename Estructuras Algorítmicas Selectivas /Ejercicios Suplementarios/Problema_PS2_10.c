#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float SAL;
    int CAT, PHE;

    printf("Ingrese su salario: ");
    scanf("%f", &SAL);

    printf("Ingrese la cantidad de horas extra que ha realizado: ");
    scanf("%i", &PHE);

    if (PHE > 30)
    {
        PHE = 30;
    }

    printf("Ingrese su categoria de trabajador: ");
    scanf("%i", &CAT);

    switch (CAT)
    {
    case 1:
        printf("Su salario pago de: %.2f", SAL + (PHE * 40));
        break;

    case 2:
        printf("Su pago sera de: %.2f", SAL + (PHE * 50));
        break;
    break;

    case 3:
        printf("Su pago sera de: %.2f", SAL + (PHE * 85));
        break;
    break;
    
    default:
        printf("No tiene derecho a pago por horas extras. Su pago sera: %.2f\n", SAL);
    break;
    }
}