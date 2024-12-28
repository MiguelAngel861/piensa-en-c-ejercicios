#include <stdio.h>
#include <math.h>

int main(void)
{
    int Y, N;
    long Fx = 0;

    printf("Ingrese cuantos valores tendra Y: ");
    scanf("%i", &N);


    for (size_t i = 0; i < N; i++)
    {
        printf("Ingrese el valor de Y: ");
        scanf("%i", &Y);

        if (Y > 0 && Y <= 15)
        {
            Fx = pow(Y, 2) + 15;
        }
        else if (Y > 15 && Y <= 30)
        {
            Fx = pow(Y, 3) - pow(Y, 2) + 12;
        }
        else if (Y > 30 && Y <= 60)
        {
            Fx = (4 * pow(Y, 3)) / (pow(Y, 2) + 8);
        }
        else
        {
            Fx = 0;
        }
        printf("%ld\n", Fx);
    }
}