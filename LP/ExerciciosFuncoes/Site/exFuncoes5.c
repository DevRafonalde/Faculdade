// Faça um programa com uma função chamada somaImposto.A função possui dois parâmetros formais: taxaImposto,
// que é a quantia de imposto sobre vendas expressa em porcentagem e custo, que é o custo de um item antes do imposto.
// A função “altera” o valor de custo para incluir o imposto sobre vendas.

#include <stdio.h>

// Para receber uma variável como ponteiro, se faz necessário colocar um asterisco (*) na frente do nome da variável a ser recebida
double somaImposto(double taxaImposto, double *custo) {
    *custo += (*custo * taxaImposto);
}

int main() {

    double custoProduto = 10.0;
    double taxaImposto = 0.1;

    // Aqui se aplica o conceito de ponteiro
    // Quando se passa uma variável para outra função da maneira que estou passando a "taxaImposto" eu estou passando o valor que foi atribuído a ela.
    // Quando se passa uma variável para outra função da maneira que estou passando o "custoProduto" eu estou passando o endereço de memória daquela variável.
    // Dessa forma, eu tenho acesso ao escopo no qual a variável foi criada, ou seja, caso eu altere o valor dela em outra função,
    // eu também estarei alterando o valor original dela no seu escopo de origem
    somaImposto(taxaImposto, &custoProduto);

    printf("%lf", custoProduto);

}