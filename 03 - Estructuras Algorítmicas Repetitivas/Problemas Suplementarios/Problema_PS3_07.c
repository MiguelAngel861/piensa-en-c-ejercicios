#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void)
{
    int N;
    int Serie = 0;
    bool aux = true;
    
    
    printf("Ingrese un numero: ");
    scanf("%i", &N);

    for (int i = 1; i <= N; i++)
    {
        if (aux == true)
        {
            Serie += pow(i, i);
            aux = false;

        }
        else if (aux == false)
        {
            Serie -= pow(i, i);
            aux = true;
        }
    }
    printf("%i", Serie);
}