 /* 
  *                    Expresión.
  * El programa escribe los valores de TT, PP 
  * y QQ que satisfacen una determinada expresión.
  */

#include <stdio.h>
#include <math.h>

/* Prototipo de función. */
int  Expresion(int, int, int);

int main(void)
{
        int EXP, T = 0, P = 0, Q = 0;

        EXP = Expresion(T, P, Q);

        while (EXP < 5500) {
                while (EXP < 5500) {
                        while (EXP < 5500) {
                                printf("\nT: %d,  P: %d,  Q: %d, Resultado: %d", T, P, Q, EXP);
        
                                Q++;
                                
                                EXP = Expresion(T, P, Q);
                        }
       
                        P++;
                        
                        Q = 0;
                        
                        EXP = Expresion(T, P, Q);
                }
        
                T++;

                P = 0;
                Q = 0;
                
                EXP = Expresion(T, P, Q);
        }
        putchar('\n');
}

/* Esta función obtiene el resultado de la expresión para los valores de TT,,  PP y QQ. */
int  Expresion(int T, int P, int Q)
{
        int RES;

        RES = 15 * pow(T,4) + 12 * pow(P,5) + 9 * pow(Q,6);

        return  (RES);
}