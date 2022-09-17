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
	int veces=1;
	
    do 
	{
		if(veces%2==0)
	    resultado=resultado+pow((x-1),potencia)/potencia;
		else 
		resultado=resultado-(pow((x-1),potencia)/potencia);
		
        printf("%f\n",pow((x-1),potencia)/potencia);
		potencia=potencia+1;
	    veces=veces+1;
	}while(veces<=9);

    return resultado;
}