#include <stdio.h>
#include <math.h>

int main(void)
{
    float L1, L2, L3, ARE, s;
    printf("Ingrese el primer lado del triangulo: ");
    scanf("%f", &L1);

    printf("\nIngrese el segundo lado del triangulo: ");
    scanf("%f", &L2);

    printf("\nIngrese el tercer lado del triangulo: ");
    scanf("%f", &L3);


    if ((L1 + L2 > L3) && (L2 + L3 > L1) && (L1 + L3 > L2))
    {
        s = (L1 + L2 + L3) / 2;  // Semi-perímetro
        ARE = sqrt(s * (s - L1) * (s - L2) * (s - L3));

        printf("\nLos lados corresponden a un triangulo.\n");
        printf("El area del triangulo es: %.2f\n", ARE);


        if (L1 == L2 && L2 == L3)
        {
            printf("El triangulo es Equilatero\n\n");
        }
        else if (L1 == L2 || L2 == L3 || L1 == L3)
        {
            printf("El triangulo es Isoceles.\n\n");
        }
        else
        {
            printf("El triangulo es Escaleno.\n\n");
        }
    }
    else
    {
        printf("Los lados no corresponden a un triángulo.\n");
    }
}