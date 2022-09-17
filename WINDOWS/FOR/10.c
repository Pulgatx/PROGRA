#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
// Si es linux agregar la libreria <unistd.h> y eliminar <windows.h>
void forma();

int main()
{
    forma();

    return 0;
}

void forma()
{
    int a = 0, b = 0, c = 1, d = 77, espacio;

    for (a = 1; a < 40; a = a + 1)
    {
        printf("A");

        for (espacio = 1; espacio <= d; espacio = espacio + 1)
            printf(" ");

        printf("A");
        printf("\n");
        Sleep(30);
        system("cls");

        for (b = 1; b <= c; b = b + 1)
            printf(" ");
        c = c + 1;
        d = d - 2;
    }
    printf("AA");
}