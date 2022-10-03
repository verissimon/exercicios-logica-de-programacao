#include "matriz.h"

int main() {
  int vet1[TAM], vet2[TAM], vetSum[TAM];
  criaMatriz(vet1);
  printf("----------matriz1----------\n");
  preencheMatriz(vet1);
  imprimeMatriz(vet1);

  criaMatriz(vet2);
  printf("----------matriz2----------\n");
  preencheMatriz(vet2);
  imprimeMatriz(vet2);
  return 0;
}