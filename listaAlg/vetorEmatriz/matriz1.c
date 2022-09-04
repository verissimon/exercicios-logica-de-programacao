#include <stdio.h>
#include <time.h>
#include <stdlib.h>
const int nAlvos = 20;
const int LINHA = 10;
const int COLUNA = 10;
const int TENTATIVAS = 15;

void printTabuleiro(int mat[LINHA][COLUNA]){
    int i, j;
    for(i=0; i<LINHA; i++){
        for(j=0; j<COLUNA; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}
void printSol(int mat[2][nAlvos]){
    int i, j;
    for(i=0; i<nAlvos; i++){
        for(j=0; j<2; j++){
            printf("%d\t", mat[j][i]);
        }
        printf("\n");
    }
    printf("\n");
}
void geraSol(int mat[LINHA][COLUNA], int sol[2][nAlvos]){
    int a, b;
    for(int i=0; i<LINHA; i++){
        for(int j=0; j<COLUNA; j++){
            mat[i][j] = 0;
        }
    }
    for(int i=0; i<nAlvos; i++){
        a=rand()%LINHA;
        b=rand()%COLUNA;
        if(mat[a][b]!=1){
            mat[a][b]=1;
            sol[0][i]=a;
            sol[1][i]=b;
        }
        else i--;
    }
}
void main(){

    int tabuleiro[LINHA][COLUNA], solucao[2][nAlvos];
    int playAgain=1;
    while(playAgain!=0){
        int pontos=0;

        srand(time(NULL));
        geraSol(tabuleiro, solucao);

        //printSol(solucao);
        for(int i=0; i<TENTATIVAS; i++){
            int tentativaI;
            int tentativaJ;

            printf("tetativa %d: insira linha (entre 0 e 9) e coluna (entre 0 e 9):\n", i+1);
            scanf("%d%d", &tentativaI, &tentativaJ);
            if(tabuleiro[tentativaI][tentativaJ]==1){
                printf("Acertou. +1 ponto\t");
                pontos++;
                tabuleiro[tentativaI][tentativaJ]=0;
            } else printf("errou\n");
            printf("%d tentativas restantes\n",TENTATIVAS-1-i);
        }
        printTabuleiro(tabuleiro);
        printf("voce fez %d pontos\n", pontos);
        printf("jogar novamente? 0 para nao\t");
        scanf("%d", &playAgain);
    }

}