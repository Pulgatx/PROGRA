#include <stdio.h>
#include <math.h>

float e(int);

int main()
{
    int x=0;
    float resultado=0;
    printf("ingrese un valor para x: ");
	scanf("%i",&x);
	
    resultado=e(x);

    printf("el resultado de e^%i es: %f ",x,resultado);
	return 0;
}
float e(int x)
{
    int potencia,factorial=1, veces=10;
	float resultadoe=1;
	
	
	potencia=1;
	
	do 
	{
     factorial=factorial*potencia;
	 resultadoe=resultadoe+pow(x,potencia)/factorial;
	 potencia=potencia+1;
	 
	}while(potencia<=veces);
	
	return resultadoe;
}