#include <stdio.h>
void main(){
    int nCandidato;
    printf("insira numero do candidato com 5 digitos\n");
    scanf("%d", &nCandidato);
    int nPartido = nCandidato/1000;
    switch(nPartido){
        case 10: printf("partido A10"); break;
        case 20: printf("partido B20"); break;
        case 30: printf("partido C30"); break;
        case 40: printf("partido D40"); break;
        default: printf("invalido");
    }
}