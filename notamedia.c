#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaração de variáveis
    float nota1, nota2, media;

    // Leitura
    printf("Digite duas notas (0 a 10): ");
    scanf("%f%f",&nota1,&nota2);

    // Cálculo
    media = (nota1 + nota2)/2;

    // Exibição
    printf("Com media de %.2f, o aluno esta ",media);

    if (0 <= media && media < 3)
        printf("reprovado\n");
    else if (3 <= media && media < 7)
        printf("em reavaliacao\n");
    else if (7 <= media && media <= 10)
        printf("aprovado\n");
    else printf("com nota invalida\n");

    return 0;
}
