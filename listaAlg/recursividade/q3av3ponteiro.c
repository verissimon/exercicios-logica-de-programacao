#include <stdio.h>
int controle;
void printFigura(int* n){
    if(*n > 0){
        for(int i = 0; i <= controle-*n; i++){
            printf("*");
        }
        printf("\n");
        int nMenos1 = *n - 1;
        printFigura(&nMenos1);
    }
}

void main(){
    int n;

    printf("quantas linhas? ");
    scanf("%d", &n);
    controle = n;
    printFigura(&n);
}