//Escreva um programa que leia o valor do seno de um ângulo e calcule o valor do seu cosseno
#include <stdio.h>
#include <math.h>
const float PI = 3.14159;
const float K = 180/PI; //constante de conversao de rad para graus

void main()
{
    float sen;
    printf("insira o seno de um angulo (valor entre -1 e 1): ");
    scanf("%f", &sen);
    float angulo = asin(sen); //primeiro calcular o angulo(rad) usando a funcao inversa do seno -> asin(sen)
                              //depois calcular e mostrar cos(angulo)
    printf("o angulo eh, em graus: %.2f ou %.2f\n", angulo*K, (PI-angulo)*K);
    printf("o cosseno do angulo eh: %.4f ou %.4f\n", cos(angulo), cos(PI-angulo));
    //printf("o cosseno eh: %f\n",cos(asin(sen)));
}
