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

    do
    {
        esp=1;
        
        do
        {
            printf(" ");
            esp=esp+1;
        }while(esp<=80-fil);

        letra=1;
        do
        {
            printf("A");
            letra=letra+1;
        }while(letra<=fil);
        
        fil=fil+1;
        printf("\n");
    }while(fil<=25);
    return;
}