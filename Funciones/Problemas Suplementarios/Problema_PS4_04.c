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

double calcular_inversion_final(int meses, float capital_inicial, float tasa_interes_mensual);

int main(void)
{
        int MES;
        float CAP, TAS;
        double inversion_final;

        printf("Ingrese el tiempo de inversión en meses: ");
        scanf("%d", &MES);

        printf("\nIngrese el capital inicial: ");
        scanf("%f", &CAP);

        printf("\nIngrese la tasa de interés mensual (en formato decimal, por ejemplo, 0.05 para 5%%): ");
        scanf("%f", &TAS);

        inversion_final = calcular_inversion_final(MES, CAP, TAS);

        printf("\nEl monto final de la inversión es: C$%.2lf\n", inversion_final);

        return 0;
}

double calcular_inversion_final(int meses, float capital_inicial, float tasa_interes_mensual)
{
        double resultado = capital_inicial;

        for (int i = 0; i < meses; i++) {
                resultado *= (1 + tasa_interes_mensual); 
        }

        return resultado;
}