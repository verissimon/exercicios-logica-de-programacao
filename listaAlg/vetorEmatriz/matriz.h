#include <stdio.h>
#include <stdlib.h>
int TAM, col, linha; // constante porque variável dá problema
// TAM = tamanho do vetor. ex: matriz[4][4] tem 16 elementos e TAM=4*4
// col é o numero de colunas. tem que ser global pra ser acessado pelas funcoes.
// dado pelo usuário no main. é constante durante a execucao
void dimensionaM(int a, int b) {
  linha = a;
  col = b;
  TAM = a * b;
}
void zeraMatriz(int vet[]) {
  for (int k = 0; k < TAM; k++) {
    vet[k] = 0;
  }
}

void imprimeMatriz(int vet[]) {
  printf("A matriz eh:\n");
  for (int k = 0; k < TAM; k++) {
    if ((k % col) == 0 && (k != 0))
      printf("\n");
    printf("%d\t", vet[k]);
  }
  printf("\n");
}

void adicionaElemento(int vet[], int valor, int linha, int coluna) {
  vet[linha * col + coluna] = valor;
}

int acessaElemento(int vet[], int i, int j) {
  if (i < linha && j < col)
    return vet[(i*col + j)];
  return 0;
}
// tem como parametros as coordenadas da matriz mat[i][j]
// retorna o valor na posicao dada

void somaMatriz(int vet1[], int vet2[], int vetSum[]) {
  for (int k = 0; k < TAM; k++) {
    vetSum[k] = vet1[k] + vet2[k];
  }
}
// mat[i][j] = mat1[i][j] + mat2[i][j]

void transpostaSomaMatriz(int vet1[], int vet2[]){
	int vetSum[TAM], vetTransp[TAM];
	zeraMatriz(vetSum);
	somaMatriz(vet1, vet2, vetSum);
	for(int i = 0; i < linha; i++){
		for(int j =0; j < col; j++){
			vetTransp[i*col + j] = vetSum[j*col + i];
	}
    imprimeMatriz(vetTransp);
}
}
void preencheMatriz(int vet[]) {
  for (int i = 0; i < linha; i++) {
    for (int j = 0; j < col; j++) {
      int valor;
      printf("valor da matriz[%d][%d] = ", i, j);
      scanf("%d", &valor);
      adicionaElemento(vet, valor, i, j);
    }
  }
}

void produtoMatriz(int vet1[], int vet2[], int lin1, int col1, int lin2, int col2){
    if(col1 == lin2){
        const int TAM = lin1*col2;
        int vetProd[TAM];
        dimensionaM(lin1, col2);
        zeraMatriz(vetProd);
        for(int i = 0; i < lin1; i++){
            for(int j = 0; j < col2; j++){
                for(int k = 0; k < lin2; k++){
                    vetProd[i*col2 + j] += vet1[i*col1 + k] * vet2[k*col2 + j];
                }
            }
        }
        
        imprimeMatriz(vetProd);
        printf("%d", vetProd[2*col2 + 2]);
    }
    else printf("erro\n");

}
