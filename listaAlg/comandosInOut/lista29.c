/*Escreva um programa que leia o número total de questões existentes em uma prova e
o número de questões que um candidato acertou e determine o seu percentual de
acertos e o seu percentual de erros*/
#include <stdio.h>
void main()
{
    int nQuestoes, nAcertos;
    printf("numero de questoes e numero de acertos, em ordem: ");
    scanf("%d%d", &nQuestoes, &nAcertos);
    float errosP = 1-(float)nAcertos/nQuestoes;
    printf("a porcentagem de erros eh %.0f%%", errosP*100);
}
