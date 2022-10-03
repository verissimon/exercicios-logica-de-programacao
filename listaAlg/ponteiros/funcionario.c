#include "funcionario.h"
int i = 0, op;

int main() {
  Lista *listaFunc = criarLista();
  int indiceBusca;
  adicionaFunc(listaFunc);
  printFunc(listaFunc);
}