#include "tipos.h"
void reservarBilhete(TLista*p){
	Tpass * novo;
	novo = (Tpass*) malloc(sizeof(Tpass));
	printf("\n Qual o nome do passageiro:");
	scanf("%c",&novo->nome);
	novo->proximo = NULL;
	if(p->inicio == NULL){  
		p->inicio = novo;
		p->fim = novo;
	}else{
		p->fim->proximo = novo;
		p->fim = novo;
	}
	
}
