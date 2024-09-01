#include <stdio.h>

int main() {
    int codigo_origem;
    float preco;

    // Receber o preço do produto
    printf("Digite o preço do produto: R$ ");
    scanf("%f", &preco);

    // Receber o código de origem
    printf("Digite o código de origem do produto: ");
    scanf("%d", &codigo_origem);

    // Determinar a procedência usando switch
    switch (codigo_origem) {
        case 1:
            printf("Procedência: Sul\n");
            break;
        case 2:
            printf("Procedência: Norte\n");
            break;
        case 3:
            printf("Procedência: Leste\n");
            break;
        case 4:
            printf("Procedência: Oeste\n");
            break;
        case 5:
        case 6:
            printf("Procedência: Nordeste\n");
            break;
        case 7:
        case 8:
        case 9:
            printf("Procedência: Sudeste\n");
            break;
        case 10 ... 20:
            printf("Procedência: Centro-oeste\n");
            break;
        case 21 ... 30:
            printf("Procedência: Nordeste\n");
            break;
        default:
            printf("Código de origem inválido!\n");
            break;
    }

    return 0;
}
