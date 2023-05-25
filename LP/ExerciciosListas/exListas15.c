// Faça um programa que leia um número indeterminado de valores, correspondentes a notas, encerrando a entrada de dados quando for informado um valor igual a -1 (que não deve ser armazenado). Após esta entrada de dados, faça:
//     Mostre a quantidade de valores que foram lidos;
//     Exiba todos os valores na ordem em que foram informados, um ao lado do outro;
//     Exiba todos os valores na ordem inversa à que foram informados, um abaixo do outro;
//     Calcule e mostre a soma dos valores;
//     Calcule e mostre a média dos valores;
//     Calcule e mostre a quantidade de valores acima da média calculada;
//     Calcule e mostre a quantidade de valores abaixo de sete;
//     Encerre o programa com uma mensagem;

#include <stdio.h>

int main() {
    double valores[9999999];
    double valorInt;
    int contador;
    double soma = 0;
    double media;
    int qntdAcimaMedia;
    int qntdAbaixoSete;

    do {
        printf("Digite um valor: ");
        scanf("%lf", &valorInt);
        if (valorInt != -1) {
            valores[contador] = valorInt;
            contador++;
        }
    } while (valorInt != -1);

    printf("Foram inseridos %d números", contador + 1);

    for (int i = 0; i <= contador; i++) {
        soma += valores[i];
        printf("%d ", valores[i]);
    }
    

    for (int i = contador; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }

    printf("A soma dos valores é: %lf", soma);

    media = soma / (contador + 1);
    printf("A média dos valores é: %lf", media);

    for (int i = 0; i < (contador + 1); i++) {
        if (valores[i] > media) {
            qntdAcimaMedia++;
        }
        
        if (valores[i] < 7) {
            qntdAbaixoSete++;
        }
    }

    printf("A quantidade de valores acima da média é: %d", qntdAcimaMedia);
    printf("A quantidade de valores abaixo de 7 é: %d", qntdAbaixoSete);

    printf("O programa foi encerrado");

    
}