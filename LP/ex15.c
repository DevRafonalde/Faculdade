// Faça um Programa que pergunte quanto você ganha por hora e o número de horas
// trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês,
// sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e
// 5% para o sindicato, faça um programa que nos dê: salário bruto. quanto pagou
// ao INSS. quanto pagou ao sindicato. o salário líquido. calcule os descontos e
// o salário líquido, conforme a tabela abaixo:
// + Salário Bruto : R$
// - IR (11%) : R$
// - INSS (8%) : R$
// - Sindicato ( 5%) : R$
// = Salário Liquido : R$
// Obs.: Salário Bruto - Descontos = Salário Líquido.

#include <stdio.h>

int main() {
  double salarioHora;
  double salarioBruto;
  double ir;
  double inss;
  double sindicato;
  double salarioLiquido;
  int horas;

  printf("Insira seu ganho por hora:\n");
  scanf("%lf", &salarioHora);
  printf("Insira a quantidade de horas tarbalhados no mês:\n");
  scanf("%d", &horas);
  salarioBruto = salarioHora * horas;
  ir = salarioBruto * 0.11;
  inss = salarioBruto * 0.08;
  sindicato = salarioBruto * 0.05;
  salarioLiquido = salarioBruto - (ir + inss + sindicato);
  printf("+ Salário Bruto : R$%.2lf"
         "\n- IR : R$%.2lf"
         "\n- INSS : R$%.2lf"
         "\n- Sindicato : R$%.2lf"
         "\n= Salário liquido : R$%.2lf\n",
         salarioBruto, ir, inss, sindicato, salarioLiquido);
}