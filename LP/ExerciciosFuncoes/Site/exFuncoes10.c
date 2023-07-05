// Jogo de Craps. Faça um programa de implemente um jogo de Craps.
// O jogador lança um par de dados, obtendo um valor entre 2 e 12. Se, na primeira jogada, você tirar 7 ou 11, você um "natural" e ganhou.
// Se você tirar 2, 3 ou 12 na primeira jogada, isto é chamado de "craps" e você perdeu.
// Se, na primeira jogada, você fez um 4, 5, 6, 8, 9 ou 10,este é seu "Ponto".
// Seu objetivo agora é continuar jogando os dados até tirar este número novamente. Você perde, no entanto, se tirar um 7 antes de tirar este Ponto novamente.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int jogarDados() {
    return (rand() % 11) + 2;
}

int main() {
    // Para garantir que a sequência de números aleatórios seja diferente em cada execução
    srand(time(NULL));

    int valorDados = jogarDados();

    if (valorDados == 7 || valorDados == 11) {
        printf("Você tirou %d nos dados e ganhou, pois é um natural!\n", valorDados);
        return 0;
    } else if (valorDados == 2 || valorDados == 3 || valorDados == 12) {
        printf("Você tirou %d nos dados e perdeu, pois é um craps!\n", valorDados);
        return 0;
    }

    printf("Você tirou %d nos dados e agora precisa tirar o mesmo novamente antes de tirar um 7 para ganhar!\n", valorDados);

    do {
        int valorDados2 = jogarDados();

        if (valorDados2 == 7) {
            printf("Você tirou %d nos dados e perdeu!\n", valorDados2);
            return 0;
        } else if (valorDados2 == valorDados) {
            printf("Você tirou %d nos dados e ganhou!\n", valorDados2);
            return 0;
        } else {
            printf("Você tirou %d nos dados e deve jogar novamente!\n", valorDados2);
        }
    } while (true);
}