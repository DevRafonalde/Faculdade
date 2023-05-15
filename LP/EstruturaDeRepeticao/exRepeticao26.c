// Numa eleição existem três candidatos. Faça um programa que peça o número total de eleitores. Peça para cada eleitor votar e ao final mostrar o número de votos de cada candidato.

#include <stdio.h>

int main() {
    int totalEleitores;
    int votosC1 = 0;
    int votosC2 = 0;
    int votosC3 = 0;
    int voto;

    printf("Quantos eleitores terão nessa eleição?\n");
    scanf("%d", &totalEleitores);

    for (int i = 0; i < totalEleitores; i++) {
        do {
            printf("Eleitor %d, digite o número de seu candidato:\n", i + 1);
            scanf("%d", &voto);

            if (voto == 1) {
                votosC1++;
            } else if (voto == 2) {
                votosC2++;
            } else if (voto == 3) {
                votosC3++;
            }
        } while (voto < 1 || voto > 3);
        
    }

    printf("O Candidato 1 teve %d votos.\nO Cantidato 2 teve %d votos.\nO Candidato 3 teve %d votos.", votosC1, votosC2, votosC3);
    
    
}