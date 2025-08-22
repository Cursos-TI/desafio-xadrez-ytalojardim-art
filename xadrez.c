#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    int peca = 0;       // variavel para armazenar qual a peça o usuario quer movimentar.
    int movimento = 0;  // variavel para armazenar quantos movimento o usuario quer fazer.
    int direcao=0;      // variavel para armazenar qual a direção o usuario quer fazer.

    printf("Escolha a peça para movimentar\n\n");   // menu para escolher qual peça que rmovimentar
    printf("1 Torre\n");
    printf("2 Bispo\n");
    printf("3 Rainha\n");
    scanf("%d", &peca);

    printf("Quantas casas deseja mover\n\n"); // escolher quantas casas deseja mover
    scanf("%d", &movimento);

    if(peca == 2) {
        printf("Para qual lado deseja mover\n\n"); // usei if esle porque o movimento do bispo é diferente do movimento das demais peças
        printf("1 Cima, Direita\n");
        printf("2 Cima, Esquerda\n");
        printf("3 Baixo, Direita \n");           // escolher a direção que deseja mover o bispo.
        printf("4 Baixo, Esquerda\n");
        scanf("%d", &direcao);

    } else {
        printf("Para qual lado deseja mover\n\n"); //escolher a direção que deseja mover as demais peças.
        printf("1 Cima\n");
        printf("2 Baixo\n");
        printf("3 Direita\n");
        printf("4 Esquerda\n");
        scanf("%d", &direcao);
    }
    switch(peca) {                          // usei switch porque precisara escolher varias peças diferentes.

    case 1: {
        printf("Torre\n\n");
        for(int torre = 1; torre <=movimento; torre++) {        // for para fazer a repetição de movimentos
            if(direcao == 1) {
                printf("Cima %d\n", torre);
            }else if(direcao == 2){
                printf("Baixo %d\n", torre);
            }else if(direcao == 3){
                printf("Direita %d\n", torre);
            }else{
                printf("Esquerda %d\n", torre);
            }
        }

        break;
        case 2: {

        int bispo=1;

            printf("Bispo\n\n");
            while(bispo<=movimento) {               // while como estrutura de repetição achei mais viavel para bispo

            if(direcao == 1){
                printf("Cima, Direita %d\n", bispo);
            }else if(direcao == 2){
                printf("Cima, Esquerda %d\n", bispo);
            }else if(direcao == 3){
                printf("Baixo, Direita %d\n", bispo);
            }else{
                printf("Baixo, Esquerda %d\n", bispo);
            }
                bispo++;
            }
        }

        break;
        case 3: {

            int rainha=1;

            printf("Rainha\n\n");
            do {                                     // DO While como estrutura de repetição achei mais viavel para rainha

            if(direcao == 1) {
                printf("Cima %d\n", rainha);
            }else if(direcao == 2){
                printf("Baixo %d\n", rainha);
            }else if(direcao == 3){
                printf("Direita %d\n", rainha);
            }else{
                printf("Esquerda %d\n", rainha);
            }
                rainha++;

            } while(rainha<=movimento);


        }
        break;
        default:{
            printf("Opção invalida");
        }
    }
    }
        
  return 0;
}
