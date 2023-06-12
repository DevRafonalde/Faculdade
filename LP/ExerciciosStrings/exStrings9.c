// Verificação de CPF. Desenvolva um programa que solicite a digitação de um número de CPF no formato xxx.xxx.xxx-xx e indique se é um número válido ou inválido através da validação dos dígitos verificadores edos caracteres de formatação.


// TODO Esse exercício ainda não está feito, faltam alguns ajustes, não leve em consideração


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int validarCPF(char cpf[]) {
    int i, j, digito1 = 0, digito2 = 0;
    int multiplicador1 = 10, multiplicador2 = 11;
    int cpfNumerico[11];

    // Verificar se o CPF possui 11 dígitos
    if (strlen(cpf) != 14) {
        return 0;
    }

    // Converter os dígitos do CPF para valores numéricos
    for (i = 0; i < 11; i++) {
        if (isdigit(cpf[i])) {
            cpfNumerico[i] = cpf[i] - '0';
        } else {
            return 0;
        }
    }

    // Verificar se todos os dígitos são iguais (caso especial)
    int todosDigitosIguais = 1;
    for (i = 1; i < 11; i++) {
        if (cpfNumerico[i] != cpfNumerico[0]) {
            todosDigitosIguais = 0;
            break;
        }
    }

    if (todosDigitosIguais) {
        return 0;
    }

    // Calcular o primeiro dígito verificador
    for (i = 0, j = 9; i < 9; i++, j--) {
        digito1 += cpfNumerico[i] * multiplicador1;
        multiplicador1--;
    }
    digito1 = (digito1 % 11 < 2) ? 0 : 11 - (digito1 % 11);

    // Calcular o segundo dígito verificador
    for (i = 0, j = 10; i < 10; i++, j--) {
        digito2 += cpfNumerico[i] * multiplicador2;
        multiplicador2--;
    }
    digito2 = (digito2 % 11 < 2) ? 0 : 11 - (digito2 % 11);

    // Verificar se os dígitos verificadores estão corretos
    if (cpfNumerico[9] != digito1 || cpfNumerico[10] != digito2) {
        return 0;
    }

    return 1;
}

int main() {
    char cpf[15];

    printf("Digite um CPF no formato xxx.xxx.xxx-xx: ");
    scanf("%s", cpf);

    // Verificar se o CPF é válido
    if (validarCPF(cpf)) {
        printf("CPF válido.\n");
    } else {
        printf("CPF inválido.\n");
    }
}
