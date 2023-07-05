// Desenha moldura.
// Construa uma função que desenhe um retângulo usando os caracteres ‘+’ , ‘−’ e ‘| ‘. Esta função deve receber dois parâmetros, linhas e colunas, sendo que o valor por omissão é o valor mínimo igual a 1 e o valor máximo é 20.
// Se valores fora da faixa forem informados, eles devem ser modificados para valores dentro da faixa de forma elegante.

#include <stdio.h>

void desenharRetangulo(int linhas, int colunas) {
    // Verificar e ajustar os valores de linhas e colunas
    if (linhas < 1) {
        linhas = 1;
    } else if (linhas > 20) {
        linhas = 20;
    }

    if (colunas < 1) {
        colunas = 1;
    } else if (colunas > 20) {
        colunas = 20;
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i == 0 || i == linhas - 1 || j == 0 || j == colunas - 1)
                printf("+");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main() {
    int linhas, colunas;

    // Solicitar ao usuário o número de linhas e colunas
    printf("Informe o número de linhas (1-20): ");
    scanf("%d", &linhas);

    printf("Informe o número de colunas (1-20): ");
    scanf("%d", &colunas);

    desenharRetangulo(linhas, colunas);
}
