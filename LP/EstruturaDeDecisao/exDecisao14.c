// Faça um programa que lê as duas notas parciais obtidas por um aluno numa disciplina
// ao longo de um semestre, e calcule a sua média. A atribuição de conceitos obedece à tabela abaixo:
//   Média de Aproveitamento  Conceito
//   Entre 9.0 e 10.0        A
//   Entre 7.5 e 9.0         B
//   Entre 6.0 e 7.5         C
//   Entre 4.0 e 6.0         D
//   Entre 4.0 e zero        E
// O algoritmo deve mostrar na tela as notas, a média, o conceito correspondente
// e a mensagem “APROVADO” se o conceito for A, B ou C ou “REPROVADO” se o conceito for D ou E.
#include <stdio.h>

int main() {
    double nota1;
    double nota2;
    double media;
    char conceito;

    printf("Digite a primeira nota:\n");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota:\n");
    scanf("%lf", &nota2);

    media = (nota1 + nota2) / 2;

    if (9.0 <= media && media <= 10.0) {
        conceito = 'A';
    } else if (7.5 <= media && media < 9.0) {
        conceito = 'B';
    } else if (6.0 <= media && media < 7.5) {
        conceito = 'C';
    } else if (4.0 <= media && media < 6.0) {
        conceito = 'D';
    } else if (media < 4.0) {
        conceito = 'E';
    }

    printf("A primeira nota foi: %.2lf\n", nota1);
    printf("A segunda nota foi: %.2lf\n", nota2);
    printf("A média é: %.2lf\n", media);
    printf("O conceito é: %c\n", conceito);

    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        printf("APROVADO!\n");
    } else {
        printf("REPROVADO!\n");
    }    
}