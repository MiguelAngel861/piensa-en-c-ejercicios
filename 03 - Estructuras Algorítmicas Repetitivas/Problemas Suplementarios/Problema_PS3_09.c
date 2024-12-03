/* 
En el centro meteorológico ubicado en Baja California Sur, en México, llevan los
registros de los promedios mensuales de temperaturas de las principales regiones
del país. Existen seis regiones denominadas NORTE, CENTRO, SUR, GOLFO, PACÍFICO
y CARIBE. Construye un diagrama de flujo y el correspondiente programa en C que
obtenga lo siguiente:

        a. El promedio anual de cada región.
        b. El mes y registro con la mayor y menor temperaturas, y que además indique a qué zona pertenecen estos registros.
        c. Determine cuál de las regiones SUR, PACÍFICO y CARIBE tienen el mayor promedio de temperatura anual.

        Datos: NOR1, CEN1, SUR1, GOL1, PAC1, CAR1, . . ., NOR12, CEN12, SUR12, GOL12, PAC12, CAR12.
        Donde: NORi, CENi, SURi, GOLi, PACi, CARi son variables de tipo real que representan
        los promedios de temperaturas en cada una de las regiones. 
*/

#include <stdio.h>

int main(void)
{
        int Region_Max, Region_Min;
        int Mes_Max_Temp, Mes_Min_Temp;
        float NOR, CEN, SUR, GOL, PAC, CAR;

        int Mes = 0;
        float Max_Temp = 0, Min_Temp = 9999999;
        float Prom_NOR = 0, Prom_CEN = 0, Prom_SUR = 0, Prom_GOL = 0, Prom_PAC = 0, Prom_CAR = 0; 
        
        do {
                Mes++;

                printf("Ingrese la temperatura reportada en el mes %i de la region del norte: ", Mes);
                scanf("%f", &NOR);

                if (NOR > Max_Temp) {
                        Max_Temp = NOR;
                        Mes_Max_Temp = Mes;
                        Region_Max = 1;
                } else if (NOR < Min_Temp) {
                        Min_Temp = NOR;
                        Mes_Min_Temp = Mes;
                        Region_Min = 1;
                }
                Prom_NOR += NOR;

                printf("Ingrese la temperatura reportada en el mes %i de la region del centro: ", Mes);
                scanf("%f", &CEN);

                if (CEN > Max_Temp) {
                        Max_Temp = CEN;
                        Mes_Max_Temp = Mes;
                        Region_Max = 2;
                } else if (CEN < Min_Temp) {
                        Min_Temp = CEN;
                        Mes_Min_Temp = Mes;
                        Region_Min = 2;
                }
                Prom_CEN += CEN;

                printf("Ingrese la temperatura reportada en el mes %i de la region del sur: ", Mes);
                scanf("%f", &SUR);

                if (SUR > Max_Temp) {
                        Max_Temp = SUR;
                        Mes_Max_Temp = Mes;
                        Region_Max = 3;
                } else if (SUR < Min_Temp) {
                        Min_Temp = SUR;
                        Mes_Min_Temp = Mes;
                        Region_Min = 3;
                }
                Prom_SUR += SUR;

                printf("Ingrese la temperatura reportada en el mes %i de la region del golfo: ", Mes);
                scanf("%f", &GOL);

                if (GOL > Max_Temp) {
                        Max_Temp = GOL;
                        Mes_Max_Temp = Mes;
                        Region_Max = 4;
                } else if (GOL < Min_Temp) {
                        Min_Temp = GOL;
                        Mes_Min_Temp = Mes;
                        Region_Min = 4;
                }
                Prom_GOL += GOL;

                printf("Ingrese la temperatura reportada en el mes %i de la region del pacifico: ", Mes);
                scanf("%f", &PAC);

                if (PAC > Max_Temp) {
                        Max_Temp = PAC;
                        Mes_Max_Temp = Mes;
                        Region_Max = 5;
                } else if (PAC < Min_Temp) {
                        Min_Temp = PAC;
                        Mes_Min_Temp = Mes;
                        Region_Min = 5;
                }
                Prom_PAC += PAC;

                printf("Ingrese la temperatura reportada en el mes %i de la region del caribe: ", Mes);
                scanf("%f", &CAR);

                if (CAR > Max_Temp) { 
                        Max_Temp = CAR;
                        Mes_Max_Temp = Mes;
                        Region_Max = 6;
                } else if (CAR < Min_Temp) {
                        Min_Temp = CAR;
                        Mes_Min_Temp = Mes;
                        Region_Min = 6;
                }
                Prom_CAR += CAR;
        } while (Mes < 3);

        Prom_CAR /= Mes;
        Prom_CEN /= Mes;
        Prom_GOL /= Mes;
        Prom_NOR /= Mes;
        Prom_PAC /= Mes;
        Prom_SUR /= Mes;

        switch (Region_Max) {
        case 1:
                printf("\nLa mayor temperatura registrada fue de %f en la region Norte, en el mes numero %i\n", Max_Temp, Mes_Max_Temp);
                break;
        case 2:
                printf("\nLa mayor temperatura registrada fue de %f en la region Central, en el mes numero %i\n", Max_Temp, Mes_Max_Temp);
                break;
        case 3:
                printf("\nLa mayor temperatura registrada fue de %f en la region Sur, en el mes numero %i\n", Max_Temp, Mes_Max_Temp);
                break;
        case 4:
                printf("\nLa mayor temperatura registrada fue de %f en la region Golfo, en el mes numero %i\n", Max_Temp, Mes_Max_Temp);
                break;
        case 5:
                printf("\nLa mayor temperatura registrada fue de %f en la region Pacifico, en el mes numero %i\n", Max_Temp, Mes_Max_Temp);
                break;
        case 6:
                printf("\nLa mayor temperatura registrada fue de %f en la region Caribe, en el mes numero %i\n", Max_Temp, Mes_Max_Temp);
                break;
        default:
                break;
        }

        switch (Region_Min) {
        case 1:
                printf("La menor temperatura registrada fue de %f en la region Norte, en el mes numero %i\n", Min_Temp, Mes_Min_Temp);
                break;
        case 2:
                printf("La menor temperatura registrada fue de %f en la region Central, en el mes numero %i\n", Min_Temp, Mes_Min_Temp);
                break;
        case 3:
                printf("La menor temperatura registrada fue de %f en la region Sur, en el mes numero %i\n", Min_Temp, Mes_Min_Temp);
                break;
        case 4:
                printf("La menor temperatura registrada fue de %f en la region Golfo, en el mes numero %i\n", Min_Temp, Mes_Min_Temp);
                break;
        case 5:
                printf("La menor temperatura registrada fue de %f en la region Pacifico, en el mes numero %i\n", Min_Temp, Mes_Min_Temp);
                break;
        case 6:
                printf("La menor temperatura registrada fue de %f en la region Caribe, en el mes numero %i\n", Min_Temp, Mes_Min_Temp);
                break;
        default:
                break;
        }

        if (Prom_SUR > Prom_PAC && Prom_SUR > Prom_CAR) {
                printf("La region del Sur tiene un promedio de temperaturas mayor a la region del Pacifico y a la region del Caribe\n");
        } else if (Prom_PAC > Prom_SUR && Prom_PAC > Prom_CAR) {
                printf("La region del Pacifico tiene un promedio de temperaturas mayor a la region del Sur y a la region del Caribe\n");
        } else if (Prom_CAR > Prom_SUR && Prom_CAR > Prom_PAC) {
                printf("La region del Caribe tiene un promedio de temperaturas mayor a la region del Pacifico y a la region del Sur\n");
        }
}