/*A matemática prova que números inteiros podem ser representados de maneira única
como um produto de potências de números primos distintos. Com base nessa
informação, escreva um programa que leia um número inteiro positivo e o imprima
como um produto de números primos*/
#include <stdio.h>

void main(){
    int n, div=2;
    scanf("%d", &n);
    while(div<=n){ 
        while(n%div==0){
            //if(n==div) printf("%d", div); else
            printf("%dx", div);
            n=n/div;
        }
        div++;
    }

}