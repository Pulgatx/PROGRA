#include <stdio.h>

void forma();

int main()
{
    forma();

    return 0;
}

void forma()
{
    int renglon, espacio, cantidad;

    for (renglon = 1; renglon <= 7; renglon = renglon + 1)
    {
        if (renglon == 1 || renglon == 7)
        {
            espacio = 9;
            cantidad = 1;
        }

        if (renglon == 2 || renglon == 6)
        {
            espacio = 8;
            cantidad = 3;
        }

        if (renglon == 3 || renglon == 5)
        {
            espacio = 7;
            cantidad = 5;
        }

        if (renglon == 4)
        {
            espacio = 6;
            cantidad = 7;
        }

        for (int a = 1; a <= espacio; a = a + 1)
            printf(" ");

        for (int b = 1; b <= cantidad; b = b + 1)
            printf("Z");

        printf("\n");
    }

    return;
}
