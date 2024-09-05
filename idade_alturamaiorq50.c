#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, alturaMaior50 = 0;
    float altura, soma = 0;
    printf("Idade:");
    scanf("%i", &idade);
    if(idade > 0){
    printf("Altura:");
    scanf("%f", &altura);
    }
    while(idade > 0)
    {
        if(idade >= 50)
        {
            soma += altura;
            alturaMaior50++;
        }
        printf("Idade:");
        scanf("%i", &idade);
        if(idade > 0){
            printf("Altura:");
            scanf("%f", &altura);
        }
    }
    printf("Media das alturas = %.2f\n", soma / alturaMaior50);


    return 0;
}
