#include <stdio.h>

void impar();

int main()
{
    impar();

    return 0;    
}

void impar()
{
    int j=1, k=1;
    for(int i=1;i<=9;i=i+1)
    {
        printf("%i %i %i\n", i,k,j);
        
        if(i%3==0)
        {
            j=1;
            k=k+1;
        }
        else
            j=j+1;
    }
    return;
}