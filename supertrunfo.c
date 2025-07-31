#include <stdio.h>

int main() {


    char Estado[12];
    char Codigo_da_Carta[4];
    char Cidade[10];
    int Populacao;
    float Area;
    float PIB;
    int Numero_de_Pontos_Turisticos;


printf("Digite o codigo da carta (ex: CE1): ");
scanf("%s", Codigo_da_Carta);
printf("Codigo da Carta: %s\n", Codigo_da_Carta);

printf("Digite o nome do estado: ");
scanf("%s", Estado);
printf("Estado: %s\n", Estado);

printf("Digite o nome da cidade: ");
scanf("%s", Cidade);
printf("Cidade: %s\n", Cidade);

printf("Digite a populacao da cidade: ");
scanf("%d", &Populacao);
printf("Populacao: %d Habitantes\n", Populacao);

printf("Digite a area da cidade: ");
scanf("%f", &Area);
printf("Area: %f Km²\n", Area);

printf("Digite o PIB da cidade: ");
scanf("%f", &PIB);
printf("PIB: %f Reais\n", PIB);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &Numero_de_Pontos_Turisticos);
printf("Numero de Pontos Turisticos: %d Pontos\n", Numero_de_Pontos_Turisticos);




return 0;
}

