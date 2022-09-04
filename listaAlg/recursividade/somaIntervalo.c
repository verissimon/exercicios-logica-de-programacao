#include <stdio.h>

int somaIntervalo(int min, int max){
    if(min==max) return min;
    return min + somaIntervalo(min+1, max);
}

void main(){
    int a, b;

    printf("insira os numeros do intervalo a ser calculado: ");
    scanf("%d%d", &a, &b);
    if(a<=b) 
        printf("a soma do intervalo de %d ate %d eh %d", a, b, somaIntervalo(a, b));
    else 
        printf("a soma do intervalo de %d ate %d eh %d", b, a, somaIntervalo(b, a));
}