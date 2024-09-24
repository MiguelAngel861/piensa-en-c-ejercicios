#include <stdio.h>

int main(void)
{
    int N;
    float Suma, m;

    printf("Ingrese un numero:");
                scanf("%i", &N);

    for (int i = 1; i <= N; i++)
    {
        Suma += (float) 1 / i;

        printf("%i / %i = %.2f\n", 1, i, Suma);
    }
  return 0;
}
