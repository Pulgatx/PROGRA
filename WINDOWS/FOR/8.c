#include <stdio.h>

void par();

int main()
{
    par();

    return 0;
}

void par()
{
    int j = 1;
    for (int i = 0; i <= 9; i = i + 1)
    {
        printf("%i %i\n", i, j);

        if (i != 0)
            if (i % 2)
                j = j + 1;
    }
    return;
}