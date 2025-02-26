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
    char estado[30], nome[30], codigo[2];
    float PIB, area;    
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Em qual Estado está a cidade?\n");
    scanf(" %s", estado);

    printf("Qual o nome da cidade?\n");
    scanf("%s", nome);

    printf("Digite um código de A a H e um número de 1 a 8 para registrar a carta, como A1: \n");
    scanf("%s", codigo);
    
    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &PIB);

    printf("Quantos pontos turísticos tem a cidade?\n");
    scanf("%d", &pontosturisticos);

    printf("Qual a área da cidade?\n");
    scanf("%f", &area);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", nome);
    printf("Código: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("PIB: %f\n", PIB);
    printf("Pontos Turísticos: %d\n", pontosturisticos);
    printf("Área: %f\n", area);



    return 0;
}
