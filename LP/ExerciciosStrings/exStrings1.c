// Tamanho de strings. Faça um programa que leia 2 strings e informe o conteúdo delas seguido do seu comprimento. Informe também se as duas strings possuem o mesmo comprimento e são iguais ou diferentes no conteúdo.

#include <stdio.h>
#include <string.h>

int main() {
    // Aqui eu defini um número qualquer pra poder caber a frase, nesse caso com um limite de 200 caracteres
    char string1[200];
    char string2[200];
    

    printf("Digite uma frase qualquer: \n");
    // Essa função serve para conseguir captar o valor da string inteira, com ou sem espaço
    // No scanf, ao usar espaço, ele para de receber o valor das strings
    // Lembre-se dela, irei usar novamente mais pra frente
    fgets(string1, sizeof(string1), stdin);

    printf("Digite outra frase qualquer: \n");
    fgets(string2, sizeof(string2), stdin);

    printf("String 1: %s\n", &string1);
    printf("String 2: %s\n", &string2);

    // O 2º argumento do print é uma função que verifica qual o tamanho da string
    printf("Tamanho de %s: %d caracteres\n", &string1, strlen(string1));
    printf("Tamanho de %s: %d caracteres\n", &string2, strlen(string2));

    // Essa função usada dentro do if é usada para comparar 2 strings
    // Se a 1ª string for maior, ela retorna -1
    // Se a 2ª string for maior, ela retorna 1
    // Se elas forem iguais, ela retorna 0
    if (strcmp(string1, string2) == 0) {
        printf("As duas strings possuem o mesmo conteúdo\n");
    } else {
        printf("As duas strings possuem conteúdo diferente\n");
    }

    if (strlen(string1) == strlen(string2)) {
        printf("As duas strings são de tamanhos iguais\n");
    } else {
        printf("As duas strings são de tamanhos diferentes\n");
    }
    
// Recomendo uma olhada no site abaixo para ver quais funções existem na biblioteca padrão de strings do C (string.h)
// https://petbcc.ufscar.br/string/

}