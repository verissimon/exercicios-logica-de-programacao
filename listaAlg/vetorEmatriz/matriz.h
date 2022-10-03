#include <stdio.h>
#include <stdlib.h>
const int TAM = 9, col = 3, linha = 3; // constante porque variável dá problema
// TAM = tamanho do vetor. ex: matriz[4][4] tem 16 elementos e TAM=4*4
// col é o numero de colunas. tem que ser global pra ser acessado pelas funcoes.
// dado pelo usuário no main. é constante durante a execucao

void zeraMatriz(int vet[TAM]) {
  for (int k = 0; k < TAM; k++) {
    vet[k] = 0;
  }
}

void imprimeMatriz(int vet[TAM]) {
  printf("A matriz eh:\n");
  for (int k = 0; k < TAM; k++) {
    if ((k % col) == 0 && (k != 0))
      printf("\n");
    // quebra de linha. sem ela, o vetor é impresso numa linha só
    printf("%d\t", vet[k]);
  }
  printf("\n");
}

void adicionaElemento(int vet[TAM], int valor, int linha, int coluna) {
  vet[linha * col + coluna] = valor;
}

int acessaElemento(int vet[TAM], int i, int j) {
  if (i < linha && j < col)
    return vet[i * col + j];
  return 0;
}
// tem como parametros as coordenadas da matriz mat[i][j]
// retorna o valor na posicao dada

void somaMatriz(int vet1[TAM], int vet2[TAM], int vetSum[TAM]) {
  for (int k = 0; k < TAM; k++) {
    vetSum[k] = vet1[k] + vet2[k];
  }
}
// mat[i][j] = mat1[i][j] + mat2[i][j]
void preencheMatriz(int vet[TAM]) {
  for (int i = 0; i < linha; i++) {
    for (int j = 0; j < col; j++) {
      int valor;
      printf("valor da matriz[%d][%d} = ", i, j);
      scanf("%d", &valor);
      adicionaElemento(vet, valor, i, j);
    }
  }
}
void criaMatriz(int vet[TAM]) {
  // printf("quantas linhas e colunas na matriz?\n");
  // scanf("%d%d", &linha, &col);
  // variaveis globais pra dimensionar a matriz
  // usuario informa tamanho da matriz
  // TAM = linha * col;
  zeraMatriz(vet);
}
void produtoMatriz(int vet1[6], int vet2[6], int lin1, int col2){
    //vet1[3][2] -> TAM1 = 6 --------- vet2[2][3] -> TAM2 = 6
    //vetProd[3][3] TAM = 9
    

}