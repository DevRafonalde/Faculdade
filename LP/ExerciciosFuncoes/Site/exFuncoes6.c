// Faça um programa que converta da notação de 24 horas para a notação de 12 horas. Por exemplo, o programa deve converter 14:25 em 2:25 P.M. A entrada é dada em dois inteiros.
// Deve haver pelo menos duas funções: uma para fazer a conversão e uma para a saída.
// Registre a informação A.M./P.M. como um valor ‘A’ para A.M. e ‘P’ para P.M. Assim, a função para efetuar as conversões terá um parâmetro formal para registrar se é A.M. ou P.M.
// Inclua um loop que permita que o usuário repita esse cálculo para novos valores de entrada todas as vezes que desejar.

#include <stdio.h>

void converter(int horas24, int *horas12, char *periodo) {

    if (horas24 >= 12) {
        *periodo = 'P';
    } else {
        *periodo = 'A';
    }
    

    if (horas24 == 12 || horas24 == 0) {
        *horas12 = 12;
    } else {
        *horas12 = horas24 % 12;
    }
    
}

void printar(int horas, int minutos, int periodo) {
    printf("%d:%d %c.M.\n", horas, minutos, periodo);
}

int main() {
    int horas24;
    int minutos;

    int horas12;

    char periodo;
    char repetir;

    do {
        printf("Digite as horas: ");
        scanf("%d", &horas24);

        printf("Digite os minutos: ");
        scanf("%d", &minutos);

        converter(horas24, &horas12, &periodo);

        printar(horas12, minutos, periodo);

        printf("Deseja converter outra hora? (S/N): ");
        scanf(" %c", &repetir);
    } while (repetir == 'S' || repetir == 's');
    
}