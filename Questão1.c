#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome[5][200];
    int idade[5], l, maiorIdade = 0, menorIdade = 99999;
    float peso[5], altura[5], maiorAltura = 0, menorAltura = 9999, maiorPeso = 0, menorPeso = 999999;

    for (l = 0; l < 5; l++) {
        printf("\nInforme o %dº nome: ", l + 1);
        gets(nome[l]);
        printf("Informe a idade: ");
        scanf("%d", &idade[l]);
        printf("Informe o peso: ");
        scanf("%f", &peso[l]);
        printf("Informe a altura: ");
        scanf("%f", &altura[l]);

        if (altura[l] > maiorAltura)
        {
            maiorAltura = altura[l];
        }
        if (altura[l] < menorAltura)
        {
            menorAltura = altura[l];
        }

        if (idade[l] > maiorIdade)
        {
            maiorIdade = idade[l];
        }
        if (idade[l] < menorIdade)
        {
            menorIdade = idade[l];
        }

        if (peso[l] > maiorPeso)
        {
            maiorPeso = peso[l];
        }

        if (peso[l] < menorPeso)
        {
            menorPeso = peso[l];
        }

        fflush(stdin);

    }

    system("cls || clear");

    printf("\nExibindo dados informados...\n");

    for (l = 0; l < 5; l++) {
    printf("\nNome: %s \n", nome[l]);
    printf("Idade: %d anos \n", idade[l]);
    printf("Peso: %.1f kg \n", peso[l]);
    printf("Altura: %.2f cm \n", altura[l]);
    }

    printf("\nMaior altura: %.2f cm\n", maiorAltura);
    printf("Menor altura: %.2f cm\n", menorAltura);
    printf("Maior peso: %.2f kg\n", maiorPeso);
    printf("Menor peso: %.2f kg\n", menorPeso);
    printf("Maior idade: %d anos\n", maiorIdade);
    printf("Menor idade: %d anos\n", menorIdade);

    return 0;

}