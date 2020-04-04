#include "variaveis.c"

void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//30 caracteres por linha (max 80x24, padrao 70x20)
//printf("|                                                                    |\n");


void msgOpcaoInvalida(){
    system("cls");
	printf("|--------------------------------------------------------------------|\n");
	printf("|                                                                    |\n");
	printf("| OPCAO INVALIDA, TENTE NOVAMENTE!                                   |\n");
	printf("|                                                                    |\n");
	printf("|--------------------------------------------------------------------|\n");
	sleep(2);
	system("cls");
}

void msgSucesso(){
    system("cls");
	printf("|--------------------------------------------------------------------|\n");
	printf("|                                                                    |\n");
	printf("| OPERACAO REALIZADA COM SUCESSO!                                    |\n");
	printf("|                                                                    |\n");
	printf("|--------------------------------------------------------------------|\n");
	sleep(2);
	system("cls");
}

void msgCancelado(){
    system("cls");
	printf("|--------------------------------------------------------------------|\n");
	printf("|                                                                    |\n");
	printf("| OPERACAO CANCELADA!                                                |\n");
	printf("|                                                                    |\n");
	printf("|--------------------------------------------------------------------|\n");
	sleep(2);
	system("cls");
}

void telaInicial (){
	system("cls");
	printf("|----------------------------|\n| Sistema de Rifa            |\n|--------------------------------------------------------------------|\n");
	printf("|                                                                    |\n");
	printf("| Inicio                                                             |\n");
	printf("|____________________________________________________________________|\n");
	printf("|                                                                    |\n");
	printf("| Escolha:                                                           |\n");
	printf("| 1 => Cadastrar-se, 2 => Logar                                      |\n");
	printf("|                                                                    |\n");
	printf("|--------------------------------------------------------------------|\n");
	gotoxy(10, 7);
}

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
	scanf(" %[^\n]s", &tNome);

	gotoxy(28, 8);	
	scanf(" %[^\n]s", &tUsuario);
	
	gotoxy(28, 9);
	scanf(" %[^\n]s", &tSenha);

	gotoxy(28, 10);
	scanf(" %[^\n]s", &tIdade);
	
	gotoxy(28, 11);
	scanf(" %[^\n]s", &tCPF);
	
	gotoxy(28, 12);
	scanf(" %[^\n]s", &tTelefone);
		
	printf("|                                                                    |\n");
	printf("| Escolha:                                                           |\n");
	printf("| 1 => Confirmar, 2 => Cancelar                                      |\n");
	printf("|                                                                    |\n");
	printf("|--------------------------------------------------------------------|\n");
	gotoxy(10, 14);
	confirmaCadastro:
		escolha = getche();
	if (escolha == 49){ // == 1 => Confirmar
		msgSucesso();
		main();
	}

	else if (escolha == 50){ // == 2 => Cancelar 
		msgCancelado();
		main();
	}

	else{
		system("cls");
		printf("|--------------------------------------------------------------------|\n");
		printf("|                                                                    |\n");
		printf("| Escolha:                                                           |\n");
		printf("| 1 => Confirmar, 2 => Cancelar                                      |\n");
		printf("|                                                                    |\n");
		printf("|--------------------------------------------------------------------|\n");
		gotoxy(10, 2);
		goto confirmaCadastro;
	}
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

	gotoxy(28, 7);
	scanf(" %[^\n]s", &loginUsuario);

	gotoxy(28, 8);
	scanf(" %[^\n]s", &loginSenha);
	rLogin = 0;

	if( strcmp(loginUsuario, tUsuario) == 0 && strcmp(loginSenha, tSenha) == 0){
		rLogin = 1;
		return rLogin;
	}
	else{
		rLogin = 0;
	system("cls");
	printf("|----------------------------|\n| Fazer Login                |\n|--------------------------------------------------------------------|\n");
	printf("|                                                                    |\n");
	printf("| LOGIN                                                              |\n");
	printf("|____________________________________________________________________|\n");
	printf("|                                                                    |\n");
	printf("| USUARIO OU SENHA INCORRETO, TENTE NOVAMENTE!                       |\n");
	printf("|                                                                    |\n");
	printf("|--------------------------------------------------------------------|\n");
	sleep(3);
	main();
	}
}

