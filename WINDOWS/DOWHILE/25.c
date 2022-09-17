#include <math.h>
#include <stdio.h>

float senox(float);

int main()
{
    float x = 0;

    printf("ingrese un valor para x: ");
    scanf("%f", &x);

    printf("sen: %f", senox(x));
    return 0;
}

float senox(float x)
{
    float factorial = 1, total = 1, potencia = 3, resultado = x;
    int veces = 1;

    do
    {
        do
        {
            total = factorial * total;
            factorial = factorial + 1;

        } while (factorial <= potencia);

        if (veces % 2 == 0)
            resultado = (pow(x, potencia) / total) + resultado;
        else
            resultado = resultado - (pow(x, potencia) / total);

        total = 1;
        potencia = potencia + 2;
        veces = veces + 1;
        factorial = 1;

    } while (veces <= 10);

    return resultado;
}