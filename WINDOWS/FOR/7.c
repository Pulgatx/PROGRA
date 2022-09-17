#include <stdio.h>

int factorial(int);

int main()
{
    int num = 0;
    int sum = 0;
    scanf("%i", &num);

    if (num > 0)
        for (int i = num; i >= 0; i = i - 1)
        {
            if (i != 0)
            {
                printf("%i! + ", i);
                sum = sum + factorial(i);
            }
            else
            {
                printf("%i! ", i);
                sum = sum + factorial(i);
            }
        }
    printf("= %i\n", sum);

    return 0;
}

int factorial(int num)
{
    int mul = 1;
    if (num == 0)
    {
        return mul;
    }
    else
        for (int i = num; i > 0; i = i - 1)
        {
            mul = i * mul;
        }

    return mul;
}