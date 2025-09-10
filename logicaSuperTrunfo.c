#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
        //carta 1
    char estado1;
    char codigo1[3];
    char cidade1[20];
    unsigned long int populacao1;
    int turisticos1;
    float area1;
    float pib1;
    float densidade1;
    float PPC1;
    float superpoder1;
    //carta 2
    char estado2;
    char codigo2[3];
    char cidade2[20];
    unsigned long int populacao2;
    int turisticos2;
    float area2;
    float pib2;
    float densidade2;
    float PPC2;
    float superpoder2;

    int AtributoEscolhido;
  
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("Digite o código do estado da primeira carta: ");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira cidade: ");
    scanf("%s", codigo1);

    printf("Digite o nome da primeira cidade: ");
    scanf("%s", cidade1);

    printf("Digite populaçao da primeira cidade: ");
    scanf("%ld", &populacao1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da primeira cidade: ");
    scanf("%d", &turisticos1);

    densidade1 = populacao1 / area1;
    PPC1 = pib1 / populacao1;

    printf("Digite o código do estado da segunda carta: ");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda cidade: ");
    scanf("%s", codigo2);

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população da segunda cidade: ");
    scanf("%ld", &populacao2);

    printf("Digite a aréa da segunda cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da segunda cidade: ");
    scanf("%d", &turisticos2);

    densidade2 = populacao2 / area2;
    PPC2 = pib2 / populacao2;

    printf("Esolha do atributo\n");
    printf("1. população\n");
    printf("2. área\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha: ");
    scanf("%d", &AtributoEscolhido);

    switch (AtributoEscolhido)
    {
    case 1:
        printf("Você escolheu população\n");
        if (populacao1 > populacao2){
        printf("%s VENCEU\n", cidade1);
        printf ("%s tem uma população de %ld habitantes, que é maior que %s que tem %d habitantes.\n", cidade1, populacao1, cidade2, populacao2); 
        } else {
        printf("%s VENCEU\n", cidade2);
        printf ("%s tem uma população de %ld habitantes, que é maior que %s que tem %d habitantes.\n", cidade2, populacao2, cidade1, populacao1);
        }
        
        break;
    case 2:
        printf("Você escolheu Área\n");
        if (area1 > area2){
        printf("%s VENCEU\n", cidade1);
        printf("%s tem uma área de %.f km², que é maior que %s, que possui uma área de %d km².", cidade1, area1, cidade2, area2);
        } else {
        printf("%s VENCEU\n", cidade2);
        printf ("%s tem uma área de %.f km², que é maior que %s, que possui uma área de %d km².", cidade2, area2, cidade1, area1);
        }
        break;

    case 3:
        printf("Você escolheu PIB\n");
        if (pib1 > pib2){
        printf("%s VENCEU\n", cidade1);
        printf("%s tem um PIB de R$ %.2f, que é maior que %s, com um PIB de R$ %.2f.", cidade1, pib1, cidade2, pib2);    
        } else {
        printf("%s VENCEU\n", cidade2);
        printf ("%s tem um PIB de R$ %.2f, que é maior que %s, com um PIB de R$ %.2f.", cidade2, pib2, cidade1, pib1);
        }
        break;

    case 4:
        printf("Você escolheu pontos turísticos\n");
        if (turisticos1 > turisticos2){
        printf("%s VENCEU\n", cidade1);
        printf("%s tem %d pontos turísticos, que é maior que %s, que possui %d", cidade1, turisticos1, cidade2, turisticos2);
        } else {
        printf("%s VENCEU\n", cidade2);
        printf ("%s tem %d pontos turísticos, que é maior que %s, que possui %d", cidade2, turisticos2, cidade1, turisticos1);
        }
        break;

    case 5:
        printf("Você escolheu densidade demográfica\n");
        if (densidade1 < densidade2){
        printf("%s VENCEU\n", cidade1);
        printf("%s tem uma densidade demográfica de %.2f habitantes por km², que é menor que %s, com uma densidade de %.2f habitantes por km²", cidade1, densidade1, cidade2, densidade2);
        } else {
        printf("%s VENCEU\n", cidade2);
        printf("%s tem uma densidade demográfica de %.2f habitantes por km², que é menor que %s, com uma densidade de %.2f habitantes por km²", cidade2, densidade2, cidade1, densidade1);
        }
        
        break;
    default:
        printf("Escolha inválida!\n");
        break;
    }



    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.


    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
