#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "telas.c"
	
int escolha;



int main(VOID) {
	escolha = 0;
	
	
	printf("Escolha o menu: 1 - Cadastrar Cliente or 2 - Fazer login \n");
	scanf("%i", &escolha);
	
	if (escolha = 1){
		system("cls");
		cadastrarCliente();
	//	menuConfirma();	
		getchar();
	}
	else if (escolha = 2){
		system("cls");
		fazerLogin();
		menuConfirma();
		getchar();
	}
	

	getchar();
}
