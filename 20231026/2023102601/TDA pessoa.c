#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    char dataNascimento[15];
    char cpf[15];
} Pessoa;

void preencherPessoa(Pessoa *pessoa) {
    printf("Nome da pessoa: ");
    scanf("%s", pessoa->nome);
    printf("Data de nascimento: ");
    scanf("%s", pessoa->dataNascimento);
    printf("CPF: ");
    scanf("%s", pessoa->cpf);
}

void imprimirPessoa(const Pessoa *pessoa) {
    printf("Nome: %s\n", pessoa->nome);
    printf("Data de Nascimento: %s\n", pessoa->dataNascimento);
    printf("CPF: %s\n", pessoa->cpf);
}

int main() {
    Pessoa *ponteiroPessoa = (Pessoa *)malloc(sizeof(Pessoa));

    if (ponteiroPessoa == NULL) {
        printf("Erro ao alocar memória.\n");
        return 0;
    }// Encerra o programa

    preencherPessoa(ponteiroPessoa);
    printf("\nDados da pessoa:\n");
    imprimirPessoa(ponteiroPessoa);

    free(ponteiroPessoa);
    return 0;
}
