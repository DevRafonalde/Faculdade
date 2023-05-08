#include <stdio.h>

int main() {
    double numero1;
    double numero2;

    printf("Digite o primeiro número:\n");
    scanf("%lf", &numero1);
    printf("Digite o segundo número:\n");
    scanf("%lf", &numero2);

    while (numero1 == numero2) {
        printf("Por favor, digite um número diferente do primeiro:\n");
        scanf("%lf", &numero2);
    }

    if (numero1 > numero2) {
        printf("O primeiro número inserido (%.2lf) é maior", numero1);
    } else {
        printf("O segundo número inserido (%.2lf) é maior", numero2);
    }
    
}