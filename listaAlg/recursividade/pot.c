#include <stdio.h>

int pot(int base, int expo){
    if(expo==0) return 1;
    return base*pot(base, expo-1);
}

void main(){
    int a, b;
    printf("qual a base e o expoente do numero a ser calculado: ");
    scanf("%d%d", &a, &b);
    printf("%d^%d=%d", a, b, pot(a, b));
}