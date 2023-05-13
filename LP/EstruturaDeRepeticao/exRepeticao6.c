// Faça um programa que imprima na tela os números de 1 a 20, um abaixo do outro. Depois modifique o programa para que ele mostre os números um ao lado do outro.

#include <stdio.h>

int main() {
    for (int i = 1; i < 21; i++) {
        printf("%d\n", i); // um abaixo do outro
    }

    for (int i = 1; i < 21; i++) {
        printf("%d ", i); // um do lado do outro
    }
    
}