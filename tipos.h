#ifndef _tipos_
#define _tipos_
#include "stdlib.h"
#include "stdio.h"
#include "conio.h"
typedef struct passageiro{
	typedef struct passageiro *proximo;
	char nome[100];
	int bilhete;
}Tpass;
typedef struct listaPass{
	Tpass *inicio;
	Tpass *fim;
}TListaP;
typedef struct voo {
	typedef struct voo *proximo;
	int codVoo;
	char origem[100];
	char destino[100];
}Tvoo;
typedef struct listaVoo{
	Tvoo *inicio;
	Tvoo* fim; 

}TLista;
void reservarBilhete(TLista*p, TListaP*v);
void inicializar(TLista *p, TListaP*v);
//void inserirVoo(TLista*p);
//void apresentarPassageiro(TLista*p);
//void apresentarvoo(TLista*p);
//void ordenarLista (TLista*p);
//void excluirPassageiro(TLista);
#endif
