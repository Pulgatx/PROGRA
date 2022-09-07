#include <stdio.h>

int alreves(int );

int main()
{
 int num;
 printf("Invertir numero: ");
 scanf("%i",&num);
 printf("El numero invertido es: %i\n",alreves(num));
 return 0;
}

int alreves(int num)
{
 int inv=0;
 for (int i=0;(num>0);i++)
 {
  inv=inv * 10 + (num % 10);
  num = num / 10;
 }
 return inv;
}