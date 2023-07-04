// Construa uma função "encaixa" que, dados dois inteiros positivos a e b, verifica se b corresponde aos últimos dígitos de a.
// Ex.:

// a b
// 567890 -> 890 => encaixa
// 1243 -> 1243 => encaixa
// 2457 -> 245 => não encaixa
// 457 -> 2457 => não encaixa

#include <stdio.h>
#include <stdbool.h>

bool encaixa(int a, int b) {
    if ((a-b) % 10 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int a;
    int b;

    printf("Insira um número: ");
    scanf("%d", &a);
    printf("Insira outro número: ");
    scanf("%d", &b);

    if (encaixa(a, b)) {
        printf("Encaixa");
    } else {
        printf("Não encaixa");
    }   
}