// Escreva uma função bloco que recebe como parâmetro um inteiro n e lê n inteiros do teclado, devolvendo um dos seguintes valores:
    // 0, se os n números lidos forem pares;
    // 1, se os n números lidos forem ímpares;
    // -1, se entre os n números lidos há números com paridades diferentes.

#include <stdio.h>
#include <stdbool.h>

int bloco(int qntdNumeros) {
    int numeros[qntdNumeros];
    bool soPares = false;
    bool soImpares = false;

    for (int i = 0; i < qntdNumeros; i++) {
        printf("Insira o %dº número: ", (i+1));
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0) {
            soPares = true;
        } else {
            soImpares = true;
        }
    }

    if (soImpares && soPares) {
        return -1;
    } else if (soImpares && !soPares) {
        return 1;
    } else if (!soImpares && soPares) {
        return 0;
    }
}

int main() {
    int qntdNumeros;
    int paridade;

    printf("Quantos números serão lidos? ");
    scanf("%d", &qntdNumeros);

    paridade = bloco(qntdNumeros);

    if (paridade == -1) {
        printf("Existem números pares e ímpares dentre os %d números lidos", qntdNumeros);
    } else if (paridade == 1) {
        printf("Os %d números lidos são ímpares", qntdNumeros);
    } else if (paridade == 0) {
        printf("Os %d números lidos são pares", qntdNumeros);
    }

}