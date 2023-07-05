// Data com mês por extenso. Construa uma função que receba uma data no formato DD/MM/AAAA e devolva uma string no formato D de mesPorExtenso de AAAA. Opcionalmente, valide a data e retorne NULL caso a data seja inválida.

// Aqui eu fiz a validação de data, porém, caso não queiram fazer, o "exStrings6.c" faz a mesma coisa que foi pedido nesse exercício, é só adaptar para uma função à parte

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* dataPorExtenso(char* data) {
    int dia, mes, ano;

    char separador[2] = "/";
    char* token = strtok(data, separador);
    // O separador e a função strtok descritos aqui acima servem para dividir a string data em várias partes, todas divididas pelo separador.
    // Por exemplo, se eu passo a data 26/09/2002, nesse momento o valor do "token" vai ser 26, que é o dia

    char* meses[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    // Obtendo o dia
    if (token == NULL) {
        return NULL;
    }

    dia = atoi(token);
    // A função atoi() serve para converter um char da tabela ASCII para um inteiro

    if (dia <= 0 || dia > 31) return NULL;

    // Obtendo o mês
    token = strtok(NULL, separador);
    // Aqui o valor do token já muda, e pega os próximos valores da mesma string (uso o NULL no argumento pra ele identificar que é pra manter a divisão da mesma string)
    // Usando o exemplo anterior, o valor de token aqui seria 09

    if (token == NULL) {
        return NULL;
    }

    mes = atoi(token);
    // Na hora da conversão, o 09 vira um 9

    if (mes <= 0 || mes > 12) {
        return NULL;
    }

    // Obtendo o ano
    token = strtok(NULL, separador);
    // Aqui o valor do token seria 2002

    if (token == NULL) {
        return NULL;
    }

    ano = atoi(token);

    if (ano <= 0) {
        return NULL;
    }

    // Aqui eu valido a quantidade de dias que pode haver naquele mês e, abaixo, faço a função retornar um NULL caso não seja possível, pois é uma data inválida
    int diasMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mes == 2 && ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))) {
        diasMes[2] = 29; // Ano bissexto, fevereiro tem 29 dias
    }

    if (dia > diasMes[mes]) {
        return NULL;
    }

    // Construindo a string formatada
    char* resultado = malloc(30 * sizeof(char));
    // A função sprintf serve para formatar a data no formato desejado e armazená-la em uma string, permitindo que a função retorne essa string formatada como resultado.
    sprintf(resultado, "%d de %s de %d", dia, meses[mes-1], ano);

    return resultado;
}

int main() {
    char data[11];
    printf("Digite uma data no formato DD/MM/AAAA: ");
    scanf("%s", data);

    char* dataExtenso = dataPorExtenso(data);
    if (dataExtenso != NULL) {
        printf("%s\n", dataExtenso);
    } else {
        printf("Data invalida.\n");
    }

    return 0;
}
