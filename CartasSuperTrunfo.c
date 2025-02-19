#include <stdio.h>
/* 
Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações
Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
População: O número de habitantes da cidade. Tipo: int
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
PIB: O Produto Interno Bruto da cidade. Tipo: float
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
*/

#define max_cartas 36 //numero maximo de cartas por jogo

char Codigos_cartas[max_cartas][5]; //array que armazena total de cartas
int total_cartas = 0; //contador de cartas cadastradas

//CADASTRANDO
void cadastro_do_codigo() {
    if (total_cartas >= max_cartas) {
        printf("Limite de cartas atingido!\n");
        return;
    }

    char estado;
    int carta;

    printf("\n--- REGISTRO DAS CARTAS ---\n");
    printf("Insira a letra do estado (A-H): ");
    scanf(" %c", &estado); //ESPAÇO ANTES DO %C PARA NÂO HAVER ERROS COM BUFFER

    printf("Insira o numero da carta (1-4): ");
    scanf("%d", &carta);

    if (carta < 1 || carta > 4) {
        printf("O numero inserido não está entre os numeros permitidos (1-4)");
        return;
    }
    
    //CODIGO PARA CADASTRAR AS CARTAS NO ARRAY
    sprintf (Codigos_cartas[total_cartas], "%c%02d", estado, carta);
    total_cartas++;

    printf("Carta cadastrada com sucesso!\n");
}  

//LISTANDO AS CARTAS
void listar_cartas(){
    if (total_cartas == 0){
        printf("Nenhuma carta foi registrada. \n");
        return;
    }

    printf("\n--- CARTAS REGISTRADAS ---\n");
    for (int i = 0; i < total_cartas; i++) {
        printf("Carta %d: %s\n",i + 1, Codigos_cartas[i]);
    }
}
