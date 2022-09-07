#include <stdio.h>

void multiplicacion();

int main()
{
    multiplicacion();
    
    return 0;
}

void multiplicacion()
{
    for (int i=1; i<=10;i=i+1)
    {
        for(int j=1;j<=10;j=j+1)
        {
            printf("%i x %i = %i\n",i,j,i*j);
        }
        printf("\n");
    }
}