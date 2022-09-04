#include <stdio.h>
#include <math.h>
const float PI = 3.14159;

void main()
{
    float raio;
    printf("insira o raio: ");
    scanf("%f", &raio);
    float circ = 2*PI*raio;
    printf("a circunferencia eh: %.3f\n", circ);
    float area =  PI*raio*raio;
    printf("a area eh: %.3f\n", area);
}
