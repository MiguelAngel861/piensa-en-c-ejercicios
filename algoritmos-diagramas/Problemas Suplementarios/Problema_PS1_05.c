#include <stdio.h>
#include <math.h>

#define Pi 3.1416
int main(void)
{
    float RAD;
    printf("Ingrese el area del circulo: ");
    scanf("%f", &RAD);

    printf("El area del circulo es: %2.3f\n", Pi * pow(RAD, 2));
    printf("La circunferencia del circulo es: %2.3f\n", 2 * Pi * RAD);
}