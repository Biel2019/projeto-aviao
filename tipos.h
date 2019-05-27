#ifndef _tipos_
#define _tipos_

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tipoElemento
{
	char nome[30];
	int bilete;
	struct tipoElemento *proximo;
}TElemento;

typedef struct tipoLista
{
	TElemento *inicio;
	TElemento *fim;
}TLista;

typedef struct DadosVoo
{
	int codVoo;
	char origem[30];
	char destino[30];
	char nome[30];
	int id;
	struct DadosVoo *proximo;
}TDadosvoo;

typedef struct tipoVoo
{
	TDadosvoo *inicio;
	TDadosvoo *fim;
}Lvoo;

void inserir(TLista *p, Lvoo *q);
void apresentar(TLista *p);
void inicializar(TLista *p);
void inicializarvoo(Lvoo *q);
void voo(Lvoo *q);
void apresentarvoo(Lvoo *q,TLista *p);


#endif









