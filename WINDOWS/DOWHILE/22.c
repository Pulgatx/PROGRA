#include <math.h>
#include <stdio.h>

float senh(float);

int main()
{
	float x=0,resultado=0;
	printf("ingrese valor de x: ");
	scanf("%f",&x);
	
	resultado=senh(x);
	
	printf("senh(%.1f): %f",x,resultado);
	return 0;
}

float senh(float x)
{
    float numero=3,factorial,total=1,potencia=3,resultado=x;
	int veces=1;
	
    do
	{
	 factorial=1;
	do
	{
	  total=factorial*total;
	  factorial=factorial+1;
	  
    }while(factorial<=numero);
    
		resultado=pow(x,potencia)/total+resultado;
		total=1;
		potencia=potencia+2;
		numero=numero+2;
		veces=veces+1;
		
	}while(veces<=10);

    return resultado;
}