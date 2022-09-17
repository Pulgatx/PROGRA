#include <stdio.h>

void forma();

int main()
{
    forma();

    return 0;
}
void forma()
{
    int renglon, cantidad, espacios;

    for (renglon = 1; renglon <= 25; renglon = renglon + 1)
    {
        for (espacios = 1; espacios <= 79 - renglon + 1; espacios = espacios + 1)
            printf(" ");

        for (cantidad = 1; cantidad <= renglon; cantidad = cantidad + 1)
            printf("A");

        printf("\n");
    }
    return;
}