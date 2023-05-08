// Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.
#include <stdio.h>

int main() {
    double produto1;
    double produto2;
    double produto3;

    printf("Insira o preço do primeiro produto:\n");
    scanf("%lf", &produto1);
    printf("Insira o preço do segundo produto:\n");
    scanf("%lf", &produto2);
    printf("Insira o preço do terceiro produto:\n");
    scanf("%lf", &produto3);

    if (produto1 < produto2 && produto1 < produto3) {
        printf("Você deverá comprar o primeiro produto");
    } else if (produto2 < produto1 && produto2 < produto3) {
        printf("Você deverá comprar o segundo produto");
    } else if (produto3 < produto1 && produto3 < produto2) {
        printf("Você deverá comprar o terceiro produto");
    }
}