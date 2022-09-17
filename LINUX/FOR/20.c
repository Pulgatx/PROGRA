#include <stdio.h>
#include <math.h>

float serie(int);
int factorial(int);

int main()
{
    int x=0;
    printf("dato: ");
    scanf("%i",&x);

    printf("%f", serie(x));

    return 0;
}

int factorial(int num)
{
    int mul=1;

    for(int i=num;i>0;i=i-1)
    {
            mul=i*mul;   
    }

    return mul;
}

float serie(int x)
{
    float suma=1.0;

    for(int i=1;i<=10;i=i+1)
    {
        suma= suma + ((pow(x,i))/factorial(i));
    }
    return suma;
}