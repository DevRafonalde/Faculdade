// Faça um programa que peça para n pessoas a sua idade, ao final o programa devera verificar se a média de idade da turma varia entre 0 e 25, 26 e 60 e maior que 60; e então, dizer se a turma é jovem, adulta ou idosa, conforme a média calculada.

#include <stdio.h>

int main() {
    int numeroPessoas;
    int soma = 0;
    double media;
    
    printf("Quantas pessoas participarão da pesquisa?\n");
    scanf("%d", &numeroPessoas);

    for (int i = 0; i < numeroPessoas; i++) {
        int idade;
        printf("Qual a idade da pessoa %d?\n", i+1);
        scanf("%d", &idade);
        soma += idade; // Ou soma = soma + idade;
    }

    media = soma / numeroPessoas;

    if (0 <= media && media <= 25) {
        printf("A turma é jovem");
    } else if (26 <= media && media <= 60) {
        printf("A turma é adulta");
    } else if (60 < media) {
        printf("A turma é idosa");
    }
}