#include <stdio.h>

void par();

int main()
{
    par();

    return 0;    
}

void par()
{
    int j=0;
    for(int i=0;i<=9;i=i+1)
    {
        if(i%2==0)
            j=j+1;
        printf("%i %i\n", i,j);
    }
    return;
}