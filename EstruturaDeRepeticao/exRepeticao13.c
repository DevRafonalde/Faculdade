// Faça um programa que peça dois números, base e expoente, calcule e mostre o primeiro número elevado ao segundo número. Não utilize a função de potência da linguagem.
#include <stdio.h>

int main () {
    double base;
    int expoente;
    double resultado = 1;

    printf("Digite o número que será a base:\n");
    scanf("%lf", &base);
    printf("Digite o número que será o expoente:\n");
    scanf("%d", &expoente);


    if (expoente == 0) {
        printf("O resultado é 1");
        return 0;
    } else if (expoente > 0) {
        for (int i = 0; i < expoente; i++) {
            resultado = resultado * base;
        }
    } else if (expoente < 0) {
        for (int i = 0; i < -expoente; i++) {
            resultado = resultado * (1 / base);
        }
    }
    
    printf("O resultado é %lf", resultado);
    
}