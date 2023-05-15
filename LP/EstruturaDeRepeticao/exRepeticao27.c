// Faça um programa que calcule o número médio de alunos por turma. Para isto, peça a quantidade de turmas e a quantidade de alunos para cada turma. As turmas não podem ter mais de 40 alunos.

#include <stdio.h>

int main() {
    int qntdTurmas;
    int soma = 0;
    double media;
    
    printf("Quantas turmas participarão da pesquisa?\n");
    scanf("%d", &qntdTurmas);

    for (int i = 0; i < qntdTurmas; i++) {
        int qntdAlunos;
        do {
            printf("Qual a idade da pessoa %d?\n", i+1);
            scanf("%d", &qntdAlunos);
            soma += qntdAlunos; // Ou soma = soma + qntdAlunos;
        } while (0 > qntdAlunos || qntdAlunos > 40);
    }

    media = soma / qntdTurmas;

    printf("O número médio de alunos por turma é: %.0lf", media);
    // Ou faço a média ser um int e imprimo com %d
}