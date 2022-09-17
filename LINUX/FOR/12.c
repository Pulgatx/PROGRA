#include <stdio.h>

void forma();

int main()
{
    forma();

    return 0;
}
void forma()
{
    int i=0,esp=0,ch=80,j=0;
    for(i=0;i<7;i=i+1)
    {
        for(esp=0;esp<i;esp=esp+1)
            printf(" ");
        for(j=i;j<13-i;j=j+1)
            printf("%c",ch);
            printf("\n");
            ch=ch-2;
    }
    return;
}