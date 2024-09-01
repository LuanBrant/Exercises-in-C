#include <stdio.h>

const char* categorizar_idade(int idade) {
    if (idade >= 5 && idade <= 7) {
        return "Infantil";
    } else if (idade >= 8 && idade <= 10) {
        return "Juvenil";
    } else if (idade >= 11 && idade <= 15) {
        return "Adolescente";
    } else if (idade >= 16 && idade <= 30) {
        return "Adulto";
    } else if (idade > 30) {
        return "Sênior";
    } else {
        return "Idade fora das categorias";
    }
}

int main() {
    int idade_nadador;
    
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade_nadador);
    
    const char* categoria = categorizar_idade(idade_nadador);
    printf("A categoria do nadador é: %s\n", categoria);
    
    return 0;
}
