#include <stdio.h>

void forma();

int main()
{
    forma();

    return 0;
}

void forma()
{
    int renglon, cantidad, letras = 1, cantidadEspacios = 39, espacios;

    for (renglon = 0; renglon < 11; renglon = renglon + 1)
    {
        for (espacios = 0; espacios < cantidadEspacios; espacios = espacios + 1)
            printf(" ");

        for (cantidad = 0; cantidad < letras; cantidad = cantidad + 1)
            printf("A");

        printf("\n");

        if (renglon < 5)
        {
            cantidadEspacios = cantidadEspacios - 1;
            letras = letras + 1;
        }
        else
        {
            cantidadEspacios = cantidadEspacios + 1;
            letras = letras - 1;
        }
    }

    return;
}