void lobby(){
	system("cls");
	printf("|----------------------------|\n| Sistema de Rifa            |\n|--------------------------------------------------------------------|\n");
	printf("|                                                                    |\n");
	printf("| Bem vindo                                                          |\n");
	printf("|____________________________________________________________________|\n");
	printf("|                                                                    |\n");
	printf("| Escolha:                                                           |\n");
	printf("| 1 => Comprar Rifa, 2 => Cadastrar Rifa, 3 => Sortear Rifa          |\n");
	printf("|                                                                    |\n");
	printf("|--------------------------------------------------------------------|\n");

	gotoxy(12, 4);
	puts(loginUsuario);
	printf("!");
	gotoxy(10, 7);
	rLobby = 0;

	escolha = getche();
	if( escolha > 48 && escolha < 52){
		rLobby = escolha;
		return rLobby;
	}
	else{
		msgOpcaoInvalida();
		rLobby = 0;
		return rLobby;
	}



}

void cadastrarRifa(){
	system("cls");
	printf("|----------------------------|\n| Cadastrar Rifa             |\n|--------------------------------------------------------------------|\n");
	printf("|                                                                    |\n");
	printf("| DADOS DA RIFA                                                      |\n");
	printf("|____________________________________________________________________|\n");
	printf("|                                                                    |\n");
	printf("|        Digite o Titulo da Rifa:                                    |\n");
	printf("| Digite a Quantidade de Numeros:                                    |\n");
	printf("|         Digite o Valor da Rifa:                                    |\n");
	printf("|                                                                    |\n");
	printf("|--------------------------------------------------------------------|\n");
	
	gotoxy(34, 7);
	scanf(" %[^\n]s", &tTituloRifa);

	gotoxy(34, 8);
	scanf(" %[^\n]s", &tNumerosRifa);

	gotoxy(34, 9);
	scanf(" %[^\n]s", &tValorRifa);

	msgSucesso();

	menuLobby();
}	

void comprarRifa(){
	system("cls");
	printf("|----------------------------|\n| Comprar Rifa               |\n|--------------------------------------------------------------------|\n");
	printf("|                                                                    |\n");
	printf("| RIFAS DISPONIVEIS                                                  |\n");
	printf("|____________________________________________________________________|\n");
	printf("|                                                                    |\n");
	printf("|           Rifa:                                                    |\n");
	printf("|  Valor da Rifa:                                                    |\n");
	printf("|                                                                    |\n");
	printf("|                                                                    |\n");
	printf("|                                                                    |\n");
	printf("|                                                                    |\n");
	printf("|                                                                    |\n");
	printf("|                                                                    |\n");
	printf("|                                                                    |\n");
	printf("|--------------------------------------------------------------------|\n");
	
	gotoxy(18, 7);
	printf("01 - ");
	puts(tTituloRifa);

	gotoxy(18, 8);
	puts(tValorRifa);

	printf("\n|     ");



	int nRifa = atoi(tNumerosRifa);
    int n;
	for(n = 1; n <= nRifa; n++){
		printf(" ");
		if(n <= 9){
			printf("0");
		}
		printf("%i", n);
		
		if(n % 15 == 0){
			printf("\n|     ");
		}
	}


	getch();
	menuLobby();
}	

void sortearRifa(){
    system("cls");
    printf("|----------------------------|\n| Sortear Rifa               |\n|--------------------------------------------------------------------|\n");
    printf("|                                                                    |\n");
    printf("| SORTEAR NUMERO                                                     |\n");
    printf("|____________________________________________________________________|\n");
    printf("|                                                                    |\n");
    printf("|   Digite 1 para sortear o vencedor:                                |\n");
    printf("|   Digite 2 para voltar ao menu:                                    |\n");
    printf("|                                                                    |\n");
    printf("|                                                                    |\n");
    printf("|                                                                    |\n");
    printf("|                                                                    |\n");
    printf("|                                                                    |\n");
    printf("|                                                                    |\n");
    printf("|                                                                    |\n");
    printf("|--------------------------------------------------------------------|\n");


	getch();
	menuLobby();
}
