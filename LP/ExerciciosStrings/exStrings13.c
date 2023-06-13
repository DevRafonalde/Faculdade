// Jogo da palavra embaralhada. Desenvolva um jogo em que o usuário tenha que adivinhar uma palavra que será mostrada com as letras embaralhadas. O programa terá uma lista de palavras lidas de um arquivo texto e escolherá uma aleatoriamente.
// O jogador terá seis tentativas para adivinhar a palavra. Ao final a palavra deve ser mostrada na tela, informando se o usuário ganhou ou perdeu o jogo.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_PALAVRA 50
#define MAX_TENTATIVAS 6

void embaralharPalavra(char *palavra) {
    int tamanho = strlen(palavra);
    int i;
    for (i = 0; i < tamanho - 1; i++) {
        // Gera um índice aleatório para trocar a letra atual com outra
        int j = i + rand() % (tamanho - i);
        // Realiza a troca
        char temp = palavra[j];
        palavra[j] = palavra[i];
        palavra[i] = temp;
    }
}

int main() {
    char palavras[100][MAX_PALAVRA];
    int numPalavras = 0;
    FILE *arquivo = fopen("palavras.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de palavras.\n");
        return 1;
    }

    // Lê as palavras do arquivo de texto e armazena no array "palavras"
    while (fgets(palavras[numPalavras], MAX_PALAVRA, arquivo) != NULL) {
        // Remove o caractere de nova linha do final de cada palavra
        palavras[numPalavras][strlen(palavras[numPalavras]) - 1] = '\0';
        numPalavras++;
    }

    fclose(arquivo);

    // Inicializa a semente do gerador de números aleatórios
    srand(time(NULL));
    // Escolhe um índice aleatório para selecionar uma palavra do array
    int indicePalavra = rand() % numPalavras;
    // Armazena a palavra original em uma variável separada
    char palavraOriginal[MAX_PALAVRA];
    strcpy(palavraOriginal, palavras[indicePalavra]);

    // Cria uma cópia embaralhada da palavra original
    char palavraEmbaralhada[MAX_PALAVRA];
    strcpy(palavraEmbaralhada, palavraOriginal);
    embaralharPalavra(palavraEmbaralhada);

    printf("Bem-vindo ao jogo da palavra embaralhada!\n");
    printf("Tente adivinhar a palavra correta.\n");
    printf("A palavra embaralhada é: %s\n", palavraEmbaralhada);

    int tentativas = 0;
    char palavraGuess[MAX_PALAVRA];
    while (tentativas < MAX_TENTATIVAS) {
        printf("Tentativa #%d: ", tentativas + 1);
        // Lê a palavra digitada pelo jogador
        fgets(palavraGuess, MAX_PALAVRA, stdin);
        // Remove o caractere de nova linha do final da palavra
        palavraGuess[strlen(palavraGuess) - 1] = '\0';

        // Verifica se a palavra digitada é igual à palavra original
        if (strcmp(palavraGuess, palavraOriginal) == 0) {
            printf("Parabéns! Você acertou a palavra!\n");
            return 0;
        } else {
            printf("Palavra incorreta. Tente novamente.\n");
            tentativas++;
        }
    }

    printf("Suas tentativas acabaram. A palavra correta era: %s\n", palavraOriginal);
    printf("Você perdeu o jogo!\n");

    return 0;
}
