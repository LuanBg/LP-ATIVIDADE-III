#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    char nomeProduto[99][200];
    float preco[99], totalVendas = 0;
    int quantidade[99], l = 0, codigo = 0;

    // Operação
    do {
        printf("\nLOJA\n");
        printf("1- Para adicionar venda\n");
        printf("2- Para exibir total de vendas\n");
        printf("Informe o código desejado: ");
        scanf("%d", &codigo);
        printf("");

        if (codigo == 1) {
            printf("\nDigite o nome do produto: ");
            scanf("%s", &nomeProduto[l]);

            printf("Digite o valor do produto: ");
            scanf("%f", &preco[l]);

            printf("Digite a quantidade do produto: ");
            scanf("%d", &quantidade[l]);

            totalVendas = totalVendas + preco[l] * quantidade[l];
            l++;

        } else if (codigo == 2) {
            printf("\nTotal de vendas: R$ %.1f\n", totalVendas);
        }

    } while (codigo == 1);
 
    return 0;

}