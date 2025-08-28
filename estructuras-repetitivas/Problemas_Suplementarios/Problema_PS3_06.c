#include <stdio.h>

int main(void) 
{
        int N, SEX, EDAD;
        int can_de_personas_MAS = 0, can_de_personas_FEM = 0;
        float PES, ALT;
        float suma_PES_MAS = 0, suma_PES_FEM = 0;
        float suma_ALT_MAS = 0, suma_ALT_FEM = 0;

        printf("Ingresa la cantidad de personas que ingresaran sus datos: ");
        scanf("%d", &N);

        for (int i = 0; i < N; i++) {
                puts("\tMenu");
                puts("Ingrese una de las siguientes opciones:");
                puts("0 - Femenino || 1 - Masculino\n");

                // Validación del sexo
                do {
                        printf("Ingrese su sexo (0-Femenino, 1-Masculino): ");
                        scanf("%d", &SEX);

                        if (SEX != 0 && SEX != 1) {
                        puts("Ingrese un número válido.");
                        }
                } while (SEX != 0 && SEX != 1);

                printf("Ingrese su edad: ");
                scanf("%d", &EDAD);

                if (EDAD < 18) {
                        puts("Usted no posee la edad suficiente.");
                        continue;
                }

                printf("Ingrese su peso en libras: ");
                scanf("%f", &PES);

                printf("Ingrese su altura en metros: ");
                scanf("%f", &ALT);

                if (SEX == 0) {  // Femenino
                        suma_PES_FEM += PES;
                        suma_ALT_FEM += ALT;
                        can_de_personas_FEM++;

                } else {  // Masculino
                        suma_PES_MAS += PES;
                        suma_ALT_MAS += ALT;
                        can_de_personas_MAS++;
                }
        }

    // Cálculo de promedios después del bucle
        if (can_de_personas_FEM > 0) {
                printf("\nPromedio peso femenino: %.2f lbs\n", suma_PES_FEM / can_de_personas_FEM);
                printf("Promedio altura femenina: %.2f m\n", suma_ALT_FEM / can_de_personas_FEM);

        } else {
                puts("\nNo hay datos suficientes para mujeres.");
        }

        if (can_de_personas_MAS > 0) {
                printf("\nPromedio peso masculino: %.2f lbs\n", suma_PES_MAS / can_de_personas_MAS);
                printf("Promedio altura masculina: %.2f m\n", suma_ALT_MAS / can_de_personas_MAS);

        } else {
                puts("\nNo hay datos suficientes para hombres.");
        }

        return 0;
}
