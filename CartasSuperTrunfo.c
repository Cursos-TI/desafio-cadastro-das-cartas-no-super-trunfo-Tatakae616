#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int populacao1;
    int pontosturisticos1;
    char estado[30]1, nome[30]1, codigo[2]1;
    float PIB1, area1;    
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Em qual Estado está a cidade?\n");
    scanf(" %s", estado1);

    printf("Qual o nome da cidade?\n");
    scanf("%s", nome1);

    printf("Digite um código de A a H e um número de 1 a 8 para registrar a carta, como A1: \n");
    scanf("%s", codigo1);
    
    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao1);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &PIB1);

    printf("Quantos pontos turísticos tem a cidade?\n");
    scanf("%d", &pontosturisticos1);

    printf("Qual a área da cidade?\n");
    scanf("%f", &area1);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", nome1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("PIB: %f\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Área: %f\n", area1);



    return 0;
}
