#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int numeros[5], i, par = 0, impar = 0, negativo = 0, maior = 0, menor = 99999, somapar = 0, somaimpar = 0, somageral = 0;
    float mediapar, mediageral;

    // Operação
    for (i = 0; i < 5; i++) {
       printf("Digite o %dº número: ", i + 1);
       scanf("%d", &numeros[i]);

       if (numeros[i] % 2 == 0) {
        par++;
        somapar += numeros[i];
       } else {
        impar++;
        somaimpar += numeros[i];
       }

       if (numeros[i] < 0) {
        negativo++;
       }

       if (numeros[i] > maior) {
        maior = numeros[i];
       }

       if (numeros[i] < menor) {
        menor = numeros[i];
       }

       somageral += numeros[i]; 

    }

    mediapar = somapar / (float) par;
    mediageral = somageral / (float) i;

    system("cls || clear");
   
   // Dados
   printf("\nExibindo os dados inseridos...\n");
   printf("\nQuantidade de números ìmpares: %d \n", impar);
   printf("Quantidade de números negativos: %d \n", negativo);
   printf("Maior número: %d \n", maior);
   printf("Menor número: %d \n", menor);
   printf("Média dos números pares: %.1f \n", mediapar);
   printf("Média geral dos números inseridos: %.1f \n", mediageral);

  return 0;

}
