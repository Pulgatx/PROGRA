#include <stdio.h>
#include <math.h>

float sen(int);
int factorial(int);

int main()
{
    int x=0;
    printf("dato: ");
    scanf("%i",&x);

    printf("%f", sen(x));

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

float sen(int x)
{
    float res=1.0;

    for(int i=0;i<=20;i=i+2)
    {
        res= res - (pow(x,i)/factorial(i));
        printf("%f  %f\n",res, (pow(x,i)/factorial(i)));
    }
    return res;
}