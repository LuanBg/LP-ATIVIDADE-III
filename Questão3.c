#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int codigo, l = 0, c = 0;
    char nomes[250][250], numero[250][250];

    // Operação
    do {
        printf("QUAL OPÇÃO VOCÊ DESEJA?\n");
        printf("1 - Adicionar um número \n2 - Encerrar programa \n");
        printf("Escolha uma das opções: ");
        scanf("%d", &codigo);

        switch (codigo) {
        case 1:
            fflush(stdin);
            printf("\nInforme o nome para contato: ");
            gets(nomes[c]);
            printf("Informe o número de contato: ");
            scanf("%s", &numero[c]);
            printf("\n");

            c++;

            break;
        case 2:
            system("cls || clear");
            for (l = 0; l < c; l++) {
                printf("LISTA TELEFÔNICA\n");
                printf("%dº Contato\n", l + 1);
                printf("Nome: %s\n", nomes[l]);
                printf("Número: %s\n", numero[l]);
                printf("\n");
            }

            break;

        }

    } while (codigo == 1);

    return 0;

}