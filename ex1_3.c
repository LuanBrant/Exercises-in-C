int main() {
    int ano_nascimento, ano_atual, idade;
    char aniversario;

    // Solicita o ano de nascimento da pessoa
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    // Define o ano atual
    ano_atual = 2024; // Exemplo: ano atual fixo

    // Calcula a idade inicial
    idade = ano_atual - ano_nascimento;

    // Pergunta se a pessoa já fez aniversário este ano
    printf("Você já fez aniversário este ano? (S/N): ");
    scanf(" %c", &aniversario);

    // Ajusta a idade se a pessoa não fez aniversário ainda
    if (aniversario == 'N' || aniversario == 'n') {
        idade -= 1;
    }

    // Imprime a idade da pessoa
    printf("Sua idade é: %d anos\n", idade);

    // Verifica se a pessoa pode dirigir
    if (idade >= 18) {
        printf("Pode dirigir\n");
    } else {
        printf("Não pode dirigir\n");
    }

    return 0;
}