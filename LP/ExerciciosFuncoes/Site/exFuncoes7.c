// Faça um programa que use a função valorPagamento para determinar o valor a ser pago por uma prestação de uma conta.
// O programa deverá solicitar ao usuário o valor da prestação e o número de dias em atraso e passar estes valores para a função valorPagamento, que calculará o valor a ser pago e devolverá este valor ao programa que a chamou.
// O programa deverá então exibir o valor a ser pago na tela. Após a execução o programa deverá voltar a pedir outro valor de prestação e assim continuar até que seja informado um valor igual a zero para a prestação.
// Neste momento o programa deverá ser encerrado, exibindo o relatório do dia, que conterá a quantidade e o valor total de prestações pagas no dia.
// O cálculo do valor a ser pago é feito da seguinte forma. Para pagamentos sem atraso, cobrar o valor da prestação. Quando houver atraso, cobrar 3% de multa, mais 0,1% de juros por dia de atraso.

#include <stdio.h>

double valorPagamento(double valorPrestacao, int diasAtraso) {
    if (diasAtraso == 0) {
        return valorPrestacao;
    }

    valorPrestacao += ((valorPrestacao * 0.03) + (valorPrestacao * (0.01 * diasAtraso)));

    return valorPrestacao;
    
}

int main() {
    
    double valorPrestacao;
    double somaPrestacoes = 0.0;

    int qntdPrestacoes = 0;
    int diasAtraso;

    do {
        printf("Insira o valor de uma prestação: ");
        scanf("%lf", &valorPrestacao);

        if (valorPrestacao == 0) {
            break;
        }
        

        printf("Insira os dias de atraso dessa prestação: ");
        scanf("%d", &diasAtraso);

        somaPrestacoes += valorPagamento(valorPrestacao, diasAtraso);
        qntdPrestacoes++;

    } while (valorPrestacao != 0);
    
    printf("Foram inseridas %d prestações com um valor total de R$%.2lf", qntdPrestacoes, somaPrestacoes);

}