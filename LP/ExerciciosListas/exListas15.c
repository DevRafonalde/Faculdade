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
    // Coloquei esse número enorme só pra poder dizer que é um número indeterminado
    double valores[9999999];
    // Esse vai ser um valor intermediário, só pra poder verificar se ele o valor inserido não é -1, pois, caso ele seja -1, eu não vou incluir ele no array/vetor
    double valorIntermediario;
    // Basicamente, esse contador só vai server para alterar o index do array e saber quantos foram inseridos no final
    int contador;
    double soma = 0;
    double media;
    int qntdAcimaMedia;
    int qntdAbaixoSete;

    // Esse é um do-while que vai ficar perguntando ao usuário qual o valor da nota que ele quer inserir até que o valor inserido seja -1
    // Nesse momento, ele não vai inserir o -1 no array e vai sair do loop
    do {
        printf("Digite um valor: ");
        scanf("%lf", &valorIntermediario);
        if (valorIntermediario != -1) {
            valores[contador] = valorIntermediario;
            contador++;
        }
    } while (valorIntermediario != -1);

    // Aqui eu adiciono mais 1 ao print do contador pq ele começou em 0 e eu não quero sber o index do último número, e sim quantos existem
    printf("Foram inseridos %d números", contador + 1);

    for (int i = 0; i <= contador; i++) {
        // Aqui eu já somo todos os valores enquanto printo os números em sequência, assim me poupa de escrever um laço for a mais
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