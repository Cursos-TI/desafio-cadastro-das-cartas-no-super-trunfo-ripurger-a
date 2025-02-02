#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


int main() {
   
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
   char estado[40];  
    char cidade[40];   
    int populacao;
    float area;
    float pib;
    int pontos_turismo;
    float densidade_populacional;
    float pib_per_capita;
    char codigo[2];
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite a  cidade:");
    scanf("%s", &cidade);
    printf("insira o código:");
    scanf("%s", &codigo);
    printf("Digite o estado:");
    scanf ("%s", &estado);
    printf("Populacao: ");
    scanf("%d", &populacao);
    printf("Area (em km²): ");
    scanf("%f", &area);
    printf("Digite os pontos turísticos:");
    scanf("%d", &pontos_turismo);
    printf("Digite o PIB:");
    scanf("%f", &pib);

densidade_populacional = populacao / area ;
pib_per_capita = pib / area;
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
  printf ("DADOS DAS CARTAS PREENCHIDAS\n");
    printf("Cidade:%s\n", cidade);  
    printf("CODIGO:%s\n", codigo);
    printf("Estado:%s\n", estado); 
    printf("Populacao:%d\n", populacao);
    printf("Area:%f km²\n ", area);
    printf("pontos turísticos:%d\n", pontos_turismo);
printf("Densidade Populacional: %f\n", densidade_populacional);
printf("PIB per capita: %f\n", pib_per_capita);


    return 0;
}
