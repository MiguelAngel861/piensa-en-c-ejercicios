#include <stdio.h>

// Prototipos de funciones
int Suma(int X, int Y);
int Resta(int X, int Y);
int Control(int (*apf)(int, int), int X, int Y);

int main(void) 
{
    int R1 = Control(Suma, 15, 5);  // Llama a la función Suma
    int R2 = Control(Resta, 10, 4); // Llama a la función Resta

    printf("\nResultado 1: %d", R1);
    printf("\nResultado 2: %d", R2);
    
    return 0;
}

// Definición de funciones
int Suma(int X, int Y) 
{
    return X + Y;
}

int Resta(int X, int Y) 
{
    return X - Y;
}

int Control(int (*apf)(int, int), int X, int Y) 
{
    return apf(X, Y);  // Llama a la función apuntada
}
