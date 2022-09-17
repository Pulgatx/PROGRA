#include <stdio.h>

void forma();

int main()
{
    forma();

    return 0;
}

void forma()
{
    int renglon, centro, cantidadEspacios = 0, izquierda, cantidadEspaciosI = 9;

    for (renglon = 0; renglon < 10; renglon = renglon + 1)
    {
        for (izquierda = 0; izquierda < cantidadEspaciosI; izquierda = izquierda + 1)
            printf(" ");

        if (renglon > 0)
            printf("Z");

        for (centro = 0; centro < cantidadEspacios; centro = centro + 1)
            printf(" ");

        printf("Z\n");

        if (renglon > 0)
            cantidadEspacios = cantidadEspacios + 2;
        else
            cantidadEspacios = 1;

        cantidadEspaciosI = cantidadEspaciosI - 1;
    }

    return;
}