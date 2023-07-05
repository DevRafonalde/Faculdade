// Reverso do número. Faça uma função que retorne o reverso de um número inteiro informado. Por exemplo: 127 -> 721.

#include <stdio.h>

int numeroReverso(int numero) {
    int reverso = 0;

    while (numero != 0) {
        int digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero /= 10;
    }

    return reverso;
}

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    int reverso = numeroReverso(numero);

    printf("Reverso: %d\n", reverso);
}
