#include "funcionario.h"
int i = 0, op;

int main() {
  FuncNodo * Funcionarios = criaPessoa(); //cria ponteiro para o primeiro funcionario e preenche seus dados
  int indiceBusca = 1;
  
    adicionaFunc(Funcionarios);
    adicionaFunc(Funcionarios);
    
    
  printBusca(Funcionarios, indiceBusca);

}