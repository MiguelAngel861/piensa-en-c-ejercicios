#include <stdio.h>

/* estado de la República Mexicana, obtenga el promedio del peso (edad ≥ 18) y el
promedio de la altura (edad ≥ 18), tanto de la población masculina como de la femenina. 

Datos: N, PES1, ALT1, SEX1, PES2, ALT2, SEX2, . . ., PESN, ALTN, SEXN

Donde: N es una variable de tipo entero que representa el número de personas.
PES es una variable de tipo real que indica el peso de la persona i
(1 ≤ i ≤ N).
ALT es una variable de tipo real que expresa la altura de la persona i
(1 ≤ i ≤ N). 
SEX es una variable de tipo entero que representa el sexo de la persona i
(1 ≤ i ≤ N). Se ingresa 1 si es hombre y 0 si es mujer */

int main(void)
{
        int N, SEX, EDAD;

        int can_de_personas_MAS = 0, can_de_personas_FEM = 0;

        float PES, ALT;

        float prom_PES_MAS = 0, prom_PES_FEM = 0 ; //Promedio del peso de la poblacion separado en generos.
        float prom_ALT_MAS = 0, prom_ALT_FEM = 0; //Promedio de la altura de la poblacion separado en generos.

        printf("Ingresa la cantidad de personas que ingresaran sus datos: ");
        scanf("%d", &N);

        for (int i = 0; i < N; i++) {
                puts("\tMenu");
                puts("Ingrese una de las siguientes opciones");
                puts("00 - Femenino || 01 - Masculino\n");

                do {
                        printf("Ingrese su sexo: ");
                        scanf("%d", &SEX);

                        if (SEX != 0 && SEX != 1) {
                                puts("Ingrese un numero valido");
                                puts("Opciones: 01 - Masculino || 02 - Femenino");
                        }
                } while (SEX != 0 && SEX != 1);

                if (SEX == 0)
                        can_de_personas_FEM += 1;
                
                else if (SEX == 1)
                        can_de_personas_MAS += 1;
                
                printf("Ingrese su edad: ");
                scanf("%d", &EDAD);

                if (EDAD < 18) {
                        puts("Usted no posee la edad suficiente");
                        continue;
                }

                printf("Ingrese su peso en libras: ");
                        scanf("%f", &PES);

                if (SEX == 0)
                        prom_PES_FEM += PES;
                
                else if (SEX == 1)
                        prom_PES_MAS += PES;

                printf("Ingrese su altura en metros: ");
                        scanf("%f", &ALT);

                if (SEX == 0)
                        prom_ALT_FEM += ALT;
                
                else if (SEX == 1)
                        prom_ALT_MAS += ALT;

                prom_ALT_FEM /= can_de_personas_FEM;
                prom_ALT_MAS /= can_de_personas_MAS;

                prom_PES_FEM /= can_de_personas_FEM;
                prom_PES_MAS /= can_de_personas_MAS;
        }
}