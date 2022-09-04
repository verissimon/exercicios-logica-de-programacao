#include <stdio.h>
const int T_ESPERA=15, GUICHE_TOTAL=5;

void main(){
    int posicao;
    printf("digite a posicao: ", posicao);
    scanf("%d", &posicao);
    posicao--;
    int minTotal = T_ESPERA*(posicao/GUICHE_TOTAL);
    int nGuiche = 1+posicao%GUICHE_TOTAL;
    printf("guiche: %d\n", nGuiche);
    int tHoras = minTotal/60;
    int tMin = minTotal%60;
    printf("tempo de espera: %d horas, %d minutos", tHoras, tMin);
}