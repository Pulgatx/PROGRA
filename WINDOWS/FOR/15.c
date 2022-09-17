#include <stdio.h>

void forma();

int main()
{
    forma();

    return 0;
}

void forma()
{
    int renglon;

    for (int renglon = 1; renglon <= 7; renglon = renglon + 1)
    {
        if (renglon == 1 || renglon == 7)
            printf("A     A\n");

        if (renglon == 2 || renglon == 6)
            printf("AA   AA\n");

        if (renglon == 3 || renglon == 5)
            printf("AAA AAA\n");

        if (renglon == 4)
            printf("AAAAAAA\n");
    }

    return;
}