#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;

    // Solicita as quatro notas do aluno
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    // Calcula a média aritmética das notas
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    // Exibe a média
    printf("\nMédia: %.2f\n", media);

    // Verifica se o aluno foi aprovado ou reprovado
    if (media >= 7) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
