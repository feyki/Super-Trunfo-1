#include <stdio.h>
int main() {
char estado[1]; 
char codigo[3];
char nome[20];
int populacao;
float area;
float pib;
int pt;

printf("Insira Uma letra de A a H (representando um dos oito estados): ");
   scanf("%s", &estado);

printf("Insira a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
   scanf("%s", &codigo);

printf("Insira o nome da cidade: ");
   scanf("%s", &nome);

   printf("Insira o número de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("Insira a área da cidade em quilômetros quadrados: ");
     scanf("%f", &area);

    printf("Insira o PIB da cidade: ");
     scanf("%f", &pib);

     printf("Insira o número de Pontos Turísticos: ");
      scanf("%d", &pt);




printf("Carta 1\n");

printf("Estado: %s\n", estado);

printf("Código: %s\n", codigo);

printf("Cidade: %s\n", nome);

printf("População: %d\n", populacao);

printf("Área: %f\n", area);

printf("PIB: %f\n", pib);

printf("Número de Pontos Turísticos: %d\n", pt);


return 0;

}
