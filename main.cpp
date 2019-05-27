#include "tipos.h"
int main (){
	TLista L;
	inicializar(&L);
	int opc;
	do{
		printf("\n 1 - Reserva de bilhete");
		printf("\n 2 - Cancelamento de bilhete");
		printf("\n 3 - Pesquisar bilhete");
		printf("\n 4 - relatorio de voos");
		printf("\n 5 - Lista de passageiros");
		printf("\n 6 - Inserir voo");
		printf("\n 0 - Sair");
		printf("\n Escolha uma opcao: ");
		scanf("%d",&opc);
		switch (opc)
		{
			case 1:reservarBilhete(&L);break;
			case 2:break;
			case 3:break;
			case 4:break;
			case 5:break;
			case 6:break;
			case 0:break;
		}		
	}while(opc != 0);
}
