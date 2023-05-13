// Faça um Programa para leitura de três notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e presentar:
//     A mensagem "Aprovado", se a média for maior ou igual a 7, com a respectiva média alcançada;
//     A mensagem "Reprovado", se a média for menor do que 7, com a respectiva média alcançada;
//     A mensagem "Aprovado com Distinção", se a média for igual a 10.
#include <stdio.h>

int main() {
    double nota1;
    double nota2;
    double nota3;
    double media;

    printf("Insira a nota 1:\n");
    scanf("%lf", &nota1);
    printf("Insira a nota 2:\n");
    scanf("%lf", &nota2);
    printf("Insira a nota 3:\n");
    scanf("%lf", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if (media == 10) {
        printf("Aprovado com distinção\n");
    } else if (media >= 7) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
    
    
}