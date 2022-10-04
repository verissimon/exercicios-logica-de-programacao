#include "matriz.h"

int main() {
//   int vet1[TAM], vet2[TAM], vetSum[TAM];
//   criaMatriz(vet1);
//   printf("----------matriz1----------\n");
//   preencheMatriz(vet1);
//   imprimeMatriz(vet1);

//   criaMatriz(vet2);
//   printf("----------matriz2----------\n");
//   preencheMatriz(vet2);
//   imprimeMatriz(vet2);
    int vetA[] = {3, 4,
                  1, 2,
                  0, 4};    //lin1 = 3 col1 =2
    int vetB[] = {6, 2, 3,
                  2, 1, 3}; //lin2 = 2 col2=3
    
    //vetProd[4] = {30, 14, 12, 6};
  produtoMatriz(vetA, vetB, 3, 2, 2, 3);
  return 0;
}
