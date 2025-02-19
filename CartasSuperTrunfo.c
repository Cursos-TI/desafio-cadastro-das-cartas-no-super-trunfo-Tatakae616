#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int populacao;
    int pontosturisticos;
    char nome[30];    
    char codigo[2];
    float PIB, area;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Qual o nome da cidade? %s\n", nome);
    scanf("%s", nome);

    printf("Qual o código? %s\n", codigo);
    scanf("%s", codigo);
    
    printf("Qual a população da cidade? %d\n", populacao);
    scanf("%d", &populacao);

    printf("Qual o PIB da cidade? %f\n", PIB);
    scanf("%f", &PIB);

    printf("Quantos pontos turísticos tem a cidade? %d\n", pontosturisticos);
    scanf("%i", &pontosturisticos);

    printf("Qual a área da cidade? %f\n", area);
    scanf("%f", &area);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    return 0;
}
