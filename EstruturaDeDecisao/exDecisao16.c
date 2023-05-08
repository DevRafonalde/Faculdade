//Faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax2 + bx + c. O programa deverá pedir os valores de a, b e c e fazer as consistências, informando ao usuário nas seguintes situações:
//Se o usuário informar o valor de A igual a zero, a equação não é do segundo grau e o programa não deve fazer pedir os demais valores, sendo encerrado;
//    Se o delta calculado for negativo, a equação não possui raizes reais. Informe ao usuário e encerre o programa;
//    Se o delta calculado for igual a zero a equação possui apenas uma raiz real; informe-a ao usuário;
//    Se o delta for positivo, a equação possui duas raiz reais; informe-as ao usuário;

#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main() {
    double a;
    double b;
    double c;
    double delta;
    double r1;
    double r2;

    printf("A ideia desse programa é trazer as raízes reais de uma equação quadrática na forma ax² + bx + c\n");

    printf("Dito isso, por favor insira o valor de \"a\":\n");
    scanf("%lf", &a);

    if (a == 0) {
        printf("Para que a equação seja quadrática o valor de \"a\" deve ser diferente de 0");
        return 0;
    }

    printf("Por favor insira o valor de \"b\":\n");
    scanf("%lf", &b);

    printf("Por favor insira o valor de \"c\":\n");
    scanf("%lf", &c);

    delta = pow(b, 2) - (4 * a * c);

    if (delta < 0) {
        printf("A equação não possui valores reais\n");
        return 0;
    }

    r1 = ((-b) + sqrt(delta)) / (2 * a);
    r2 = ((-b) - sqrt(delta)) / (2 * a);

    if (delta == 0) {
        printf("A equação possui apenas o número %.2lf como raíz", r1);
    } else if (delta > 0) {
        printf("A equação possui os números %.2lf e %.2lf como raízes reais", r1, r2);
    }
    
    
    
    

}