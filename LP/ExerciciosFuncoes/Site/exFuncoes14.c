// Quadrado mágico. Um quadrado mágico é aquele dividido em linhas e colunas, com um número em cada posição e no qual a soma das linhas, colunas e diagonais é a mesma. Por exemplo, veja um quadrado mágico de lado 3, com números de 1 a 9:

// 8  3  4 
// 1  5  9
// 6  7  2
// Elabore uma função que identifica e mostra na tela todos os quadrados mágicos com as características acima.
// Dica: produza todas as combinações possíveis e verifique a soma quando completar cada quadrado. Usar um vetor de 1 a 9 parece ser mais simples que usar uma matriz 3x3.

#include <stdio.h>
#include <stdbool.h>

// Função para imprimir um quadrado mágico
void imprimirQuadrado(int quadrado[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", quadrado[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Função para verificar se um quadrado é mágico
bool verificarQuadradoMagico(int quadrado[3][3]) {
    int soma = 0;

    // Verificar a soma das linhas
    for (int i = 0; i < 3; i++) {
        int linha = 0;
        for (int j = 0; j < 3; j++) {
            linha += quadrado[i][j];
        }

        if (i == 0) {
            soma = linha;
        } else if (linha != soma) {
            return false;
        }
    }

    // Verificar a soma das colunas
    for (int j = 0; j < 3; j++) {
        int coluna = 0;
        for (int i = 0; i < 3; i++) {
            coluna += quadrado[i][j];
        }

        if (coluna != soma) {
            return false;
        }
    }

    // Verificar a soma da diagonal principal
    int diagonalPrincipal = 0;
    for (int i = 0; i < 3; i++) {
        diagonalPrincipal += quadrado[i][i];
    }

    if (diagonalPrincipal != soma) {
        return false;
    }

    // Verificar a soma da diagonal secundária
    int diagonalSecundaria = 0;
    for (int i = 0; i < 3; i++) {
        diagonalSecundaria += quadrado[i][2 - i];
    }

    if (diagonalSecundaria != soma) {
        return false;
    }

    // O quadrado é mágico
    return true;
}


// A função gerarPermutacoes utiliza recursão para gerar todas as permutações possíveis dos números de 1 a 9 e preenche as posições do quadrado mágico.
// A cada chamada recursiva, uma posição do quadrado é preenchida com um número que ainda não foi utilizado.
// Quando todas as posições são preenchidas, a função verifica se o quadrado é mágico e, se for, o imprime na tela.
void gerarPermutacoes(int numeros[], int tamanho, int posicao, int quadrado[3][3], bool usado[]) {
    // Se todas as posições do quadrado foram preenchidas
    if (posicao == tamanho) {
        // Verificar se o quadrado é mágico
        if (verificarQuadradoMagico(quadrado)) {
            // Imprimir o quadrado mágico
            imprimirQuadrado(quadrado);
        }
        return;
    }

    // Gerar todas as permutações possíveis para a posição atual
    for (int i = 0; i < tamanho; i++) {
        if (!usado[i]) {
            usado[i] = true;
            quadrado[posicao / 3][posicao % 3] = numeros[i];
            gerarPermutacoes(numeros, tamanho, posicao + 1, quadrado, usado);
            usado[i] = false;
        }
    }
}

// Função principal
int main() {
    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int quadrado[3][3];
    bool usado[9] = {false};

    printf("Quadrados magicos de lado 3:\n");

    // Gerar todas as permutações possíveis
    gerarPermutacoes(numeros, 9, 0, quadrado, usado);

}
