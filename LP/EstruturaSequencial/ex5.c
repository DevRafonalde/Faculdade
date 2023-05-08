#include <stdio.h>

int main() {
    float metros;
    float centimetros;
    printf("Digita a quantidade de metros:\n");
    scanf("%f", &metros);
    centimetros = metros * 100;
    printf("Em centímetros é: %.2f cm", centimetros);
}