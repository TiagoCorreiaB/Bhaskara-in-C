#include <stdio.h>
#include <math.h>
int main () {
    float numeroA, numeroB, numeroBraiz, numeroC, operacaoraiz,positivo, negativo;
    printf("\nEsse codigo so funciona para raizes reais");
    printf("Digite o valor de ax2: ");
    scanf("%f", &numeroA);
    printf("Digite o valor de bx: ");
    scanf("%f", &numeroB);
    numeroBraiz = numeroB;
    printf("Digite o valor de c: ");
    scanf("%f", &numeroC);
    numeroB = -(numeroB);
    operacaoraiz = sqrt(pow(numeroBraiz, 2) -4 * numeroA * numeroC) ;
    positivo = (numeroB + operacaoraiz) / (2 * numeroA);
    negativo = (numeroB - operacaoraiz) / (2 * numeroA);
    printf("\nAs raizes sao %.2f e %.2f",positivo, negativo);
    return 0;
}