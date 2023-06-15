// Jogo de Forca. Desenvolva um jogo da forca. O programa terá uma lista de palavras lidas de um arquivo texto e escolherá uma aleatoriamente. O jogador poderá errar 6 vezes antes de ser enforcado.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

// A função contarLinhasArquivo recebe um ponteiro para um arquivo (FILE *arquivo) e retorna o número de linhas nesse arquivo.

// A variável linhas é inicializada com zero. Ela armazenará o número de linhas no arquivo.
// Um loop é executado até que o caractere retornado por fgetc(arquivo) seja EOF (end-of-file), indicando o final do arquivo.
// Dentro do loop, verificamos se o caractere atual é uma nova linha ('\n'). Se sim, contamos mais um ao número de linhas.
// Após o loop, o ponteiro do arquivo é resetado para o início usando a função fseek com SEEK_SET, garantindo que o arquivo possa ser lido novamente a partir do começo.
// Essa função é útil para determinar o número de palavras no arquivo (considerando que cada palavra está em uma linha difirente, relação 1 pra 1) e alocar a memória apropriada para armazenar as palavras.

int contarLinhasArquivo(FILE *arquivo) {
    int linhas = 0;
    char caractere;

    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == '\n') {
            linhas++;
        }
    }

    // Resetar o ponteiro do arquivo para o início
    fseek(arquivo, 0, SEEK_SET);

    return linhas;
}


// A função lerPalavrasArquivo recebe o ponteiro para o arquivo (FILE *arquivo) e o número de palavras a serem lidas (numPalavras) e retorna um ponteiro para um array de strings (char**) contendo as palavras lidas do arquivo.

// É alocado espaço na memória para o array palavras usando malloc. O número de palavras (numPalavras) é multiplicado pelo tamanho de um ponteiro para char (sizeof(char*)), garantindo espaço suficiente para armazenar as palavras.
// Uma variável linha é definida para armazenar temporariamente cada linha do arquivo. Ela é inicializada com tamanho 100 que é o limite de carateres de uma palavra.
// Um loop é executado até que fgets retorne NULL (indicando o final do arquivo) ou até que o contador atinja o número de palavras desejado (numPalavras, que é definido pela quantidade de linhas no arquivo).
// Dentro do loop, fgets lê uma linha do arquivo para a variável linha.
// Em seguida, o caractere de nova linha ('\n') é removido da linha lida, substituindo-o por '\0'. Isso garante que as palavras não contenham o caractere de nova linha no final.
// Espaço é alocado para a palavra atual em palavras[i] usando malloc, com tamanho igual ao comprimento da linha lida mais um espaço adicional para o caractere nulo.
// A função strcpy é usada para copiar a linha para palavras[i].
// O contador é incrementado.
// Após o loop, o array de palavras é retornado.
// Essa função lê as palavras do arquivo linha por linha, armazenando-as em um array de strings.
char** lerPalavrasArquivo(FILE *arquivo, int numPalavras) {
    char **palavras = (char**)malloc(numPalavras * sizeof(char*));
    char linha[100];
    int contador = 0;

    while (fgets(linha, 100, arquivo) != NULL && contador < numPalavras) {
        linha[strcspn(linha, "\n")] = '\0'; // Remover o caractere de nova linha
        palavras[contador] = (char*)malloc(strlen(linha) + 1);
        strcpy(palavras[contador], linha);
        contador++;
    }

    return palavras;
}

int main() {
    // Aqui eu começo o processo de verificar o arquivo de texto
    // A função fopen("palavrasEx11.txt", "r") serve para abrir o arquivo de nome "palavrasEx11.txt" no modo de leitura ("r"), existem outros modos descritor abaixo
    // "r" - Abre um arquivo para leitura. O arquivo deve existir.

    // "w" - Cria um arquivo vazio para escrita. Se um arquivo com o mesmo nome já existir, seu conteúdo será apagado e o arquivo será considerado um novo arquivo vazio.

    // "a" -  Anexa dados a um arquivo. Operações de escrita anexam os dados no final do arquivo. O arquivo é criado se não existir.

    // "r+" - Abre um arquivo para leitura e escrita. O arquivo deve existir.

    // "w+" - Cria um arquivo vazio para leitura e escrita.

    // "a+" - Abre um arquivo para leitura e anexação.
    FILE *arquivo = fopen("palavrasEx11.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    // Aqui eu encerro o programa caso o arquivo esteja vazio, se não, armazeno essas palavras em um vetor
    int numPalavras = contarLinhasArquivo(arquivo);

    if (numPalavras == 0) {
        printf("Arquivo vazio.\n");
        fclose(arquivo);
        return 1;
    }

    char **palavras = lerPalavrasArquivo(arquivo, numPalavras);

    fclose(arquivo);

    // Essas 2 linhas abaixo server para escolher uma palavra aleatória do arquivo de texto
    srand(time(NULL));
    int indice = rand() % numPalavras;

    // Copio a palavra selecionada para uma String do meu programa, que será a usada no jogo
    char palavraSecreta[100];
    strcpy(palavraSecreta, palavras[indice]);

    int tamanhoPalavra = strlen(palavraSecreta);
    char palavraDescoberta[100];
    // Essa função abaixo serve para fazer com que a minha string "palavraDescoberta" seja composta apenas por "_", mas do tamanho da palavra selecionada anteriormente
    memset(palavraDescoberta, '_', tamanhoPalavra);
    palavraDescoberta[tamanhoPalavra] = '\0';

    int tentativas = 0;
    int acertos = 0;
    char letra;

    printf("Jogo da Forca\n");
    printf("==============\n");

    while (tentativas < 6 && acertos < tamanhoPalavra) {
        printf("Palavra: %s\n", palavraDescoberta);
        printf("Tentativas restantes: %d\n", 6 - tentativas);
        printf("Digite uma letra: ");
        scanf("%c", &letra);
        // Aqui eu limpo o buffer da entrada para evitar bugs
        limparBufferEntrada();

        // Esse laço abaixo é o que verifica se a letra inserida existe na palavra (seja ela maiúscula ou minúscula)
        int letraEncontrada = 0;
        for (int i = 0; i < tamanhoPalavra; i++) {
            if (palavraSecreta[i] == tolower(letra)) {
                palavraDescoberta[i] = tolower(letra);
                acertos++;
                letraEncontrada = 1;
            }

            if (palavraSecreta[i] == toupper(letra)) {
                palavraDescoberta[i] = toupper(letra);
                acertos++;
                letraEncontrada = 1;
            }
        }

        if (!letraEncontrada) {
            tentativas++;
            printf("Letra incorreta. Tente novamente!\n");
        }

        printf("\n");
    }

    if (acertos == tamanhoPalavra) {
        printf("Parabéns, você acertou a palavra: %s\n", palavraSecreta);
    } else {
        printf("Você foi enforcado! A palavra correta era: %s\n", palavraSecreta);
    }
}
