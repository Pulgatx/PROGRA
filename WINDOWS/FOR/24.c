#include <math.h>
#include <stdio.h>

float logn(float);

int main()
{
	float x,resultado=0;
	
	printf("ingrese un valor para x: ");
	scanf("%f",&x);
	
	resultado=logn(x);
	
	printf("ln: %f",resultado);
	return 0;
}

float logn(float x)
{
    float potencia=2,resultado=(x-1);
	int veces=0;
	
    for(veces=1;veces<=9;veces=veces+1) 
	{
		if(veces%2==0)
	    resultado=resultado+pow((x-1),potencia)/potencia;
		else 
		resultado=resultado-(pow((x-1),potencia)/potencia);
		potencia=potencia+1;

	}

    return resultado;
}