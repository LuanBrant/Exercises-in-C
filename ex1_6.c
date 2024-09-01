#include <stdio.h>

int main() {
    float a, b, raiz;

    // Solicita os coeficientes a e b ao usuário
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);

    // Verifica se o coeficiente a é diferente de zero
    if (a != 0) {
        // Calcula a raiz da equação
        raiz = -b / a;
        printf("A raiz da equação é: %.2f\n", raiz);
    } else {
        // Se a for zero, a equação não é do primeiro grau
        printf("Coeficiente 'a' não pode ser zero em uma equação do primeiro grau.\n");
    }

    return 0;
}