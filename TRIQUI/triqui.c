#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void clear();
void dise(char[],int,char);
int verificar(char[],char);
void juego(char[]);
int main ()
{
    char triqui[9]="123456789";
    dise(triqui,0,'*');
    juego(triqui);

  return 0;
}
void clear()
{
    if((system("clear"))==1)
        system("cls");
}
void juego(char triqui[])
{
    int error=0,cont=1,tiro=0, ver=0;
        char marca,jugador='1';
    do
    {
        error=1;
        if(cont%2==0)
            marca='O';
        else
            marca='X';
        printf("Jugador %c: Entre numero casilla: ",jugador);
        fflush(stdin);
        scanf("%i",&tiro);
        if(tiro<1 || tiro>9)
        {
            printf("\nPosicion invalida\n");
            error=2;
        }
        else if (triqui[tiro-1]=='X' || triqui[tiro-1]=='O') 
        {
            printf("\nCasilla ya jugada\n");
            error=2;
        }
        else 
        {
            triqui[tiro-1]=marca;
        }
        if(error==2)
        {
            printf("Presiona una tecla para continuar....");
            getch();
        }
        dise(triqui,0,jugador);
        ver=verificar(triqui,jugador);
        if(ver==1)
        {
            cont=10;
            dise(triqui,ver,jugador);
        }
        else if(ver==2)
        {
            dise(triqui,ver,jugador);
        }
        else if(ver==0)
        {
            dise(triqui,ver,jugador);
        }

        if(error==1)
        {
            cont=cont+1;
            if (jugador=='1')
            {
             jugador='2';
            }
            else
            {
             jugador='1';
            }
        }
    }while(cont<=9);
}
void dise(char triqui[],int opc, char jugador)
{
    clear();
    if(opc==0)
    {
        printf("JUEGO DEL TRIQUI\n");
        printf("\n %c | %c | %c\n",triqui[0],triqui[1],triqui[2]);
        printf("---+---+---\n");
        printf("\n %c | %c | %c\n",triqui[3],triqui[4],triqui[5]);
        printf("---+---+---\n");
        printf("\n %c | %c | %c\n\n",triqui[6],triqui[7],triqui[8]);
    }
    else if(opc==1)
    {
        printf("Jugador: %c Gana!\n\n",jugador);
        printf("\n %c | %c | %c\n",triqui[0],triqui[1],triqui[2]);                                
        printf("---+---+---\n");
        printf("\n %c | %c | %c\n",triqui[3],triqui[4],triqui[5]);
        printf("---+---+---\n");
        printf("\n %c | %c | %c\n\n",triqui[6],triqui[7],triqui[8]);
    }
    else if(opc==2)
    {
        printf("Empate!\n");
        printf("\n %c | %c | %c\n",triqui[0],triqui[1],triqui[2]);
        printf("---+---+---\n");
        printf("\n %c | %c | %c\n",triqui[3],triqui[4],triqui[5]);
        printf("---+---+---\n");
        printf("\n %c | %c | %c\n\n",triqui[6],triqui[7],triqui[8]);  
    }
}
int verificar(char triqui[], char jugador)
{
    int ret=0;
            if(triqui[0]=='X'||triqui[0]=='O')
            {

              if(triqui[1]==triqui[0]&&triqui[2]==triqui[0])
                ret=1;
              if(triqui[3]==triqui[0]&&triqui[6]==triqui[0])
                ret=1;
            }
            if(triqui[4]=='X'||triqui[4]=='O')
            {
                     if (triqui[0] == triqui[4] && triqui[8] == triqui[4])
                        ret=1;
                     if (triqui[1] == triqui[4] && triqui[7] == triqui[4])
                        ret=1;
                     if (triqui[3] == triqui[4] && triqui[5] == triqui[4])
                        ret=1;
                     if (triqui[2] == triqui[4] && triqui[6] == triqui[4])
                        ret=1;
              }
    
            if(triqui[8]=='X'||triqui[8]=='O')
            {
                       if (triqui[5] == triqui[8] && triqui[2] == triqui[8])
                        ret=1;
                       if (triqui[6] == triqui[8] && triqui[7] == triqui[8])
                        ret=1;
            }

            if ((triqui[0] != '1' && triqui[1] != '2' && triqui[2] != '3' &&
                triqui[3] != '4' && triqui[4] != '5' && triqui[5] != '6' &&
                triqui[6] != '7' && triqui[7] != '8' && triqui[8] != '9'))
                    ret=2;
        return ret;
}