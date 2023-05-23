// Foram anotadas as idades e alturas de 30 alunos. Faça um Programa que determine quantos alunos com mais de 13 anos possuem altura inferior à média de altura desses alunos.

#include <stdio.h>

int main() {
    int idades[30];
    double alturas[30];
    double somaAltura = 0.0;
    double mediaAltura;
    int contadorAlunos;

    for (int i = 0; i < 30; i++) {
        printf("Insira a idade do %dº aluno: ", i + 1);
        scanf("%d", &idades[i]);
        printf("Insira a altura do %dº aluno: ", i + 1);
        scanf("%d", &alturas[i]);

        somaAltura += alturas[i];
    }

    mediaAltura = somaAltura / 30;

    for (int i = 0; i < 30; i++) {
        if (idades[i] > 13 && alturas[i] < mediaAltura) {
            contadorAlunos++;
        }
    }

    printf("Existem %d alunos com mais de 13 anos e que possuem altura inferior à média dos outros.", contadorAlunos);
}
