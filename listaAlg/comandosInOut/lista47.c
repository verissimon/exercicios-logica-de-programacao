/*Um banco está realizando uma grande promoção em seus financiamentos. Ele financia
qualquer valor em 5 prestações. O valor da primeira prestação corresponde à 20% do
valor do empréstimo. Os valores das demais prestações correspondem ao valor da
parcela anterior acrescido de uma taxa de juros de 12%. Com base nestas informações,
escreva um programa que leia o valor a ser financiado por um cliente e calcule: o valor
de cada prestação, o valor total que o cliente vai pagar pelo empréstimo e o total de
juros que o cliente vai pagar pelo empréstimo*/
#include <stdio.h>
const float JUROS = .12;
const float TAXA_P1 = .20;

void main(){
    float p1, p2, p3, p4, p5; //5 parcelas
    float vFinanciado; //valor financiado
    printf("insira o valor financiado: ");
    scanf("%f", &vFinanciado);
    p1 = vFinanciado * TAXA_P1;
    p2 = p1 * (1+JUROS);
    p3 = p2 * (1+JUROS);
    p4 = p3 * (1+JUROS);
    p5 = p4 * (1+JUROS);
    printf("parcela1: %.2f\n", p1);
    printf("parcela2: %.2f\n", p2);
    printf("parcela3: %.2f\n", p3);
    printf("parcela4: %.2f\n", p4);
    printf("parcela5: %.2f\n", p5);
    printf("total: %.2f", p1+p2+p3+p4+p5);
}