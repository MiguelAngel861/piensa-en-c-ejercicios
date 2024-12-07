#include <stdio.h>

int main(void)
{
        
        float L1, L2, L3, L4, L5, L6;
        float Recaudacion;
        int CLA, CAN;
        int bol_L1 = 0, bol_L2 = 0, bol_L3 = 0, bol_L4 = 0, bol_L5 = 0, bol_L6 = 0;
        int op = 0;

        printf("Introduce el percio de la localidad numero 1: ");
        scanf("%f", &L1);

        printf("Introduce el percio de la localidad numero 2: ");
        scanf("%f", &L2);

        printf("Introduce el percio de la localidad numero 3: ");
        scanf("%f", &L3);

        printf("Introduce el percio de la localidad numero 4: ");
        scanf("%f", &L4);

        printf("Introduce el percio de la localidad numero 5: ");
        scanf("%f", &L5);

        printf("Introduce el percio de la localidad numero 6: ");
        scanf("%f", &L6);

        while (1) {
                do {
                        printf("\nIngrese localidad: ");
                        scanf("%i", &CLA);

                        if (CLA <= 0 || CLA > 6)
                                puts("Caracteres permitidos: 1 - 6\n");
                } while (CLA <= 0 || CLA > 6);
                
                printf("Ingrese cantidad de boletos vendidos: ");
                scanf("%i", &CAN);

                switch (CLA)
                {
                case 1:
                        Recaudacion += CAN * L1;
                        bol_L1 += CAN;

                        printf("El monto de la venta es de: %f\n", (float) CAN * L1);
                        break;
                case 2:
                        Recaudacion += CAN * L2;
                        bol_L2 += CAN;

                        printf("El monto de la venta es de: %f\n", (float) CAN * L2);
                        break;
                case 3:
                        Recaudacion += CAN * L3;
                        bol_L3 += CAN;
                        printf("El monto de la venta es de: %f\n", (float) CAN * L3);
                        break;
                case 4:
                        Recaudacion += CAN * L4;
                        bol_L4 += CAN;

                        printf("El monto de la venta es de: %f\n", (float) CAN * L4);
                        break;
                case 5:
                        Recaudacion += CAN * L5;
                        bol_L5 += CAN;

                        printf("El monto de la venta es de: %f\n", (float) CAN * L5);
                        break;
                case 6:
                        Recaudacion += CAN * L6;
                        bol_L6 += CAN;

                        printf("El monto de la venta es de: %f\n", (float) CAN * L6);
                        break;
                default:
                        break;
                }

                printf("\nDesea seguir? [Ingrese 1 (si) o 0 (no)]: ");
                scanf("%d", &op);

                if (!op) 
                        break;
        }
        printf("\nEl total de boletos vendidos en la localidad 1 fueron: %i\n", bol_L1);
        printf("El total de boletos vendidos en la localidad 2 fueron: %i\n", bol_L2);
        printf("El total de boletos vendidos en la localidad 3 fueron: %i\n", bol_L3);
        printf("El total de boletos vendidos en la localidad 4 fueron: %i\n", bol_L4);
        printf("El total de boletos vendidos en la localidad 5 fueron: %i\n", bol_L5);
        printf("El total de boletos vendidos en la localidad 6 fueron: %i\n", bol_L6);

        printf("\nLa recaudacion fue de: %f\n", Recaudacion);
}