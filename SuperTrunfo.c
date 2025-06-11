#include <stdio.h>
int main()
{

   char estado, estado2;
   char codigo[3];
   char nome[20];
   int populacao;
   float area;
   float pib;
   int pt;

float soma1, soma2;
float c11;
float c21;
float c1;
float c2;
char *vencedor;
char *atributo1_nome, *atributo2_nome;

   char codigo2[3];
   char nome2[20];
   int populacao2;
   float area2;
   float pib2;
   int pt2;

   printf("Informações da Carta 1\n");

   printf("Insira Uma letra de A a H (representando um dos oito estados): ");
   scanf("%c", &estado);

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

   float densidade = populacao / area;
   float percapita = pib / populacao;

   float superpoder = (float)populacao + area + pib + pt + percapita + (1 / densidade);

   printf("-----------Dados da Carta 1----------\n");

   printf("Estado: %c\n", estado);

   printf("Código: %s\n", codigo);

   printf("Cidade: %s\n", nome);

   printf("População: %d\n", populacao);

   printf("Área: %.2f\n", area);

   printf("PIB: %.2f\n", pib);

   printf("Número de Pontos Turísticos: %d\n", pt);

   printf("O Super Poder de %s é: %.2f\n", nome, superpoder);

   printf("----------------------------------------------\n");

   printf("Informações Carta 2\n");

   printf("Insira Uma letra de A a H (representando um dos oito estados): ");
   scanf("%s", &estado2);

   printf("Insira a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
   scanf("%s", &codigo2);

   printf("Insira o nome da cidade: ");
   scanf("%s", &nome2);

   printf("Insira o número de habitantes da cidade: ");
   scanf("%d", &populacao2);

   printf("Insira a área da cidade em quilômetros quadrados: ");
   scanf("%f", &area2);

   printf("Insira o PIB da cidade: ");
   scanf("%f", &pib2);

   printf("Insira o número de Pontos Turísticos: ");
   scanf("%d", &pt2);
   

   float densidade2 = populacao2 / area2;
   float percapita2 = pib2 / populacao2;
   float superpoder2 = (float)populacao2 + area2 + pib2 + pt2 + percapita2 + (1 / densidade2);

   printf("-----------Dados da Carta 2----------\n");

   printf("Estado: %c\n", estado2);

   printf("Código: %s\n", codigo2);

   printf("Cidade: %s\n", nome2);

   printf("População: %d\n", populacao2);

   printf("Área: %.2f\n", area2);

   printf("PIB: %.2f\n", pib2);

   printf("Número de Pontos Turísticos: %d\n", pt2);

   printf("O Super Poder de %s é: %.2f\n", nome2, superpoder2);

   // COMPARAÇÃO
   printf("\n--- Comparações das Cartas ---\n");

int escolha1;
int escolha2;

   printf("\n----------Escolha o primeiro atributo para comparação-------\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. Densidade\n");
scanf("%d", &escolha1);

printf("\n----------Escolha o Segundo atributo para comparação (diferente do primeiro)-------\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. Densidade\n");
scanf("%d", &escolha2);

if (escolha1==escolha2)
{
    printf("ERRO: Os dois atributos são iguais");
     return 1;
}

switch (escolha1)
{
case 1:
    c1 = populacao;
    c2 = populacao2;
     atributo1_nome = "População";

    break;

    case 2:
    c1 = area;
    c2 = area2;
     atributo1_nome = "Área";

    break;

    case 3:
    c1 = densidade;
    c2 = densidade2;
     atributo1_nome = "Densidade";

    break;
}

switch (escolha2)
{    case 1:
    c11 = populacao;
    c21 = populacao2;
     atributo2_nome = "População";

    break;

    case 2:
    c11 = area;
    c21 = area2;
     atributo2_nome = "Área";

     break;

     case 3:
     c11 = densidade;
     c21 = densidade2;
      atributo2_nome = "Densidade";

}

soma1 = c1 + c11;
soma2 = c2 + c21;


if (soma1 > soma2)
    {
        vencedor = nome;
    }
    else if (soma2 > soma1)
    {
        vencedor = nome2;
    }
    else
    {
        vencedor = "Empate"; 
    }

    printf("\nResultados da Comparação:\n");
    printf("Carta 1 (%s): %.2f (%s) + %.2f (%s) = %.2f\n", nome, c1, atributo1_nome, c11, atributo2_nome, soma1);
    printf("Carta 2 (%s): %.2f (%s) + %.2f (%s) = %.2f\n", nome2, c2, atributo1_nome, c21, atributo2_nome, soma2);

    if (soma1 != soma2) {
        printf("\nO vencedor é: %s!\n", vencedor);
    } else {
        printf("\nO resultado é um empate!\n");
    }

    return 0; 
}

