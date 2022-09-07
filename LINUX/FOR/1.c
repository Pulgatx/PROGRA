#include <stdio.h>

void fibo();

int main() 
{
    int x=0;

    fibo();
    printf("\n");
    return 0;
}

void fibo()
{
    int pos0=0, pos1=1, actual=0;

    printf("%i %i ",pos0,pos1);
    for(int i=0;actual<10000;i=i+1)
    {
        actual=pos0+pos1;
        if(actual<10000)
            printf("%i ", actual);
        pos0=pos1;
        pos1=actual;
    }

    return;
}