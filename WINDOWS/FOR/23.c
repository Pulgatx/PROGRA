#include <math.h>
#include <stdio.h>

float cosenoh(float);

int main()
{
    float x, resultado = 0;

    printf("ingrese valor de x: ");
    scanf("%f", &x);

    resultado = cosenoh(x);

    printf("cosh(%.1f): %f", x, resultado);
    return 0;
}

float cosenoh(float x)
{
    float factorial = 1, total = 1, potencia = 2, resultado = 1;
    int veces = 1;

    for(veces=1;veces<=10;veces=veces+1)
    {
        for(factorial=1;factorial<=potencia;factorial=factorial+1)
            total = factorial * total;

        resultado = resultado + pow(x, potencia) / total;
        total = 1;
        potencia = potencia + 2;
    }

    return resultado;
}