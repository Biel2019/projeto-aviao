#include "tipos.h"

void inserir (TLista *p, Lvoo *q)
{	TElemento *novo;
    TDadosvoo *novo2;
    TDadosvoo *aux;
	novo2 = (TDadosvoo*) malloc(sizeof(TDadosvoo));
    int x;
    aux=q->inicio;

if(q->inicio==NULL){
	printf("Nao ha nenhum voo\n");
	getch();
	
}
else
{
	int pesquisa;
	novo = (TElemento*) malloc(sizeof(TElemento));

	printf("\nVoo a ser inserido: ");
	scanf("%d",&pesquisa);
	
	do{

		if(pesquisa==aux->codVoo){
		system("cls");
		printf("\n Codigo: %d", aux->codVoo);
		printf("\n Origem: %s", aux->origem);
		printf("\n Destino: %s\n", aux->destino);
		printf("\n--                                -----\n");
			printf("\n Informe o nome :");
	scanf("%s", &novo->nome);
				novo->bilete=pesquisa;
				aux= aux->proximo;
		}else{
			aux= aux->proximo;
		}
		if(aux==NULL){
			printf("Voo inexistente.\n");
		}
	}while(aux!=NULL);
	

	novo->proximo = NULL;
	
	if (p->inicio == NULL) 
	{
		p->inicio = novo;
		p->fim = novo;
	}
	else
	{
		p->fim->proximo = novo;
		p->fim = novo;
	}
	}
	
  
}


