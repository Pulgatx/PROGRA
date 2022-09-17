#include <stdio.h>

void numeros();
int main()
{
	numeros();
	return 0;
}
void numeros()
{
	int numeros[76], i, mayor, menor, a = 0, b = 0;
	float n = 0, suma = 0;
	for (i = 0; i < 75; i++)
	{
		printf("ingrese numero %d\n", i + 1);
		scanf("%d", &numeros[i]);

		mayor = numeros[0];
		menor = numeros[0];

		if (numeros[i] > mayor)
			mayor = numeros[i];

		if (numeros[i] < menor)
			menor = numeros[i];

		if (numeros[i] > 150)
			a = a + 1;

		if (numeros[i] < 0)
			b = b + 1;

		if (numeros[i] > 0)
		{
			n = n + 1;
			suma = suma + numeros[i];
		}
	}
	float promedio = (suma / n);
	printf("\nnumeros mayores a 150:  %i \n", a);
	printf("El mayor es %d\n", mayor);
	printf("El menor es %d\n", menor);
	printf("cantidad de numeros negativos: %i\n", b);
	printf("el promedio de los numeros positivos es: %f", promedio);
	return 0;
}
