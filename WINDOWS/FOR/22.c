#include <math.h>
#include <stdio.h>

float senh(float);

int main()
{
    float x = 0, resultado = 0;
    printf("ingrese valor de x: ");
    scanf("%f", &x);

    resultado = senh(x);

    printf("senh(%.1f): %f", x, resultado);
    return 0;
}

float senh(float x)
{
    float factorial = 0, total = 1, potencia = 3, resultado = x;
    int veces = 1;

    for (veces = 1; veces <= 10; veces = veces + 1)
    {
        for (factorial = 1; factorial <= potencia; factorial = factorial + 1)
            total = factorial * total;

        resultado = pow(x, potencia) / total + resultado;
        total = 1;
        potencia = potencia + 2;
    }

    return resultado;
}