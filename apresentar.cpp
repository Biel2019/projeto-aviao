#include "tipos.h"

void apresentar(TLista *p)
{
	TElemento *aux;
	TElemento *aux2;
	aux = p->inicio;
	aux2 = p->inicio;
	if(aux!=NULL){
	
	
	while(aux != NULL)
	{
		printf("\n Nome: %s", aux->nome);
		printf("\n Bilete: %d", aux2->bilete);
		aux2 = aux2->proximo;
		aux = aux->proximo;
		printf("\n----------------------------------------\n");
	}
}else
{
	printf("\nLista vazia\n");
}
	getch();
}

