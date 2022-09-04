#include <stdio.h>

void intBin(int n) {
    if(n==0 || n==1) printf("%d", n);
    else {
        intBin(n/2);
        printf("%d", n%2);
    }
}

void main(){
    int decimal;
    printf("qual numero sera convertido para binario? ");
    scanf("%d", &decimal);
    intBin(decimal);
}