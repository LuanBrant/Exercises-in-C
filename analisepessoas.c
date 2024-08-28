#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, den, sinal;
    float S, A, P, W;

    printf("Digite o valor de N: ");
    scanf("%d",&N);

    S = 0;
    den = 1;
    while (den <= N)
    {
        S = S + 1.0/den;
        den++;
    }
    printf("S = %.2f\n",S);


    A = 0;
    den = 1;
    while (den <= N)
    {
        if (den%2 == 1) // denominador �mpar
        {
            A = A + 1.0/den;
        }
        else
        {
            A = A - 1.0/den;
        }
        den++;
    }
    printf("A = %.2f\n",A);

    A = 0;
    den = 1;
    sinal = 1;
    while (den <= N)
    {
        A = A + sinal*1.0/den;
        sinal = sinal * (-1);
        den++;
    }
    printf("A = %.2f\n",A);


    P = 1;
    den = 1;
    while (den <= N)
    {
        P = P * 1.0/den;
        den++;
    }
    printf("P = %.2f\n",P);


    printf("W = %.2f\n",(S/P));


    return 0;
}