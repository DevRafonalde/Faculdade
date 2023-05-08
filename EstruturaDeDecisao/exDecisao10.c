// Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N- Noturno. Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.

#include <stdio.h>

int main() {
    char turno;

    printf("Qual o turno que você estuda?\n");
    printf("Digite M para matutino, V para vespertino ou N para noturno\n");
    scanf("%c", &turno);

    if (turno == 'm' || turno == 'M') {
        printf("Bom dia!");
    } else if (turno == 'v' || turno == 'V') {
        printf("Boa tarde!");
    } else if (turno == 'n' || turno == 'N') {
        printf("Boa noite!");
    } else {
        printf("Valor inválido!");
    }
}