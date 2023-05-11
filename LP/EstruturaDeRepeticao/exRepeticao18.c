#include <stdio.h>

int main() {
    int menorNumero;
    int maiorNumero;
    int numero;
    int soma = 0;
    int tamanho;

    printf("Quantos números terão no conjunto?\n");
    scanf("%d", &tamanho);

    printf("Digite o 1º número:\n");
    scanf("%d", &numero);
    maiorNumero = numero;
    menorNumero = numero;
    for (int i = 0; i < tamanho - 1; i++) {
        printf("Digite o %dº número:\n", i + 2);
        scanf("%d", &numero);
        if (numero < menorNumero) {
            menorNumero = numero;
        }
        if (numero > maiorNumero) {
            maiorNumero = numero;
        }
        soma = soma + numero;
        
    }

    printf("O menor número é %d\n", menorNumero);
    printf("O maior número é %d\n", maiorNumero);
    printf("A soma é %d\n", soma);
    
}