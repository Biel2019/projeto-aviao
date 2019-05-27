#include "tipos.h"

void voo (Lvoo *q)
{
	TDadosvoo *novo;
	novo = (TDadosvoo*) malloc(sizeof(TDadosvoo));
	system("cls");
	printf("Criar voo:\n");
	printf("\n--------------------\n");
	printf("Inserir codigo do voo:\n");
	scanf("%d",&novo->codVoo);
	fflush(stdin);
	printf("\nInserir origem do voo:\n");
	gets(novo->origem);
	printf("\nInserir destino do voo: \n");
	gets(novo->destino);
	fflush(stdin);
	
		novo->proximo = NULL;
	
	
	if (q->inicio == NULL) 
	{
		q->inicio = novo;
		q->fim = novo;
	}
	else
	{
		q->fim->proximo = novo;
		q->fim = novo;
	}
}
	

