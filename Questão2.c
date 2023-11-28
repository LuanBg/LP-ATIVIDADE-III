#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define NUM_ALUNOS 5 // Constante para o n�mero de alunos
#define NUM_NOTAS 3 // Constante para o n�mero de notas

int main () {

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    char alunos[NUM_ALUNOS][500]; 
    float notas[NUM_ALUNOS][NUM_NOTAS], media [NUM_ALUNOS], somanotas = 0;
    int idades [NUM_ALUNOS], l, c; 

    for (l = 0; l < NUM_ALUNOS; l++) {
        printf("\nInforme o %d� nome: ", l + 1);
        fgets(alunos[l], 500, stdin); // Usando fgets para ler os nomes
        printf("Informe a idade: ");
        scanf("%d", &idades[l]);

        for (c = 0; c < NUM_NOTAS; c++) {
            printf("Digite sua %d� nota: ", c + 1);
            scanf("%f", &notas[l][c]);

            somanotas += notas[l][c];
        }

        media[l] = somanotas / (float) c;
        somanotas = 0;

        fflush(stdin);
        
    }

    system("cls || clear");

    printf("\nExibindo os dados dos alunos...\n");

    for (l = 0; l < NUM_ALUNOS; l++) {
        printf("\nNome do %d� aluno(a): %s \n", l + 1, alunos[l]);
        printf("Idade do %d� aluno(a): %d anos\n", l + 1, idades[l]);
        fflush(stdin);

        for (c = 0; c < NUM_NOTAS; c++) {
            printf("%d� Nota: %.1f \n", c + 1, notas[l][c]);
        }

        printf("M�dia do aluno(a): %.1f \n", media[l]);

        if (media[l] >= 7) {
            printf("Aprovado!\n");
        } else if (media[l] >= 5 ) {
            printf("Recupera��o!\n"); 
        } else {
            printf("Reprovado!\n");
        }
        
    }
    
    return 0;

}