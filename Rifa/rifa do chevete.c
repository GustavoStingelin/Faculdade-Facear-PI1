#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "telas.c"
#include <ctype.h>
	

int main(VOID) {

	//inicio:

	escolha = 0;
	
	
	printf("Escolha o menu: 1 - Cadastrar Cliente or 2 - Fazer login \n");

	scanf("%s", &escolha);
	
	if (isdigit(escolha)){

		if (escolha == 1){
			system("cls");
			cadastrarCliente();
			getchar();
		}

		else if (escolha == 2){
			system("cls");
			fazerLogin();
			getchar();
		}

	}


	system("cls");
	//goto inicio;
	main();


}
