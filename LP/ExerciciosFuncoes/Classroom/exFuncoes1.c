// Receba uma string e troque todos os espaços por '-'. Por exemplo, dada a string "O gato dormiu.", a função deve retornar a string "O-gato-dormiu.".

#include <stdio.h>
#include <string.h>

void trocaEspacos(char *frase) {
    for (int i = 0; i < strlen(frase) - 1; i++) {
        if (frase[i] == ' ') {
            frase[i] = '-';
        }
    }
}

int main() {
    char frase[200];
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    trocaEspacos(frase);

    printf("%s\n", frase);
}