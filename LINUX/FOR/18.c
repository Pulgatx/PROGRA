#include <stdio.h>

void forma();

int main()
{
    forma();
    
    return 0;
}

void forma()
{
    int j=0,esp=0;
    for(int i=1;i<=10;i=i+1)
    {
        for(esp=19-i;esp>i;esp=esp-1)
            printf(" ");
        if(i!=1)
        printf("Z\n");
        for(esp=1;esp<i;esp=esp+1)
            printf(" ");
        // printf("Z\n");
    }
    printf("\n");
}