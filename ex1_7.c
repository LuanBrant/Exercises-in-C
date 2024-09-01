#include <stdio.h>

int main() {
    int tipo_investimento;
    float valor_investimento, valor_corrigido, rendimento_mensal;

    // Receber o tipo de investimento
    printf("Digite o tipo de investimento (1 para Poupanca, 2 para Fundos de Renda Fixa): ");
    scanf("%d", &tipo_investimento);

    // Receber o valor do investimento
    printf("Digite o valor do investimento: ");
    scanf("%f", &valor_investimento);

    // Definir o rendimento de acordo com o tipo de investimento
    if (tipo_investimento == 1) {
        rendimento_mensal = 0.03;  // 3% para Poupança
    } else if (tipo_investimento == 2) {
        rendimento_mensal = 0.04;  // 4% para Fundos de Renda Fixa
    } else {
        printf("Tipo de investimento invalido!\n");
        return 1;
    }

    // Calcular o valor corrigido
    valor_corrigido = valor_investimento * (1 + rendimento_mensal);

    // Mostrar o valor corrigido
    printf("O valor corrigido apos um mes e: R$%.2f\n", valor_corrigido);

    return 0;
}
