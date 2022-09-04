#include <stdio.h>
//getch() espera usuario apertar botão #include <conio.h>

void main (){

    float lado;
    printf("informe o valor do lado do quadrado: ");
    scanf("%f", &lado);
    float area = lado * lado;
    float perimetro = lado*4;
    printf("a area eh %.2f\n", area);
    printf("o perimetro eh %.2f", perimetro);

}
