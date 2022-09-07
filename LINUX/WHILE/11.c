#include <stdio.h>

void forma();

int main()
{
    forma();

    return 0;
}

void forma()
{
    int fil=1, esp=0, letra=0;

    while(fil<=25)
    {
        esp=1;
        while(esp<=80-fil)
        {
            printf(" ");
            esp=esp+1;
        }
        letra=1;
        while(letra<=fil)
        {
            printf("A");
            letra=letra+1;
        }
        fil=fil+1;
        printf("\n");
    }
    return;
}