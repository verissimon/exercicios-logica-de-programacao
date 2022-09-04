#include <stdio.h>

void saltaLinha(int n){
    if(n>0){
        printf("\n");
        saltaLinha(n-1);
    }
}

void main(){
    int linhas;
    printf("saltar quantas linhas? ");
    scanf("%d", &linhas);
    printf("aaaaaaaaaaaaaaaa");
    saltaLinha(linhas);
    printf("aaaaaaasdojaosdj");
}