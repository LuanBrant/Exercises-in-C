#include <stdio.h>

int main() {
    float salario;

    // Solicita o salário do funcionário
    printf("Digite o salário do funcionário: R$ ");
    scanf("%f", &salario);

    // Verifica se o salário é inferior a R$ 500,00
    if (salario < 500.00) {
        // Aplica o reajuste de 30%
        salario = salario * 1.30;
        printf("Salário reajustado: R$ %.2f\n", salario);
    } else {
        // Exibe mensagem se não houver reajuste
        printf("Sem reajuste.\n");
    }

    return 0;
}
