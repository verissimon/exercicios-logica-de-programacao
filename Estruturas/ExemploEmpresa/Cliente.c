/*Programa Cliente para testar os TADs criados 
na Disciplina Estrutura de Dados*/

/*Bibliotecas da Linguagem utilizadas pelo cliente*/
#include <stdio.h>
#include <stdlib.h>

/*Bibliotecas criadas no programa (TADs)*/
#include "Funcionario.h"
#include "ListaFuncionario.h"

/*Fun��o que imprime o menu principal do programa*/
void imprime_menu(){

  printf("\n--------------- M E N U ---------------\n");
  printf("---------------------------------------\n\n");
  printf("     1 - Adiciona Funcionario\n");
  printf("     2 - Remove Funcionario \n");
  printf("     3 - Busca Funcionario\n");
  printf("     4 - Imprime Lista de Funcionarios\n");
  printf("     5 - Deleta Lista\n");
  printf("---------------------------------------\n\n");
}


int main(int argc, char *argv[]) {
	
	ListaFuncionario* list = lista_cria();
	
	do{
		
		int valor=0;
		imprime_menu(); // mostra o menu sempre depois de uma a��o
		scanf ("%d",&valor);
			
		switch ( valor ) {
			
		     case 1 :   //Adiciona um Funcionario
		       {
		       	Funcionario* f = cria_Funcionario();
			       	if(f!=NULL){
					   
					    imprime_Func(f);
				       	system("pause"); //espera teclar
				       	system("cls"); //limpa a tela
				       	list = lista_insere_inicio(list,f);
			       	    printf("Funcionario adicionado com Sucesso!!\n");
			       	    system("pause"); //espera teclar
				       	system("cls"); //limpa a tela
				       	
			       }else printf("Memoria insuficiente!!\n");
			   }
		     break;
		 
		     case 2 :    //Remove Funcion�rio
		       {
		       	int mat=0;
		        printf("Digite a matricula do Funcionario\n");
				scanf ("%d",&mat);
				list = lista_remove(list, mat);
				system("pause"); //espera teclar
				system("cls"); //limpa a tela
			   }
		     break;
		 
		     case 3 :   //Busca Funcionario
		        {
		        int mat=0;
		        printf("Digite a matricula do Funcionario\n");
				scanf ("%d",&mat);
				Funcionario* f_aux = busca(list,mat);
				if(f_aux!=NULL){
				
					imprime_Func(f_aux);
					system("pause");
					system("cls");
					 
		    	}
				else {
						printf("Nao foi possivel retornar Funcionario\n");
						system("pause");
						system("cls");	
						 	
					}
		         break;
	     	   }
			 case 4 :    //Imprime a Lista de Funcionarios
		    {
		        printf("\n=========== E M P R E S A ================\n");
                printf("==========================================\n\n");
		      	lista_imprime(list);
		      	printf("==========================================\n\n");
		      	system("pause"); //espera teclar
			    system("cls"); //limpa a tela
			  }
		     break;
		     case 5 :  //Deleta a Lista
		      {
		      	/*List receber� NULL ap�s libera��o do espa�o de mem�ria
				  para o programa manter uma referencia da Lista*/
		      	list = lista_libera(list); 
			  }
	
		     break;	 
		     	 
		     default :
		     	{
				   printf ("Valor invalido!\n\n");
				   system("pause");
				   system("cls");
		     	}
        }
		
	}while(1); //Loop infinito
       
 }
 
 
