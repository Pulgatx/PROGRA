#include <stdio.h>

void forma();

int main()
{
    forma();

    return 0;
}

void forma()
{
    int renglon, cantidad;

    for (renglon = 1; renglon <= 7; renglon = renglon + 1)
    {

        for (cantidad = 1; cantidad <= renglon - 1; cantidad = cantidad + 1)
            printf(" ");

        for (cantidad = 1; cantidad <= 13 - (renglon * 2) + 2; cantidad = cantidad + 1)
            printf("P");

        printf("\n");
    }

    return;
}