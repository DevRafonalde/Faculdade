// Faça um Programa que leia um número inteiro menor que 1000 e imprima a quantidade de centenas, dezenas e unidades do mesmo.
//  Observando os termos no plural a colocação do "e", da vírgula entre outros. Exemplo:
//      326 = 3 centenas, 2 dezenas e 6 unidades
//      12 = 1 dezena e 2 unidades
//      Testar com: 326, 300, 100, 320, 310,305, 301, 101, 311, 111, 25, 20, 10, 21, 11, 1, 7 e 16
#include <stdio.h>

int main() {
    int numero;
    int centenas = 0;
    int dezenas = 0;
    int unidades = 0;
    printf("Insira um número até 1000:\n");
    scanf("%d", &numero);

    if (numero > 1000) {
        printf("Número inválido!");
    } else if (numero >= 100) {
        centenas = numero / 100;
        dezenas = (numero - centenas * 100) / 10;
        unidades = numero - (centenas * 100) - (dezenas * 10);
    } else if (numero >= 10) {
        dezenas = numero / 10;
        unidades = numero - (dezenas * 10);
    } else if (numero >= 0) {
        unidades = numero;
    }
    
    

    printf("O número tem ");
    if (centenas != 1) {
        printf("%d centenas ", centenas);
    } else {
        printf("%d centena ", centenas);
    }

    if (dezenas != 1) {
        printf("%d dezenas ", dezenas);
    } else {
        printf("%d dezena ", dezenas);
    }

    if (unidades != 1) {
        printf("e %d unidades\n", unidades);
    } else {
        printf("e %d unidade\n", unidades);
    }
    
    
    
}