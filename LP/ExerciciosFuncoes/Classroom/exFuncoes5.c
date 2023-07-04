// Escreva uma função recursiva (ou seja, a função deve chamar ela mesma) que, dada uma
// string, determine se é um palíndromo ou não. A função deve retornar um inteiro representando
// um tipo lógico. Ou seja, se a string passada como parâmetro for palíndromo, a função deve
// retornar 1, senão, ela deve retornar 0.

#include <stdio.h>
#include <string.h>

int ePalindromo(char *str, int inicio, int fim) {
    if (inicio >= fim) {
        return 1; // Solução trivial: a string é um palíndromo
    }

    if (str[inicio] != str[fim]) {
        return 0; // Solução trivial: a string não é um palíndromo
    }

    return ePalindromo(str, inicio + 1, fim - 1); // Chamada recursiva
}

int main() {
    char minhaString[100];

    printf("Digite uma string: ");
    fgets(minhaString, sizeof(minhaString), stdin);

    // Aqui eu removo o caractere terminal pra não influenciar na recursão da função acima
    char *caractereTerminal = strchr(minhaString, '\n');
    if (caractereTerminal != NULL) {
        *caractereTerminal = '\0';
    }

    int tamanho = strlen(minhaString);
    int resultado = ePalindromo(minhaString, 0, tamanho - 1);

    if (resultado) {
        printf("A string é um palíndromo!\n");
    } else {
        printf("A string NÃO é um palíndromo!\n");
    }

    return 0;
}
