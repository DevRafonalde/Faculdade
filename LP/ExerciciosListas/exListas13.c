// Faça um programa que receba a temperatura média de cada mês do ano e armazene-as em uma lista.
// Após isto, calcule a média anual das temperaturas e mostre todas as temperaturas acima da média anual, e em que mês elas ocorreram (mostrar o mês por extenso: 1 – Janeiro, 2 – Fevereiro, . . . ).

#include <stdio.h>

int main() {
    double mediaMensal[12];
    double somaMediasMensais = 0;
    double mediaAnual;
    int contadorMedias;

    // Aqui eu faço um vetor de Strings, que nada mais são do que um conjunto/vetor de chars
    // Dessa forma, o valor de meses[0] é Janeiro, meses[1] é Fevereiro e assim por diante
    char* meses[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    for (int i = 0; i < 12; i++) {
        printf("Digite a temperatura média de %s: ", meses[i]);
        scanf("%lf", &mediaMensal[i]);
        somaMediasMensais += mediaMensal[i];
    }

    mediaAnual = somaMediasMensais / 12;

    printf("\nA temperatura média anual foi de %.2lf°C.\n\n", mediaAnual);
    for (int i = 0; i < 12; i++) {
        if (mediaMensal[i] > mediaAnual) {
            printf("A temperatura de %.2lf°C em %s foi acima da média.\n", mediaMensal[i], meses[i]);
        }
    }
}
