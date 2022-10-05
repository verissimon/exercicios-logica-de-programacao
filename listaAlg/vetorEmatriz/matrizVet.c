#include "matriz.h"

int main() {
 int vet1[20], vet2[20], vetSum[20], vetProd[20];
  dimensionaM(3, 2);
  zeraMatriz(vet1);
  preencheMatriz(vet1);
  printf("\n");
  //imprimeMatriz(vet1);
  printf("\n");
  dimensionaM(2, 3);
  zeraMatriz(vet2);
  preencheMatriz(vet2);
  printf("\n");
  //imprimeMatriz(vet2);
  printf("\n");
    
    //vetProd[4] = {30, 14, 12, 6};
    printf("produto: \n");
  produtoMatriz(vet1, vet2, vetProd, 3, 2, 2, 3);
  
  return 0;
}
