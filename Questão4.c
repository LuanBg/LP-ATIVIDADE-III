#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int numeros[5], i, par = 0, impar = 0, negativo = 0, maior = 0, menor = 99999, somapar = 0, somaimpar = 0, somageral = 0;
    float mediapar, mediageral;

    // Opera��o
    for (i = 0; i < 5; i++) {
       printf("Digite o %d� n�mero: ", i + 1);
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
   printf("\nQuantidade de n�meros �mpares: %d \n", impar);
   printf("Quantidade de n�meros negativos: %d \n", negativo);
   printf("Maior de n�mero: %d \n", maior);
   printf("Menor de n�mero: %d \n", menor);
   printf("M�dia dos n�meros pares: %.1f \n", mediapar);
   printf("M�dia geral dos n�meros inseridos: %.1f \n", mediageral);

  return 0;

}