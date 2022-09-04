#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int RNG(){ //gera numero pseudo aleatorio entre 0 e 9
    return rand()%9;
}


const int SIZE=5;

void lerVetor(float vetor[SIZE]){
    for(int i=0; i<SIZE; i++){
        printf("insira o valor [%d] do vetor: ", i);
        scanf("%f", &vetor[i]);
    }
}

void vetorRand(float vetor[SIZE]){
    for(int i=0; i<SIZE; i++){
        vetor[i]=RNG();
    }
}
void printVetor(float vetor[SIZE]){
    int i;
    printf("[");
    for(i=0; i<SIZE; i++){
        printf("%f", vetor[i]);
        if(i!=SIZE-1) printf(",\t");
    }
printf("]\n");
}
float prodEsc(float vetor1[SIZE], float vetor2[SIZE]){
    float sum=0;
    for(int i=0; i<SIZE; i++){
        sum+=vetor1[i]*vetor2[i];
    }
    return sum;
}
void main(){
    srand(time(NULL));
    float v1[SIZE];
    float v2[SIZE];
    vetorRand(v1);
    vetorRand(v2);

    //lerVetor(v1);
    printVetor(v1);
    //lerVetor(v2);
    printVetor(v2);
    //printf("o produto escalar eh: %d", prodEsc(v1, v2));
}