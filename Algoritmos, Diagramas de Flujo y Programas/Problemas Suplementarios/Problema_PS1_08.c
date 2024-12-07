#include <stdio.h>

int main(void)
{
    int DIS, MIN, SEG, CEN, TSE, VMS, VKH;

    printf("Ingrese la distancia recorrida en metros: ");
    scanf("%i", &DIS);

    printf("\nIngrese los minutos concurridos: ");
    scanf("%i", &MIN);

    printf("\nIngrese los segundos concurridos: ");
    scanf("%i", &SEG);

    printf("\nIngrese las centesimas de segundos concurridas: ");
    scanf("%i", &CEN);

    TSE = MIN * 60 + SEG + CEN / 100;
    VMS = DIS / TSE;
    VKH = VMS * 3600 / 1000;

    printf("Tiempo expresado en Segundos: %i\n", TSE);
    printf("Velocidad expresada en metros sobre segundos: %i\n", VMS);
    printf("Velocidad expresada en kilometros por hora: %i\n", VKH);
}