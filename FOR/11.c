#include <stdio.h>

void forma();

int main()
{
    forma();

    return 0;
}

void forma()
{
    int fil=0, esp=0, letra=0;

    for(fil=1; fil<=25; fil=fil+1)
    {
        for(esp=1;esp<=80-fil;esp=esp+1)
            printf(" ");
        for(letra=1;letra<=fil;letra=letra+1)
            printf("A");
        printf("\n");
    }
    return;
}
