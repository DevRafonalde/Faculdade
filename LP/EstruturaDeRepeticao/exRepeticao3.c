// Faça um programa que leia e valide as seguintes informações:
    // Nome: maior que 3 caracteres;
    // Idade: entre 0 e 150;
    // Salário: maior que zero;
    // Sexo: 'f' ou 'm';
    // Estado Civil: 's', 'c', 'v', 'd';
    
#include <stdio.h>
// Esse include abaixo é quem vai permitir a validação do nome
#include <string.h>

int main() {
    // Uma palavra nada mais é que um conjunto de caracteres, a definição dessa variável é exatamente isso, um conjunto de 100 caracteres no máximo.
    char nome[100];
    int idade;
    double salario;
    char sexo;
    char estadoCivil;

    do {
        printf("Digite o nome (maior que 3 caracteres): ");
        scanf("%s", nome);
        // Essa função dentro do while serve para ver quantos caracteres tem dentro do conjunto "nome" e confere se é menor que 3
    } while (strlen(nome) <= 3);

    do {
        printf("Digite a idade (entre 0 e 150): ");
        scanf("%d", &idade);
    } while (idade < 0 || idade > 150);

    do {
        printf("Digite o salário (maior que zero): ");
        scanf("%lf", &salario);
    } while (salario <= 0);

    do {
        printf("Digite o sexo (f/m): ");
        scanf(" %c", &sexo);
    } while (sexo != 'f' && sexo != 'm');

    do {
        printf("Digite o estado civil (s/c/v/d): ");
        scanf(" %c", &estadoCivil);
    } while (estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v' && estadoCivil != 'd');

    printf("As informações são válidas.");

    
}