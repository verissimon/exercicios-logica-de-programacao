#include <stdio.h>

int fib(int n){
    if(n>2) return fib(n-1)+fib(n-2);
    return 1;
}

void main(){
    int n;
    printf("o n para calcular enesimo termo da sequencia de fibonacci: ");
    scanf("%d", &n);
    printf("o enesimo (n=%d) termo da sequencia de fibonacci eh: %d", n, fib(n));
}