#include <stdio.h>

void forma();

int main()
{
    forma();

    return 0;
}

void forma()
{
    int renglon, cantidadEspaciosI = 0, centro, cantidadEspacios = 17, izquierda;

    for (renglon = 0; renglon < 10; renglon = renglon + 1)
    {
        for (izquierda = 0; izquierda < cantidadEspaciosI; izquierda = izquierda + 1)
            printf(" ");

        printf("Z");

        for (centro = 0; centro < cantidadEspacios; centro = centro + 1)
            printf(" ");

        if (renglon < 9)
            printf("Z\n");

        cantidadEspaciosI = cantidadEspaciosI + 1;
        cantidadEspacios = cantidadEspacios - 2;
    }

    return;
}
