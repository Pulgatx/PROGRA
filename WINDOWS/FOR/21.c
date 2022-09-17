#include <math.h>
#include <stdio.h>

float coseno(float);

int main()
  {
	float resultado=0;
	float x=0;
	printf("ingrese valor de x: ");
	scanf("%f",&x);

	resultado=coseno(x);

	printf("cos(%.1f): %f",x,resultado);
	return 0;
}

float coseno(float x)
{
    float factorial=1,total=1,potencia=2,resultado=1;
	int veces=1;
    for(veces=1;veces<=10;veces=veces+1)
	{
       	for(factorial=1;factorial<=potencia;factorial=factorial+1)
	     total=factorial*total;
        
		if(veces%2==0)
		 resultado=(pow(x,potencia)/total)+resultado;
		else 
		 resultado=resultado-(pow(x,potencia)/total);
		 
		 total=1;
		 potencia=potencia+2;
	}
	
    return resultado;
}