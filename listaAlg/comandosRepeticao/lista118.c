/*Escreva um programa que leia um numero N e imprima os N primeiros numeros
primos positivos*/
#include <stdio.h>

void main(){
    int n, contDiv, contPrim=0, num=2;
    printf("escreva quantos primos: ");
    scanf("%d", &n);
    while(contPrim < n){
        contDiv=0;
        for(int i=1; i<=num; i++){
            if(num%i==0) contDiv++;
        }

        if(contDiv==2) {
            printf("%d \n", num);
            contPrim++;
        }
        num++;
    }
}