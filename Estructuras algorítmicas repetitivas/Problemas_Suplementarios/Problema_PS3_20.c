#include <stdio.h>
#include <math.h>

int main(void) 
{
        int T, P, R;
        int expresion;

        for (T = 1; T <= 10; T++) {

                for ( P = 1; P <= 10; P++) {

                        for(R = 1; R <= 10; R++) {
                                expresion = (7 * pow(T, 4)) - (6 * pow(P, 3)) + (12 * pow(R, 5));

                        if (expresion < 5850)
                                printf("T = %d, P = %d, R = %d\n", T, P, R);
                        }
                        
                }
        }
        
        return 0;
}