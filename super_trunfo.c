#include <stdio.h>
int main(){
    // Variáveis para cada atributo da cidade
    // Atributos da primeira carta
    char estado;
    char codigodacidade[10];
    char nomedacidade[20]; 
    int populacao;
    float area;
    float pib;
    int numerodepontosturisticos;
    float densidadepopulacional;
    float pibpercapita;

    // Atributos da segunda carta
    char estado2;
    char codigodacidade2[10];
    char nomedacidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int numerodepontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;

    //Cadastro da primeira carta:
    printf("Digite o Estado: \n");
    scanf("%c", &estado);

    printf("Digite o código da cidade: \n");
    scanf("%s", &codigodacidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade);

    printf("Digita a população: \n");
    scanf("%d", &populacao);

    printf("Digita a área: \n");
    scanf("%f", &area);

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digito o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos);

    //Calculo da densidade populacional e PIB per capita da primeira carta

    densidadepopulacional = (float)populacao / area;
    pibpercapita = pib *1e9 / (float)populacao;

    //Cadastro da segunda carta:
    printf("\nDigite o Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade: \n");
    scanf("%s", &codigodacidade2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade2);

    printf("Digita a população: \n");
    scanf("%d", &populacao2);

    printf("Digita a área: \n");
    scanf("%f", &area2);

    printf("Digite o pib: \n");
    scanf("%f", &pib2);

    printf("Digito o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos2);

    //Calculo da densidade populacional e PIB per capita da segundo carta

    densidadepopulacional2 = (float)populacao2 / area2;
    pibpercapita2 = pib2 * 1e9 / (float)populacao2;

    //Exibindo os dados da primeira carta:
    printf("\n     Carta 1   \n");
    printf("Estado: %c \n", estado);
    printf("Código da cidade: %c %s \n",estado, codigodacidade);
    printf("Nome da cidade: %s \n", nomedacidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f KM²\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Número de pontos Turísticos: %d \n", numerodepontosturisticos);
    printf("Densidade populacional: %.2f Hab/km²\n", densidadepopulacional);
    printf("PIB per capita: %.2f reais\n",pibpercapita);
    printf("\n");

    //Exibindo os dados da segunda carta:
    printf("\n     Carta 2    \n");
    printf("Estado: %c \n", estado2);
    printf("Código da cidade: %c %s \n",estado2, codigodacidade2);
    printf("Nome da cidade: %s \n", nomedacidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f KM²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de pontos Turísticos: %d \n", numerodepontosturisticos2);
    printf("Densidade populacional: %.2f Hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n",pibpercapita2);

    return 0;
}