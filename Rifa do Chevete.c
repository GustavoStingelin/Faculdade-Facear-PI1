#include <stdio.h>
#include <conio.h>
#include<stdlib.h>

	
int escolha;


void cadastrarCliente(){
	printf("|----------------------------|\n| Cadastrar Cliente          |\n|--------------------------------------------------------------------|\n");
	//30 caracteres por linha (max 80x24, padrao 70x20)
	//printf("|                                                                    |\n");
	printf("|                                                                    |\n");
		//----------------------------------------------------------------------------------------------------------------------------------
	
	
	printf("| DADOS DO CLIENTE                                                   |\n");
	printf("|____________________________________________________________________|\n");
	printf("|                                                                    |\n");
	printf("|            Digite o nome:                                          |\n");
	printf("| Digite o nome de usuario:                                          |\n");
	printf("|           Digite a senha:                                          |\n");
	printf("|           Digite a idade:                                          |\n");
	printf("|             Digite o CPF:                                          |\n");
	printf("|        Digite o telefone:                                          |\n");
	
	//----------------------------------------------------------------------------------------------------------------------------------
	printf("|                                                                    |\n");
	printf("|____________________________________________________________________|\n");
	
	
}

void fazerLogin(){
	printf("|----------------------------|\n| Fazer Login                |\n|------------------------------------------**************************|\n");
	//30 caracteres por linha (max 80x24, padrao 70x20)
	//printf("|                                                                    |\n");
	printf("|                                                                    |\n");
		//**********************************************************************************************************************************
	
	
	
	
	printf("| Digite o nome de usuario:                                          |\n");
	printf("|           Digite a senha:                                          |\n");
	
	
	//**********************************************************************************************************************************
	printf("|                                                                    |\n");
	printf("|********************************************************************|\n");
}

void gerenciarCliente(){
	printf("|****************************|\n| Gerenciar Cliente          |\n|********************************************************************|\n");
	//30 caracteres por linha (max 80x24, padrao 70x20)
	//printf("|                                                                    |\n");
	printf("|                                                                    |\n");
		//**********************************************************************************************************************************
	
	
	
	
	printf("| *                                         |\n");
	printf("|           *                                          |\n");
	
	
	//**********************************************************************************************************************************
	printf("|                                                                    |\n");
	printf("|********************************************************************|\n\n\n");
}

void menuConfirma(){
	printf("|                                                                    |\n");
	printf("| 1 => Confirmar, 2 => Cancelar                                      |\n");
	printf("| Escolha uma das opcoes acima:                                      |\n");
	printf("|                                                                    |\n");
	printf("|********************************************************************|\n");
}
main() {
	escolha = 0;
	
	
	printf("Escolha o menu: 1 - Cadastrar Cliente or 2 - Fazer login \n");
	scanf("%I", &escolha);
	
	if (escolha = 1){
		system("cls");
		cadastrarCliente();
		menuConfirma();	
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
