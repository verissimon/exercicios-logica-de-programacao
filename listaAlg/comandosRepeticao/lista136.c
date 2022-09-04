/*Escreva um programa que leia um número inteiro positivo N e calcule o seu valor
correspondente em binário*/
#include <stdio.h>
#include <math.h>

void main(){
    int n, resto, a[20], i=0, j;
    printf("insira inteiro positivo n: ");
    scanf("%d", &n);
    
    while(n>0){
        resto=n%2;
        n=n/2;
        a[i]=resto;
        i++;
    }
    for(j=i-1; j>=0; j--)
        printf("%d", a[j]);
        
/*    int n0=n;
    do{
        resto=n0%2;
        n0=n0/2;
        i++;
    }while(n0>0);
    double resultado=0;
    for(j=i-1; j>=0; j--){
        resto=n%2;
        n=n/2;
        resultado=resultado+resto*pow((double)10, (double)(j));

        if(resto*pow((double)10, (double)(j)==0))
            printf("0");

    }
            printf("%.0f ", resultado);
            */
}