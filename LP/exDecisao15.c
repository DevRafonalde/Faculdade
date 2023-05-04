// Faça um Programa que peça os 3 lados de um triângulo.
// O programa deverá informar se os valores podem ser um triângulo.
// Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.
// Dicas:
// Três lados formam um triângulo quando a soma de quaisquer dois lados for maior que o terceiro;
//   Triângulo Equilátero: três lados iguais;
//   Triângulo Isósceles: quaisquer dois lados iguais;
//   Triângulo Escaleno: três lados diferentes;

#include <stdio.h>
#include <stdlib.h>

int main() {
    double lado1;
    double lado2;
    double lado3;
    int isTriangulo = 0;
    int tipoTriangulo = 0;

    printf("Favor insira o valor do lado 1:\n");
    scanf("%lf", &lado1);
    printf("Favor insira o valor do lado 2:\n");
    scanf("%lf", &lado2);
    printf("Favor insira o valor do lado 3:\n");
    scanf("%lf", &lado3);

    if (lado1 < (lado2 + lado3) && lado1 > (abs(lado2 - lado3))) {
        isTriangulo = 1;
    } else if (lado2 < (lado1 + lado3) && lado2 > (abs(lado1 - lado3))) {
        isTriangulo = 1;
    } else if (lado3 < (lado2 + lado1) && lado3 > (abs(lado2 - lado1))) {
        isTriangulo = 1;
    } else {
        printf("Os valores inseridos não correspondem a um triângulo.");
        return 0;
    }

    printf("Os valores inseridos podem corresponder a um triângulo\n");

    if (lado1 == lado2 && lado1 == lado3) {
        tipoTriangulo = 1;
    } else if ((lado1 == lado2 && lado1 != lado3) || (lado1 == lado3 && lado1 != lado2)) {
        tipoTriangulo = 2;
    } else if (lado2 == lado3 && lado2 != lado1) {
        tipoTriangulo = 2;
    } else if (lado1 != lado2 && lado1 != lado3) {
        tipoTriangulo = 3;
    }
    
    if (isTriangulo == 1) {
        switch (tipoTriangulo) {
        case 1:
            printf("O triângulo é equilátero\n");
            break;
        case 2:
            printf("O triângulo é isósceles\n");
            break;
        case 3:
            printf("O triângulo é escaleno\n");
            break;
        default:
            printf("O valor não corresponde a um triângulo\n");
            break;
        }
    }
}
