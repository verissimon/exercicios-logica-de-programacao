/*Escreva um programa que leia o peso e a altura de uma pessoa e verifique se ela está
dentro da faixa de peso adequada, ou se está abaixo ou acima do peso. Caso a pessoa
esteja fora do peso adequado o programa deve informar quantos Kg ela deve ganhar
ou perder para ficar dentro da faixa adequada. Para resolver este programa, considere
que o IMC ideal para uma pessoa deve estar entre 18 e 25*/
#include <stdio.h>
#include <math.h>
const int IMC_MIN = 18, IMC_MAX = 25;

void main(){
    float peso, altura;
    scanf("%f%f", &peso, &altura); //altura em metros, peso em kg
    float imc = peso/pow(altura,2);

    if(imc<IMC_MIN){
        float pesoMin = IMC_MIN*(peso/imc);
        printf("abaixo do peso, deve ganhar %.2f", pesoMin-peso);
    } else if(imc<=IMC_MAX) printf("peso ideal");
           else {
               float pesoMax = IMC_MAX*(peso/imc);
               printf("acima do peso, deve perder %.2f", peso-pesoMax);
           }
}