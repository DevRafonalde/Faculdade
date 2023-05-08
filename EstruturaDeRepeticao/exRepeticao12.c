//Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro entre 1 a 10. O usuário deve informar de qual numero ele deseja ver a tabuada. A saída deve ser conforme o exemplo abaixo:
//  Tabuada de 5:
//  5 X 1 = 5
//  5 X 2 = 10
//  ...
//  5 X 10 = 50
#include <stdio.h>

int main() {
    int numero;
    printf("Digite o número a ter a tabuada gerada:\n");
    scanf("%d", &numero);
    
    printf("Tabuada de %d:\n", numero);
    for (int i = 1; i < 11; i++) {
        int multiplicacao = numero * i;
        printf("%d X %d = %d\n", numero, i, multiplicacao);
    }
    
}