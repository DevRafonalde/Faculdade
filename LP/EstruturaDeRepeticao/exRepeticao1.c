// Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido.
#include <stdio.h>

int main() {
    int nota;
    
    printf("Insira uma nota:\n");
    scanf("%d", &nota);
    while (nota < 0 || nota > 10) {
        printf("Insira uma nota válida:\n");
        scanf("%d", &nota);
    }
    
}