#include <windows.h>

char tNome[50], tUsuario[50], tSenha[50];
int tIdade, tCPF, tTelefone;


void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}


void menuConfirma(){
	printf("|                                                                    |\n");
	printf("| 1 => Confirmar, 2 => Cancelar                                      |\n");
	printf("| Escolha uma das opcoes acima:                                      |\n");
	printf("|                                                                    |\n");
	printf("|--------------------------------------------------------------------|\n");
}



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
	
	
	menuConfirma();
	gotoxy(32, 15);
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
	printf("|--------------------------------------------------------------------|\n");
}


