// Data por extenso. Faça um programa que solicite a data de nascimento (dd/mm/aaaa) do usuário e imprima a data com o nome do mês por extenso.
// Existem 3 maneiras de fazer esse exercício. Uma com um array de meses e uma com um Switch-Case ou uma sequência de if-else-if.
// Nesse caso farei apenas com o array, caso queiram saber como faz dessa outra maneira, me mandem uma msg ou abram uma issue no repositório do github

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int dia;
    int mes;
    int ano;
    char* meses[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    printf("Digite sua data de nascimento:\n");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    // O "%.2d" aqui serve para manter o número mostrado com um mínimo de 2 algarismos (Ex.: 09 ao invés de 9)
    printf("Data de nascimento: %d/%.2d/%d\n", dia, mes, ano);
    // Aqui eu subtraio 1 pois estou procurando pelo índice, que começa no 0
    printf("Você nasceu em %d de %s de %d\n", dia, meses[mes - 1], ano);
}