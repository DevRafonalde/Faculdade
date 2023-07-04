// Um conjunto pode ser representado por um vetor da seguinte forma: V[0] é o tamanho do
// conjunto; V[1], V[2], etc. são os elementos do conjunto (sem repetições). Faça uma função
// chamada intersecção que dados dois conjuntos de números inteiros A e B, constrói um terceiro
// conjunto C que é a intersecção de A e B. Lembre-se de que em C[0] a sua função deve colocar
// o tamanho da intersecção.

#include <stdio.h>

int pertence(int elemento, int conjunto[], int tamanho) {
    // Justamente pelo fato de o primeiro elemento ser o tamanho do array, aqui eu começo o loop a partir do elemento de index 1
    for (int i = 1; i <= tamanho; i++) {
        if (conjunto[i] == elemento) {
            return 1;
        }
    }
    return 0;
}

void interseccao(int A[], int B[], int C[]) {
    int tamanhoA = A[0];
    int tamanhoB = B[0];
    int tamanhoInterseccao = 0;

    // Justamente pelo fato de o primeiro elemento ser o tamanho do array, aqui eu começo o loop a partir do elemento de index 1
    for (int i = 1; i <= tamanhoA; i++) {
        if (pertence(A[i], B, tamanhoB)) {
            tamanhoInterseccao++;
            C[tamanhoInterseccao] = A[i];
        }
    }

    C[0] = tamanhoInterseccao;
}

int main() {
    // Aqui nesses conjuntos, o elemento de index 0 (A[0] e B[0]) dos conjuntos será sempre o tamanho do conjunto
    int A[] = {6, 5, 2, 4, 6, 8, 10};
    int B[] = {5, 4, 1, 2, 6, 9};
    int C[100];

    interseccao(A, B, C);

    printf("Conjunto interseccao (C): ");
    
    // Justamente pelo fato de o primeiro elemento ser o tamanho do array, aqui eu começo o loop a partir do elemento de index 1
    for (int i = 1; i <= C[0]; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

}