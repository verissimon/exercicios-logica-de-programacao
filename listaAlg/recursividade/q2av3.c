#include <stdio.h>

int kEsimo(int n, int k){
    if(n==0) return 0;
    if(k==1) return n%10;
    return kEsimo(n/10, k-1);
}

void main(){
    int num = 1234;
    int k = 5;
    printf("%d", kEsimo(num, k));
}