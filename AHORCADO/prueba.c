#include <stdio.h>
#include <windows.h>

void gotoxy(int x,int y)
{  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 } 
int main()
{
    printf("JUEGO AHORCADO\n");
    printf("+----+\n");
    printf("|\n");
    printf("|\n");
    printf("|\n");
    printf("|\n");
    printf("----\n");
    printf("\n");
    gotoxy(6,2);
    printf("_ _ _ _ _");
}