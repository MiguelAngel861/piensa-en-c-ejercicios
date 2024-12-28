#include <stdio.h>

int main(void)
{
        int NUM;
        
        int auxcout;
        int auxcout1;

        int cout = 0;
        int cout1 = 0;

        printf("Ingrese un numero: ");
        scanf("%i", &NUM);

        while (NUM != 1) {
                for (int i = 1; i <= NUM; i++) {
                        if (NUM % i == 0)
                                cout++;
                }

                if (cout == 2) 
                        auxcout = NUM;

                for (int i = 1; i <= NUM - 2; i++) {
                        if ((NUM - 2) % i == 0)
                                cout1++;
                }

                if (cout1 == 2)
                        auxcout1 = NUM - 2;

                if (cout == 2 && cout1 == 2)
                        printf("%i %i\n", auxcout, auxcout1);

                NUM--;
                cout1 = 0;
                cout = 0;
        }
}