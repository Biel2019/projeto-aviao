#include "tipos.h"

int main()
{
	
	Lvoo Q;
     inicializarvoo(&Q);
	TLista L;
	int opc;
	 inicializar(&L);
	

	do{
	printf("ALOOOO CACETECH:\n");
	printf("1-Inserir passageiro\n");
	printf("2-Apresentar lista de passageiros\n");
	printf("3-Criar voo\n");
	printf("4-Apresentar voo\n");
	printf("0-Sair\n");
	printf("\nEscolha uma opcao\n");
	scanf("%d",&opc);
	
		
	switch (opc)
	{
		case 1: inserir(&L, &Q); break;
		case 2: apresentar(&L); break;
		case 3: voo(&Q);break;
		case 4: apresentarvoo(&Q, &L);
		case 0: break;	
	}
	
	system("cls");
	}while(opc!=0);
}
