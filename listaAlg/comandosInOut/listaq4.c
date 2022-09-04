#include <stdio.h>
#include <math.h>

void main(){
    unsigned int numero;
    printf("insira o numero: ");
    scanf("%d", &numero);
    int dobro = numero*2;
    int triplo = numero*3;
    int quadrado = numero*numero;
    int cubo = quadrado*numero;
    float raizquad = sqrt(numero);
    printf("o dobro eh: %.2d\n", dobro);
    printf("o triplo eh: %.2d\n", triplo);
    printf("o quadrado eh: %.2d\n", quadrado);
    printf("o cubo eh: %.2d\n", cubo);
    printf("a raiz quadrada eh: %.10f\n", raizquad);

}