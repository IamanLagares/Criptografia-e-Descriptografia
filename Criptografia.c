#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void criptografar(char *mensagem, int chave) {
    int i;
    char *mensagem_criptografada = (char*)malloc(strlen(mensagem) * sizeof(char));

    for (i = 0; i < strlen(mensagem); i++) {
        mensagem_criptografada[i] = mensagem[i] + chave;
    }

    printf("Mensagem criptografada: %s\n\n", mensagem_criptografada);

    free(mensagem_criptografada);
}

int main() {
    int opcao;
    char mensagem[100];
    int chave;

    do {
        printf("=== MENU ===\n");
        printf("1. Criptografar mensagem\n");
        printf("2. Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("\nDigite a mensagem a ser criptografada: ");
                getchar();
                fgets(mensagem, 100, stdin);

                printf("Digite a chave para criptografar a mensagem: ");
                scanf("%d", &chave);

                criptografar(mensagem, chave);
                break;
            case 2:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                break;
        }

    } while(opcao != 2);

    return 0;
}

