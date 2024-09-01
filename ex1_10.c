#include <stdio.h>

int main() {
    float horas_extras, horas_faltas, H;
    float premio;

    // Receber o número de horas extras
    printf("Digite o número de horas extras: ");
    scanf("%f", &horas_extras);

    // Receber o número de horas faltas
    printf("Digite o número de horas que o funcionário faltou: ");
    scanf("%f", &horas_faltas);

    // Calcular o valor de H
    H = horas_extras - (2.0 / 3.0 * horas_faltas);

    // Determinar o valor do prêmio baseado no valor de H
    if (H >= 2400) {
        premio = 500.00;
    } else if (H >= 1800 && H < 2400) {
        premio = 400.00;
    } else if (H >= 1200 && H < 1800) {
        premio = 300.00;
    } else if (H >= 600 && H < 1200) {
        premio = 200.00;
    } else {
        premio = 100.00;
    }

    // Mostrar o valor do prêmio
    printf("O valor do prêmio é: R$ %.2f\n", premio);

    return 0;
}
