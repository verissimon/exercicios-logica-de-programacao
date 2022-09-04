/*
Escreva um programa que leia o tamanho de um arquivo em MB e a taxa de
transmissão da rede em KB/s e calcule o tempo aproximado necessário para a
transmissão do arquivo. A resposta deve ser dada através de uma mensagem na forma
X horas, Y minutos e Z segundos
*/
#include <stdio.h>
#include <math.h>

void main(){

    unsigned int size, speed;

    printf("informe o tamanho do arquivo(MB) e a taxa de download(kb/s): ");
    scanf("%d%d", &size, &speed);
    float tTotal = 1024*size/speed;
    float tHora = (int)tTotal/3600;
    double parteInteira;
    float tMin = (int)(modf(tTotal/3600, &parteInteira)*60);
    float tSec = modf(tTotal/60, &parteInteira)*60;
    printf("%.0f horas, %.0f minutos e %.0f segundos", tHora, tMin, tSec);
/*  versao da aula
    int tHora = tTotal/3600;
    int tMin = (int)(tTotal%3600/60);
    int tSec = (int)(tTotal%60%60);
    
*/
}