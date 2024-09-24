#include <stdio.h>

int main(void)
{
    int N;
    float Serie = 1.0;

    printf("Ingrese un numero: ");
    scanf("%i", &N);

    for (int i = 1; i <= N; i++)
    {
        Serie *= (float) (1.0 / i) / (1.0 / i + 1.0);
        printf("%.2f\n", Serie);
    }
    return 0;
}