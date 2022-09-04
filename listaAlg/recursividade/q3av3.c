#include <stdio.h>
//int nInicial;

void printFigura(int n){
    /*
    if(n > 0){
        for(int i=0; i <= nInicial-n; i++){
            printf("*");
        }
        printf("\n");
        printFigura(n-1);
    }
    */
    if(n > 0) printFigura(n-1);
    for(int i=0; i < n; i++){
        printf("*");
        if(i == n-1) printf("\n");
    }
    
}

void main(){
    int n;

    printf("quantas linhas? ");
    scanf("%d", &n);
    //nInicial = n;
    printFigura(n);
}