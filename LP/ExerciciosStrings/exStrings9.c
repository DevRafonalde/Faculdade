// Verificação de CPF. Desenvolva um programa que solicite a digitação de um número de CPF no formato xxx.xxx.xxx-xx e indique se é um número válido ou inválido através da validação dos dígitos verificadores e dos caracteres de formatação.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Essa minha função vai retornar 1 caso o CPF seja válido e 0 caso ele seja inválido
int validarCPF(char cpf[]) {
    int digito1 = 0;
    int digito2 = 0;
    int multiplicador1 = 10;
    int multiplicador2 = 11;
    int cpfNumerico[11];
    int contadorCaracteres = 0;

    // Verificar se o CPF possui 11 dígitos com pontos e traços
    if (strlen(cpf) != 14) {
        return 0;
    }

    // Converter os dígitos do CPF para valores numéricos
    // A função "isDigit(cpf[i])" retorna 1 para quando um caractere é um numero ou 0 para caso não seja. Dessa forma eu ignoro todos os pontos e traços inseridos
    for (int i = 0; i < 14; i++) {
        if (isdigit(cpf[i])) {
            cpfNumerico[contadorCaracteres] = cpf[i] - '0';
            contadorCaracteres++;
            
        }
    }

    // Verificar se todos os dígitos são iguais (caso especial)
    int todosDigitosIguais = 1;
    for (int i = 1; i < 11; i++) {
        if (cpfNumerico[i] != cpfNumerico[0]) {
            todosDigitosIguais = 0;
            break;
        }
    }

    if (todosDigitosIguais) {
        return 0;
    }

    // Calcular o primeiro dígito verificador
    for (int i = 0, j = 9; i < 9; i++, j--) {
        digito1 += cpfNumerico[i] * multiplicador1;
        multiplicador1--;
    }
    digito1 = (digito1 % 11 < 2) ? 0 : 11 - (digito1 % 11);

    // Calcular o segundo dígito verificador
    for (int i = 0, j = 10; i < 10; i++, j--) {
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

    // Aqui eu chamo a minha outra função para verificar se o CPF é válido. Ela retornará 1 caso positivo e 0 caso negativo
    if (validarCPF(cpf)) {
        printf("CPF válido.\n");
    } else {
        printf("CPF inválido.\n");
    }
}
