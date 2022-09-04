#include <stdio.h>

void main(){
    float numero1, numero2, numero3;
    printf("insira os tres numeros: ");
    scanf("%f%f%f", &numero1, &numero2, &numero3);

    float peso1, peso2, peso3;
    printf("insira os tres pesos: ");
    scanf("%f%f%f", &peso1, &peso2, &peso3);

    float media = (numero1*peso1+numero2*peso2+numero3*peso3)/(peso1+peso2+peso3);
    printf("a media eh: %.2f", media);
}