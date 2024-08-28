#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaração de variáveis
    float salario, gratif, imposto;

    // Leitura
    printf("Digite seu salario R$ ");
    scanf("%f",&salario);

    // Calculos
    imposto = 0.07*salario;

    if (salario <= 350)
    {
        gratif = 100;
    }
    else if (350 < salario && salario < 600)
    { gratif = 75; }
    else if (600 <= salario && salario <= 900)
        gratif = 50;
    else if (salario > 900) gratif = 35;

    // Exibição
    printf("O salario final eh R$ %.2f\n",salario + gratif - imposto);
    //salario = salario + gratif - imposto;
    //printf("O salario final eh R$ %.2f\n",salario);

    return 0;
}