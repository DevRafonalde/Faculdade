// Valida e corrige número de telefone. Faça um programa que leia um número de telefone, e corrija o número no caso deste conter somente 7 dígitos, acrescentando o '3' na frente. O usuário pode informar o número com ou sem o traço separador.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int validarNumeroTelefone(char *numero) {
    int tamanho = strlen(numero);

    // Verificar se o número contém apenas dígitos e possui 7 ou 8 dígitos
    for (int i = 0; i < tamanho; i++) {
        if (numero[i] < '0' || numero[i] > '9') {
            return 0; // Número inválido
        }
    }

    return (tamanho == 7 || tamanho == 8); // Número válido se possui 7 ou 8 dígitos
}

void corrigirNumeroTelefone(char *numero) {
    int tamanho = strlen(numero);

    // Verificar se o número tem 7 dígitos para adicionar o '3' na frente
    if (tamanho == 7) {
        // Realocar a string para acomodar o '3' na frente
        for (int i = tamanho - 1; i >= 0; i--) {
            numero[i + 1] = numero[i];
        }
        numero[0] = '3';
        tamanho++;
        numero[tamanho] = '\0'; // Adicionar caractere nulo no final
    }
}

int main() {
    char numeroTelefone[9];
    int contadorCaracteres = 0;

    printf("Valida e corrige número de telefone\n");
    printf("Telefone: ");
    fgets(numeroTelefone, 9, stdin);

    int tamanho = strlen(numeroTelefone);
    // Remover o traço se existir
    for (int i = 0; i < tamanho; i++) {
        if (isdigit(numeroTelefone[i])) {
            numeroTelefone[contadorCaracteres] = numeroTelefone[i];
            contadorCaracteres++;
        }
    }
    tamanho = contadorCaracteres;
    
    // Remover o caractere '\n' no final da string (se existir)
    numeroTelefone[strcspn(numeroTelefone, "\n")] = '\0';

    // Validar o número de telefone
    if (!validarNumeroTelefone(numeroTelefone)) {
        printf("Número de telefone inválido!\n");
        return 1;
    }

    // Corrigir o número de telefone (se necessário)
    corrigirNumeroTelefone(numeroTelefone);

    printf("Telefone possui %d dígito(s).\n", tamanho);
    if (strlen(numeroTelefone) == 8) {
        printf("Telefone corrigido sem formatação: %s\n", numeroTelefone);
        printf("Telefone corrigido com formatação: %.4s-%.4s\n", numeroTelefone, numeroTelefone+4);
    } else {
        printf("Telefone sem correção: %s\n", numeroTelefone);
    }
}
