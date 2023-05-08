// Faça um programa que peça o tamanho de um arquivo para download (em MB) e a
// velocidade de um link de Internet (em Mbps), calcule e informe o tempo
// aproximado de download do arquivo usando este link (em minutos).
#include <stdio.h>
int main() {
  double tamanhoArquivo;
  double velocidadeDownload;
  double tempoDownload;
  printf("Insira o tamanho do arquivo para download:\n");
  scanf("%lf", &tamanhoArquivo);
  printf("Insira a velocidade de download da internet:\n");
  scanf("%lf", &velocidadeDownload);
  tamanhoArquivo = tamanhoArquivo * 8; // Conversão pra megabits
  tempoDownload = (tamanhoArquivo / velocidadeDownload) / 60;
  printf("O tempo estimado de download será de: %.2lf minutos", tempoDownload);
}