#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void palabras (char[]);
void inicio(char[],char[],char[]);
void design(int,char[],char[]);
void ahorcado(char [],char [],char[]);
int busqueda(char, char[], char[]);
void clear();
int verificar(char[]);

int main ()
{
  char pal_ale[30]="";
  char pal_aho[30]="";
  char letras[50]="LETRAS USADAS: ";
  inicio (pal_ale,pal_aho,letras);
  ahorcado(pal_ale,pal_aho,letras);
  return 0;
}
int verificar(char pal[])
{
  int ret=1;
  for(int i=0;pal[i]!=00;i=i+1)
  {
    if(pal[i]=='_')
      ret=0;
  }
  return ret;
}
void clear()
{
  if(system("cls")!=0)
    system("clear");

    return;
}
int busqueda(char letra, char pal[], char bus[])
{
  int ret=0;
  for(int i=0;pal[i]!=00;i=i+1)
  {
    if(pal[i]==letra)
    {
      bus[i]=letra;
      ret=1;
    }
  }
  return ret;
}
void ahorcado(char pal[],char bus[],char letras[])
{
  int intentos=0,print=0,contletras=15;
  char letra=0;
  while(intentos<7)
  {
    printf("INGRESA UNA LETRA: \n");
    letra=getche();
    printf("\n");
    print=busqueda(letra,pal,bus);
    if(print==1)
    {
      letras[contletras]=letra;
      design(intentos,bus,letras);
    }
    else
    {
      intentos=intentos+1;
      letras[contletras]=letra;
      design(intentos,bus,letras);
    }
    if(verificar(bus))
    {
      printf("!!GANASTE!! - fin del juego");
      return;
    }
    contletras=contletras + 1;
  }
  return;
}
void design(int opc,char pal[],char letras[])
{
  clear();
  printf("JUEGO AHORCADO\n");

  if (opc==0)
  {
    printf("+----+\n");
    printf("|         %s\n",pal);
    printf("|\n");
    printf("|\n");
    printf("|         %s\n",letras);
    printf("----\n");  
  }
  else if(opc==1)
  {
    printf("+----+\n");
    printf("|    0    %s\n",pal);
    printf("|\n");
    printf("|\n");
    printf("|         %s\n",letras);
    printf("----\n");
  }
  else if(opc==2)
  {
    printf("+----+\n");
    printf("|    0    %s\n",pal);
    printf("|   /\n");
    printf("|\n");
    printf("|         %s\n",letras);
    printf("----\n");
  }
  else if(opc==3)
  {
    printf("+----+\n");
    printf("|    0    %s\n",pal);
    printf("|   /|\n");
    printf("|\n");
    printf("|         %s\n",letras);
    printf("----\n");
  }
  else if(opc==4)
  {
    printf("+----+\n");
    printf("|    0    %s\n",pal);
    printf("|   /|%c\n",92);
    printf("|\n");
    printf("|         %s\n",letras);
    printf("----\n");
  }
  else if(opc==5)
  {
    printf("+----+\n");
    printf("|    0    %s\n",pal);
    printf("|   /|%c\n",92);
    printf("|    |\n");
    printf("|         %s\n",letras);
    printf("----\n");
  }
  else if(opc==6)
  {
    printf("+----+\n");
    printf("|    0    %s\n",pal);
    printf("|   /|%c\n",92);
    printf("|    |\n");
    printf("|   /     %s\n",letras);
    printf("----\n");
  }
  else if(opc==7)
  {
    printf("+----+\n");
    printf("|    0    %s\n",pal);
    printf("|   /|%c\n",92);
    printf("|    |\n");
    printf("|   / %c  %s\n",92, letras);
    printf("----\n");
    printf("!!PERDISTE!! - Intentalo la proxima...\n");
  }
  return;
}
void inicio(char pal[],char bus[],char letras[])
{
  palabras(pal);
  for(int i=0;pal[i]!=0;i=i+1)
    bus[i]='_';
  design(0,bus,letras);
  printf("\n");
  return;
}
void palabras (char pal[])
{
  srand (time (NULL));
  int opc = rand () % 10;
  if (opc == 0)
    strcpy (pal, "ola");
  else if (opc == 1)
    strcpy (pal, "pollito");
  else if (opc == 2)
    strcpy (pal, "murcielago");
  else if (opc == 3)
    strcpy (pal, "universidad");
  else if (opc == 4)
    strcpy (pal, "pereira");
  else if (opc == 5)
    strcpy (pal, "reloj");
  else if (opc == 6)
    strcpy (pal, "musculo");
  else if (opc == 7)
    strcpy (pal, "orfanato");
  else if (opc == 8)
    strcpy (pal, "numero");
  else if (opc == 9)
    strcpy (pal, "pajaro");

  return;
}