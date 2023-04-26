#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    float raio;
    float area;
    printf("Digita o raio da circunferência:\n");
    scanf("%f", &raio);
    area = M_PI * pow(raio, 2);
    printf("Em centímetros é: %.2f cm", area);
}