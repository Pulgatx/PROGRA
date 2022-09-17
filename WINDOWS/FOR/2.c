#include <stdio.h>

void sumfibo();

int main()
{
    int x = 0;

    sumfibo();

    return 0;
}

void sumfibo()
{
    int pos0 = 0, pos1 = 1, actual = 0, sum = 1;

    printf("%i %i ", pos0, pos1);
    for (int i = 0; actual < 100; i = i + 1)
    {
        actual = pos0 + pos1;
        if (actual < 100)
        {
            printf("%i ", actual);
            sum = sum + actual;
        }
        pos0 = pos1;
        pos1 = actual;
    }

    printf("La suma es: %i\n", sum);

    return;
}