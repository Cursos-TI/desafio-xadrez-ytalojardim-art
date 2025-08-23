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
    int direcao=0, direcao2 =0;      // variavel para armazenar qual a direção o usuario quer fazer.

    printf("escolha a peça para movimentar?\n\n");   // menu para escolher qual peça que rmovimentar
    printf("1 Torre\n");
    printf("2 Bispo\n");
    printf("3 Rainha\n");
    printf("4 Cavalo\n");
    scanf("%d", &peca);

    int movimento2 = 0;






    if(peca == 2) {                                                 // if-else para imprimir o menu de cada peça pois os movimentos sao distintos
        printf("!!Digite quantas casas deseja mover!!!\n");
        scanf("%d", &movimento);

        printf("para qual lado deseja mover?\n\n"); // usei if esle porque o movimento do bispo é diferente do movimento das demais peças
        printf("1 cima , direita \n");
        printf("2 cima, esquerda \n");
        printf("3 baixo, direita  \n");           // escolher a direção que deseja mover o bispo.
        printf("4 baixo, esquerda  \n");
        scanf("%d", &direcao);

    } else if (peca==4) {

        do {
            printf("Escolha qual direção a peça vai fazer 2 movimentos\n\n"); //escolher a direção que deseja mover o cavalo.
            printf("1 cima \n");
            printf("2 baixo \n");
            printf("3 direita \n");
            printf("4 esquerda \n");
            scanf("%d", &direcao);
        } while(direcao < 1 || direcao > 4);

        do {
            printf("Escolha qual direção a peça vai fazer 1 movimentos\n\n");
            printf("1 cima \n");
            printf("2 baixo \n");
            printf("3 direita \n");
            printf("4 esquerda \n");
            scanf("%d", &direcao2);
        } while(direcao2 < 1 || direcao2 > 4);
    }  else {
        printf("!!Digite quantas casas deseja mover!!!\n");
        scanf("%d", &movimento);

        printf("para qual lado deseja mover?\n\n"); //escolher a direção que deseja mover as demais peças.
        printf("1 cima\n");
        printf("2 baixo\n");
        printf("3 direita\n");
        printf("4 esquerda\n");
        scanf("%d", &direcao);
    }

    switch(peca) {                          // usei switch porque precisara escolher varias peças diferentes.

    case 1: {
        printf("torre\n\n");
        for(int torre = 1; torre <=movimento; torre++) {        // for para fazer a repetição de movimentos
            if(direcao == 1) {
                printf("cima %d\n", torre);
            } else if(direcao == 2) {
                printf("baixo %d\n", torre);
            } else if(direcao == 3) {
                printf("direita %d\n", torre);
            } else {
                printf("esquerda %d\n", torre);
            }
        }
        break;
    }
    case 2: {

        int bispo=1;

        printf("Bispo\n\n");
        while(bispo<=movimento) {               // while como estrutura de repetição achei mais viavel para bispo

            if(direcao == 1) {
                printf("cima, direita %d\n", bispo);
            } else if(direcao == 2) {
                printf("cima, esquerda %d\n", bispo);
            } else if(direcao == 3) {
                printf("baixo, direita %d\n", bispo);
            } else {
                printf("baixo, esquerda %d\n", bispo);
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
                printf("cima %d\n", rainha);
            } else if(direcao == 2) {
                printf("baixo %d\n", rainha);
            } else if(direcao == 3) {
                printf("direita %d\n", rainha);
            } else {
                printf("esquerda %d\n", rainha);
            }
            rainha++;
        } while (rainha <= movimento );
    }

    break;
    case 4: {
    int movimento_cavalo = 2;  // variavel para definir primeiro for como 2 porque nao conseguir colocar para escolher movimento, mesmo pesquisando.
    int movimento_cavalo2 = 1; // variavel para definir segundo for como 1 porque nao conseguir colocar para escolher movimento, mesmo pesquisando.

        for(int cavalo2=1; cavalo2 <= movimento_cavalo2; cavalo2++) {       // for aninhado para imprimir as retições das duas direções do cavalo
            for (int cavalo = 1; cavalo <= movimento_cavalo; cavalo++) {
                if (direcao == 1) {
                    printf("Cima %d \n", cavalo);       // if-else para depois de escolher a direçao, imprimir as retiçoes na direção escolhida
                } else if(direcao == 2) {
                    printf("Baixo %d \n", cavalo);
                } else if(direcao==3) {
                    printf("Direita %d  \n", cavalo);
                } else {
                    printf("Esquerda %d \n", cavalo);
                }

            }
            if(direcao2 == 1) {
                printf("Cima %d \n", cavalo2 );          // if-else para depois de escolher a direçao, imprimir as repetições na escolhida na direção 2.
            } else if(direcao2 == 2) {
                printf("Baixo %d \n", cavalo2 );
            } else if (direcao2 == 3) {
                printf("Direita %d \n", cavalo2 );
            } else {
                printf("Esquerda %d \n", cavalo2);
            }

        }
        break;
    }


    default: {
        printf("Opção invalida");
        break;
    }

    }

      
  return 0;
}
