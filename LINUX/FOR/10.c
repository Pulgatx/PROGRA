#include <stdio.h>

void movimiento();

int main()
{
    movimiento();

    return 0;    
}

void movimiento()
{
    int esp=0;
    for(int i=1;i<=4&&esp!=i;i=i+1)
    {
        for(esp=1;esp<i;esp=esp+1)
            printf(" ");
        printf("A");
        for(esp=8-i;esp>i;esp=esp-1)
            printf(" ");
        printf("A\n");
    }
    return;
}