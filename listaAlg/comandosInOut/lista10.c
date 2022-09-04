//Escreva um programa que leia o valor dos dois catetos de um triângulo retângulo e
//calcule o valor da hipotenusa
#include <stdio.h>
#include <math.h>

void main(){
    float cat1, cat2;
    scanf("%f%f", &cat1, &cat2);
    printf("%.2f",sqrt(pow(cat1,2)+pow(cat2,2)));

}