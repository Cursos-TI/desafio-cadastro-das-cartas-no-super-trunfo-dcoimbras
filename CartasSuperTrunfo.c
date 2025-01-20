#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
   
    int populacao;
    float area;
    int pib;
    int pontos_turisticos;

printf("Digite a populacao \n");
scanf("%d \n", populacao);
printf("%d \n", populacao);
printf("Digite a area \n");
scanf("%f", area);
printf("Digite o PIB \n");
scanf("%d", pib);
printf("digite a quantidade de pontos turisticos \n");
scanf("%d", pontos_turisticos);
printf("Cartas cadastrada com sucesso! \n");

printf("São Paulo cod A01: População: %d" " - Area: %d" " - PIB: %d" " - Pontos Turisticos: %d", populacao, area, pib, pontos_turisticos);



return 0;
}
    

