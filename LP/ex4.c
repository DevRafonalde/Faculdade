#include <stdio.h>

int main() {
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;
    printf("Digita a nota 1:\n");
    scanf("%f", &nota1);
    printf("Digita a nota 2:\n");
    scanf("%f", &nota2);
    printf("Digita a nota 3:\n");
    scanf("%f", &nota3);
    printf("Digita a nota 4:\n");
    scanf("%f", &nota4);
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("A média das notas informadas é: %.2f", media);
}