#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char mensagem_criptografada[100];
    int chave;
    char senha[5];

    printf("Digite a mensagem criptografada: ");
    fgets(mensagem_criptografada, 100, stdin);

    printf("Digite a senha para descriptografar a mensagem: ");
    scanf("%s", senha);

    if (strcmp(senha, "####") == 0) {
        printf("Digite a chave para descriptografar a mensagem: ");
        scanf("%d", &chave);

        int i;
        char *mensagem_descriptografada = (char*)malloc(strlen(mensagem_criptografada) * sizeof(char));

        for (i = 0; i < strlen(mensagem_criptografada); i++) {
            mensagem_descriptografada[i] = mensagem_criptografada[i] - chave;
        }

        printf("Mensagem descriptografada: %s\n", mensagem_descriptografada);

        free(mensagem_descriptografada);
    } else {
        printf("Senha incorreta!\n");
    }

    return 0;
}

