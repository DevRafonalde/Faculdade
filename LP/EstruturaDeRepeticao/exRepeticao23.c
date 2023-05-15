// Faça um programa que mostre todos os primos entre 1 e N sendo N um número inteiro fornecido pelo usuário. O programa deverá mostrar também o número de divisões que ele executou para encontrar os números primos.
// Serão avaliados o funcionamento, o estilo e o número de testes (divisões) executados.

#include <stdio.h>

// Para facilitar e deixar o código da main mais limpo, eu criei essa função que recebe um número inteiro como parâmetro, calcula se esse número é primo e retorna 1 caso seja e 0 caso não seja
int isPrimo(int numero) {
    int i;

    if (numero <= 1) {
        return 0;
    }

    for (i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int numero;
    int contador = 0;

    printf("Digite um número:\n");
    scanf("%d", &numero);

    printf("Os números primos entre 1 e %d são:\n", numero);

    for (int i = 2; i <= numero; i++) {
        // Aqui ⬇, ao digitar "isPrimo(i)", eu estou passando o número "i" para a função "isPrimo" para que ela verifique se esse número é primo. Se for, ele entra no If, se não, não entra e refaz o loop para o próximo i.
        if (isPrimo(i)) {
            printf("%d ", i);
            contador++;
        }
    }

    printf("\n");
    printf("Foram feitas %d divisões.\n", contador);

    return 0;
}