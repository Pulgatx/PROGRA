#include <stdio.h>

void factorial(int);

int main()
{
    int num = 0;
    scanf("%i", &num);

    if (num > 0)
        factorial(num);

    return 0;
}

void factorial(int num)
{
    int mul = 1;
    printf("El factorial de %i es:", num);

    for (int i = num; i > 0; i = i - 1)
    {
        mul = i * mul;
    }
    printf(" %i\n", mul);

    return;
}
