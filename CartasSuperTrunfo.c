#include <stdio.h>

#define ESTADOS 8
#define CIDADES_POR_ESTADO 4

typedef struct {
    char codigo[4];
    char nome_da_cidade[40];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

void cadastrarCidade (Cidade *cidade){
    printf("\nCadastro da cidade %s\n", cidade -> codigo);
    printf("Escreva o nome da cidade: ");
    scanf("%s", cidade->nome_da_cidade);
    printf("Escreva a população: ");
    scanf("%d", &cidade->populacao);
    printf("Escreva a area em km^2: ");
    scanf("%f", &cidade->area);
    printf("Escreva o PIB (Bilhoes): ");
    scanf("%f", &cidade->pib);
    printf("Escreva quantos pontos turisticos tem na cidade: ");
    scanf("%d", &cidade->pontos_turisticos);
}

void exibircidade (Cidade cidade){
    printf("\nDados da cidade: %s\n", cidade.codigo);
    printf("Nome da cidade: %s\n", cidade.nome_da_cidade);
    printf("Populacao: %d\n", cidade.populacao);
    printf("Area da cidade: %.2f km^2\n", cidade.area);
    printf("PIB da cidade: %.2f Bilhoes\n", cidade.pib);
    printf("Quantidade de prontos turisticos: %d", cidade.pontos_turisticos);
}
int main(){
    Cidade cidades[ESTADOS * CIDADES_POR_ESTADO];
    char estados[ESTADOS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int i, j, index = 0;
    
    for (i = 0; i < ESTADOS; i++) {
        for (j = 1; j <= CIDADES_POR_ESTADO; j++){
            sprintf(cidades[index].codigo, "%c%02d", estados[i], j);
            cadastrarCidade(&cidades[index]);
            index++;
        }

    }
printf("\n--- DADOS DAS CIDADES CADASTRADAS ---\n");
for (i = 0; i < ESTADOS * CIDADES_POR_ESTADO; i++);
exibircidade (cidades[i]);

return 0;
}