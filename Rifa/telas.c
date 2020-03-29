#include "variaveis.c"
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>


void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}



//30 caracteres por linha (max 80x24, padrao 70x20)
//printf("|                                                                    |\n");


void cadastrarCliente(){
	system("cls");
	printf("|----------------------------|\n| Cadastrar Cliente          |\n|--------------------------------------------------------------------|\n");
	printf("|                                                                    |\n");
	printf("| DADOS DO CLIENTE                                                   |\n");
	printf("|____________________________________________________________________|\n");
	printf("|                                                                    |\n");
	printf("|            Digite o nome:                                          |\n");
	printf("| Digite o nome de usuario:                                          |\n");
	printf("|           Digite a senha:                                          |\n");
	printf("|           Digite a idade:                                          |\n");
	printf("|             Digite o CPF:                                          |\n");
	printf("|        Digite o telefone:                                          |\n");
	printf("|                                                                    |\n");
	printf("|--------------------------------------------------------------------|\n");
	
	gotoxy(28, 7);
	scanf("%s", &tNome);
	
	gotoxy(28, 8);
	scanf("%s", &tUsuario);
	
	gotoxy(28, 9);
	scanf("%s", &tSenha);

	gotoxy(28, 10);
	scanf("%i", &tIdade);
	
	gotoxy(28, 11);
	scanf("%i", &tCPF);
	
	gotoxy(28, 12);
	scanf("%i", &tTelefone);
	
	
	printf("|                                                                    |\n");
	printf("| Escolha:                                                           |\n");
	printf("| 1 => Confirmar, 2 => Cancelar                                      |\n");
	printf("|                                                                    |\n");
	printf("|--------------------------------------------------------------------|\n");

	gotoxy(32, 15);
}

void telaInicial (){
	system("cls");
	printf("|----------------------------|\n| Sistema de Rifa            |\n|--------------------------------------------------------------------|\n");
	printf("|                                                                    |\n");
	printf("| Inicio                                                             |\n");
	printf("|____________________________________________________________________|\n");
	printf("|                                                                    |\n");
	printf("| Escolha:                                                           |\n");
	printf("| 1 => Cadastrar, 2 => Logar                                         |\n");
	printf("|                                                                    |\n");
	printf("|--------------------------------------------------------------------|\n");

}



void fazerLogin(){
    system("cls");
	printf("|----------------------------|\n| Fazer Login                |\n|--------------------------------------------------------------------|\n");
	printf("|                                                                    |\n");
	printf("| LOGIN                                                              |\n");
	printf("|____________________________________________________________________|\n");
	printf("|                                                                    |\n");
	printf("| Digite o nome de usuario:                                          |\n");
	printf("|           Digite a senha:                                          |\n");
	printf("|                                                                    |\n");
	printf("|--------------------------------------------------------------------|\n");

}


