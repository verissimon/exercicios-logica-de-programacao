/*Escreva um programa que simule uma votação. O programa deve computar o voto de
20 eleitores e depois deve imprimir a quantidade e o percentual de votos recebidos
por cada candidato, bem como a quantidade e o percentual de votos nulos. As opções
de voto são*/
#include <stdio.h>
const int eleitores = 20;

void main(){
    int i, voto, joao=0, ze=0, maria=0, ana=0, nulo=0;
    for(i=0; i<eleitores; i++){
        printf("insira seu voto (1, 2, 3, ou 4. nulo se nenhum deles): ");
        scanf("%d", &voto);
        switch(voto){
            case 1: joao++;     break;
            case 2: ze++;       break;
            case 3: maria++;    break;
            case 4: ana++;      break;
            default: nulo++;    break;
        }
        printf("joao teve %d votos, %.2f %%\n", joao, 100*joao/20.0);
        printf("ze teve %d votos, %.2f %%\n", ze, 100*ze/20.0);
        printf("maria teve %d votos, %.2f %%\n", maria, 100*maria/20.0);
        printf("ana teve %d votos, %.2f %%\n", ana, 100*ana/20.0);
        printf("nulo teve %d votos, %.2f %%\n", nulo, 100*nulo/20.0);

    }
}