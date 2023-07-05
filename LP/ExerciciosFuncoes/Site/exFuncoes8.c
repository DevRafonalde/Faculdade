// Faça uma função que informe a quantidade de dígitos de um determinado número inteiro informado.

#include <stdio.h>

int getDigitos(int numero) {
    int digitos = 1;
    while (numero > 1) {
        digitos++;
        numero /= 10;
    }
    
    return digitos;
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Esse número possui %d dígitos", getDigitos(numero));
}
