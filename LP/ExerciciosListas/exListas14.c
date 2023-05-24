// Utilizando listas faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:
//      "Telefonou para a vítima?"
//      "Esteve no local do crime?"
//      "Mora perto da vítima?"
//      "Devia para a vítima?"
//      "Já trabalhou com a vítima?"
// O programa deve no final emitir uma classificação sobre a participação da pessoa no crime.
// Se a pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino". Caso contrário, ele será classificado como "Inocente".

#include <stdio.h>

int main() {
    int qntdPositiva = 0;
    char* perguntas[5] = {"Telefonou para a vítima?", "Esteve no local do crime?", "Mora perto da vítima?", "Devia para a vítima?", "Já trabalhou com a vítima?"};

    printf("Responda as perguntas com \"S\" para sim ou \"N\" para não\n");
    for (int i = 0; i < 5; i++) {
        char resposta;
        printf("%s ", perguntas[i]);
        scanf(" %c", &resposta);

        if (resposta == 's' || resposta == 'S') {
            qntdPositiva++;
        }
    }

    if (qntdPositiva == 1) {
        printf("Você respondeu positivamente a %d questão, portanto, ", qntdPositiva);
    } else {
        printf("Você respondeu positivamente a %d questões, portanto, ", qntdPositiva);
    }
    
    // Com Switch-Case
    switch (qntdPositiva) {
    case 2:
        printf("você está classificado apenas como suspeito");
        break;
    case 3:
        printf("você está classificado como cúmplice");
        break;
    case 4:
        printf("você está classificado como cúmplice");
        break;
    case 5:
        printf("você está classificado como assassino");
        break;
    default:
        printf("você está classificado como inocente");
        break;
    }

    // Com if, else if e else
    // if (qntdPositiva == 2) {
    //     printf("você está classificado apenas como suspeito");
    // } else if (qntdPositiva == 3 || qntdPositiva == 4) {
    //     printf("você está classificado como cúmplice");
    // } else if (qntdPositiva == 5) {
    //     printf("você está classificado como assassino");
    // } else {
    //     printf("você está classificado como inocente");
    // }
    
    
}