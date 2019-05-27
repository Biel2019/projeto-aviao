#include "tipos.h"

void apresentarvoo(Lvoo *q,TLista *p)
{
	TDadosvoo *aux;
	TDadosvoo *novo2;
	
	aux = q->inicio;

	if(aux!=NULL){
	
	
	while(aux != NULL)
	{
		printf("\n Codigo: %d", aux->codVoo);
		printf("\n Origem: %s", aux->origem);
		printf("\n Destino: %s", aux->destino);
	    printf("\nLista passageiros:\n----------------------------------\n");
        printf("Nome:%s",aux->nome);
	
		aux = aux->proximo;
	
		printf("\n----------------------------------------\n");
	}
}else
{
	printf("\nLista vazia\n");
}
	getch();
}

