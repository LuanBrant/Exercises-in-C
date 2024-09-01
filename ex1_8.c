#include <stdio.h>

int main() {
    char sexo;
    float altura, peso_ideal;

    // Receber a altura da pessoa
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    // Receber o sexo da pessoa
    printf("Digite o sexo (H para homem, M para mulher): ");
    scanf(" %c", &sexo);

    // Calcular o peso ideal de acordo com o sexo
    if (sexo == 'H' || sexo == 'h') {
        peso_ideal = (72.7 * altura) - 58.0;
    } else if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo invalido!\n");
        return 1;
    }

    // Mostrar o peso ideal
    printf("O peso ideal e: %.2f kg\n", peso_ideal);

    return 0;
}
