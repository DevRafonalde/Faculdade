#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    int ganhou = false;
    int jogadas = 0;
    int jogador = 1;
    int posicao;
    int linha;
    int coluna;
    int vencedor = 0;

    char tabuleiro[3][3] = {
      {'1', '2', '3'},
      {'4', '5', '6'},
      {'7', '8', '9'}
    };

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    while (!ganhou && jogadas < 9) {
        printf("Jogador %d, escolha uma posição:\n > ", jogador);
        scanf("%d", &posicao);
        // A posição escolhida pelo usuário deverá ser baseada no esquema descrito acima na declaração da matriz
        // 1 2 3
        // 4 5 6
        // 7 8 9
        // Baseado nisso, esse cálculo abaixo consegue descobrir qual linha e qual coluna estamos observando
        linha = (posicao - 1) / 3;
        coluna = (posicao - 1) % 3;

        if (jogador == 1) {
            // Aqui o jogador 1 vai preencher a posicao com um X
            tabuleiro[linha][coluna] = 'X';
        } else {
            // Aqui o jogador 2 vai preencher a posicao com um O
            tabuleiro[linha][coluna] = 'O';
        }

        // Nesse laço eu verifico as linhas e colunas para ver se alguém ganhou e quem
        for (int i = 0; i < 3; i++) {
            if ((tabuleiro[i][0] == 'X' && tabuleiro[i][1] == 'X' && tabuleiro[i][2] == 'X') ||
                (tabuleiro[0][i] == 'X' && tabuleiro[1][i] == 'X' && tabuleiro[2][i] == 'X')) {
                vencedor = 1;
                ganhou = true;
            }
            if ((tabuleiro[i][0] == 'O' && tabuleiro[i][1] == 'O' && tabuleiro[i][2] == 'O') ||
                (tabuleiro[0][i] == 'O' && tabuleiro[1][i] == 'O' && tabuleiro[2][i] == 'O')) {
                vencedor = 2;
                ganhou = true;
            }
        }

        // Nesses 2 ifs eu verifico as diagonais para ver se alguém ganhou e quem
        if ((tabuleiro[0][0] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][2] == 'X') ||
            (tabuleiro[0][2] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][0] == 'X')) {
            vencedor = 1;
            ganhou = true;
        }

        if ((tabuleiro[0][0] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][2] == 'O') ||
            (tabuleiro[0][2] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][0] == 'O')) {
            vencedor = 2;
            ganhou = true;
        }

        jogadas++;
        if (jogador == 1) {
            jogador = 2;
        } else {
            jogador = 1;
        }

        system("clear");
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                printf("%c ", tabuleiro[i][j]);
            }
            printf("\n");
        }
    }

    if (vencedor == 0) {
        printf("----------------------------\n");
        printf("Empate!\n");
    } else {
        printf("----------------------------\n");
        printf("Parabéns! Jogador %d venceu!\n", vencedor);
    }

}