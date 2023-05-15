// Faça um programa que mostre os n termos da Série a seguir:
//     S = 1/1 + 2/3 + 3/5 + 4/7 + 5/9 + ... + n/m. 
//     Imprima no final a soma da série.

#include <stdio.h>

int main() {
    int qntdTermos;
    double numerador = 1.0;
    double denominador = 1.0;
    double soma = 0.0;
    
    printf("Digite a quantidade de termos que a série terá: ");
    scanf("%d", &qntdTermos);

    printf("S = ");
    for (int i = 1; i <= qntdTermos; i++) {
        if (i == qntdTermos) {
            printf("%.0lf/%.0lf\n", numerador, denominador);
        } else {
            printf("%.0lf/%.0lf + ", numerador, denominador);
        }
        
        
        soma += numerador / denominador;
        numerador++;
        denominador += 2;
    }

    printf("A soma da série é: %lf", soma);
}