#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int MED, SME;
    float VAL, CON;

    printf("Ingrese el valor a convertir: ");
    scanf("%f", &VAL);

    printf("\t\t\t\t\t\t   Menu de Opciones\n");
    printf("01.- Conversion de medidas de pesos || 02.- Conversion de medidas de longitud || 03.- Conversion de medidas de volumen\n");

    printf("Ingrese la conversion a realizar: ");
    scanf("%i", &MED);

    switch (MED)
    {
        case 1:
            printf("\n\t\t\t\t\t\t    Menu de Conversiones\n");
            printf("01.- Pulgadas a milimetros             ||         02.- Yardas a metros         ||         03.- Millas a kilometros\n");
            printf("04.- Pulgadas cuadradas a centimetros cuadrados              ||             05.- Pies cuadrados a metros cuadrados\n");
            printf("06.- Yardas cuadradas a metros cuadrados || 07.- Acres a hectereas || 08.- Millas cuadradas a kilometros cuadrados\n");

            printf("Ingrese la conversion a realizar: ");
            scanf("%i", &SME);

            switch (SME)
            {
                case 1:
                    CON = VAL * 25.40;

                    printf("\n%.2f pulgadas son %.2f milimetros\n\n", VAL, CON);
                break;

                case 2:
                    CON = VAL *0.9144;
                    
                    printf("\n%.2f yardas son %.2f metros\n\n", VAL, CON);;
                break;

                case 3:
                    CON = VAL * 1.6093;

                    printf("\n%.2f millas son %.2f kilometros\n\n", VAL, CON);
                break;

                case 4:
                    CON = VAL * 6.452;

                    printf("\n%.2f pulgadas cuadradas son %.2f centimetros cuadrados\n\n", VAL, CON);
                break;

                case 5:
                    CON = VAL * 0.09290;
                    
                    printf("\n%.2f pies cuadrados son %.2f metros cuadrados\n\n", VAL, CON);
                break;

                case 6:
                    CON = VAL *0.8361;

                    printf("\n%.2f yardas cuadradas son %.2f metros cuadradas\n\n", VAL, CON);
                break;

                case 7:
                    CON = VAL * 0.4047;
                    
                    printf("\n%.2f acres son %.2f hectareas\n\n", VAL, CON);
                break;

                case 8:
                    CON = VAL * 2.59;

                    printf("\n%.2f millas cuadradas son %.2f kilometros cuadrados\n\n", VAL, CON);
                break;

                default:
                    printf("\nIngrese una opcion valida\n\n");
                break;
            }
            break;

        case 2:
            printf("\n\t\t\t\t\t\t    Menu de Conversiones\n");
            printf("01.- Pies al cubo a metros al cubo || 02.- Yardas al cubo a metros al cubo || 03.- Pintas a Litros || 04.- Galon a litros\n");

            printf("Ingrese la conversion a realizar: ");
            scanf("%i", &SME);

            switch (SME)
            {
                case 1:
                    CON = VAL * 0.02832;

                    printf("\n%.2f pies al cubo son %.2f metros al cubo\n\n", VAL, CON);
                break;
                
                case 2:
                    CON = VAL * 0.7646;

                    printf("\n%.2f yardas al cubo son %.2f metros al cubo\n\n", VAL, CON);
                break;

                case 3:
                    CON = VAL * 0.56826;

                    printf("\n%.2f pintas son %.2f litros\n\n", VAL, CON);
                break;

                case 4:
                    CON = VAL * 4.54609;

                    printf("\n%.2f galones son %.2f litros\n\n", VAL, CON);
                break;

                default:
                    printf("\nIngrese una opcion valida\n\n");
                break;
            }
            break;

        case 3:
            printf("\n\t\t\t\tMenu de Conversiones\n");
            printf("01.- Onzas a Gramos || 02.- Libras a kilogramos || 03.- Toneladas Inglesas a toneladas\n");

            printf("Ingrese la conversion a realizar: ");
            scanf("%i", &SME);

            switch (SME)
            {
            case 1:
                CON = VAL * 28.35;

                printf("\n%.2f onzas son %.2f gramos\n\n", VAL, CON);
            break;
            
            case 2:
                CON = VAL * 0.45359;

                printf("\n%.2f kilos son %.2f kilogramos\n\n", VAL, CON);
            break;

            case 3:
                CON = VAL * 1.0160;

                printf("\n%.2f ton. inglesas son %.2f toneladas\n\n", VAL, CON);
            break;

            default:
                printf("\nIngrese una opcion valida\n\n");
            break;
            }
        break;
        
        default:
            printf("Ingrese una opcion valida\n\n");
        break;
    }
    system("pause");
    return 0;
}