/*Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e apresentar:
    A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
    A mensagem "Reprovado", se a média for menor do que sete;
    A mensagem "Aprovado com Distinção", se a média for igual a dez.*/
#include <stdio.h>

int main() {
    double nota1;
    double nota2;
    double media;

    printf("Insira a primeira nota:\n");
    scanf("%lf", &nota1);
    printf("Insira a segunda nota:\n");
    scanf("%lf", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7 && media != 10) {
        printf("Aprovado");
    } else if (media < 7) {
        printf("Reprovado");
    } else if (media == 10) {
        printf("Aprovado com distinção");
    }
}