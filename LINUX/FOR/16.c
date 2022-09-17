#include <stdio.h>

void forma();

int main()
{
    forma();

    return 0;
}

void forma()
{
    int  letra=0,esp=0;
    for(int i=1;i<=7;i=i+1)
    {
        for(esp=1;esp<=10-i;esp=esp+1)
            printf(" ");
        for(letra=1;letra<=i;letra=letra+2)
            printf("A");
        printf("\n");
    }
    return;
}