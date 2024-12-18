/*
 * Un individuo invierte en un banco un capital específico y quiere
 * saber cuánto obtendrá al cabo de cierto tiempo, si el dinero se
 * coloca a una determinada tasa de interés mensual. Escribe el 
 * programa correspondiente.
 * 
 * Datos: MES, CAP, TAS
 * 
 * Donde: MES es una variable de tipo entero que se utiliza para indicar el número de meses al que se colocará la inversión.
 *        CAP es una variable de tipo real que representa el monto inicial.
 *        TAS es una variable de tipo real que indica la tasa de interés mensual. 
 */

#include <stdio.h>

int main(void)
{
        int MES;
        float CAP, TAS;
        double inversion_final;

        printf("Ingrese el tiempo de inversion: ");
        scanf("%d", MES);

        printf("\nIngrese el capital inicial: ");
        scanf("%f", CAP);

        printf("\nIngrese la tasa de interes mensual: ");
        scanf("%f", TAS);

        inversion_final = ;
        printf("\nLas ganancias finales del sujeto son de: C$%lf", inversion_final);

        return 0;
}