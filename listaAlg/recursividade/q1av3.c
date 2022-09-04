#include <stdio.h>

int nAlgarismos(int n){
    if(n==0) return 0;
    else return 1 + nAlgarismos(n/10);
}

void main(){
    int n;
    scanf("%d", &n);
    printf("tem %d algarimos", nAlgarismos(n));
}