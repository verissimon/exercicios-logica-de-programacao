/* TAD: Lista */

/* Tipo exportado */
typedef struct lista ListaFuncionario;

/********************************************************************************/
/******************* Fun��es exportadas *****************************************/

/* Fun��o cria Lista- Aloca e retorna uma Lista de Funcion�rios */
ListaFuncionario* lista_cria(void);

/* Fun��o insere no inicio - Insere um Novo Funcion�rio no inicio da Lista */
ListaFuncionario* lista_insere_inicio(ListaFuncionario* list, Funcionario* func);

/* Fun��o busca- busca um Funcionario na lista */
Funcionario* busca(ListaFuncionario* lst, int v);

/* Fun��o Lista Vazia- Testa de a Lista est� vazia  */
int lista_vazia(ListaFuncionario* list);

/* Fun��o Remove - Remove um Funcion�rio da Lista */
ListaFuncionario* lista_remove(ListaFuncionario* list, int val);

/* Fun��o Imprime - Imprime uma Lista de Funcion�rios*/
void lista_imprime(ListaFuncionario* list);

/*Libera o espa�o de mem�ria da lista. Retorna NULL para manter uma refer�cia da lista
no programa cliente;*/
ListaFuncionario* lista_libera(ListaFuncionario* list);
