#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int Y;
    float Fx;

    printf("Ingrese un numero para determinar el valor de Y: ");
    scanf("%i", &Y);

    if (fmod(Y, 4) == 0)
    {
        Fx = pow(Y, 3);
        printf("%.2f", Fx);
    }
    else if (fmod(Y, 4) == 1)
    {
        Fx = (pow(Y, 2) - 14) / pow(Y, 3);
        printf("%.2f", Fx);
    }
    else if (fmod(Y, 4) == 2)
    {
        Fx = pow(Y, 3) - 5;
        printf("%.2f", Fx);
    }
    else if (fmod(Y, 4) == 3)
    {
        Fx = sqrt(Y);
        printf("%.2f", Fx);
    }
}