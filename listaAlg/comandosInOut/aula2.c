#include <stdio.h>

void main ()
{
    float nota1, nota2, nota3;
    printf("insira as tres notas: ");
    scanf("%f%f%f",&nota1, &nota2, &nota3);
    float media = (nota1+nota2+nota3)/3.0;
    printf("a media eh: %.2f",media);
}