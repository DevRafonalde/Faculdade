// A série de Fibonacci é formada pela seqüência 1,1,2,3,5,8,13,21,34,55,...
// Faça um programa capaz de gerar a série até o n−ésimo termo.
#include <stdio.h>

int main() {
    int numero1 = 0;
    int numero2 = 1;
    int numero3;
    int n;

    printf("Até qual termo da sequencia será gerado?\n");
    scanf("%d", &n);

    printf("A sequência é: 0, 1, ");
    for (int i = 0; i < n; i++) {
        numero3 = numero1 + numero2;
        numero1 = numero2;
        numero2 = numero3;
        // Esse if é para fazer com que o último número da sequência não tenha uma vírgula depois
        if (i == n - 1) {
            printf("%d", numero3);
        } else {
            printf("%d, ", numero3);
        }
    }

    printf("\n");

    
    

    
}