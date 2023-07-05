// Embaralha palavra. Construa uma função que receba uma string como parâmetro e devolva outra string com os carateres embaralhados.
// Por exemplo: se função receber a palavra python, pode retornar npthyo, ophtyn ou qualquer outra combinação possível, de forma aleatória.
// Padronize em sua função que todos os caracteres serão devolvidos em caixa alta ou caixa baixa, independentemente de como foram digitados.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

char* embaralharPalavra(char* palavra) {
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

    for (int i = 0; i < strlen(palavra) - 1; i++) {
        palavra[i] = tolower(palavra[i]);
    }
    

    return palavra;
}

int main() {
    srand(time(NULL));
    char palavra[200];

    printf("Insira uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    // Remover o caractere de nova linha da string
    palavra[strcspn(palavra, "\n")] = '\0';

    printf("%s", embaralharPalavra(palavra));
}