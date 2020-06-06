

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
	printf("| 0 => Fechar o Sistema                                              |\n");	
	printf("|                                                                    |\n");
	printf("|--------------------------------------------------------------------|\n");
	gotoxy(10, 7);
}

void fecharSistema(){
    system("cls");
	printf("|----------------------------|\n| FECHAR O PROGRAMA          |\n|--------------------------------------------------------------------|\n");
	printf("|                                                                    |\n");
	printf("| Deseja mesmo encerrar o sistema?                                   |\n");
	printf("|____________________________________________________________________|\n");
	printf("|                                                                    |\n");
	printf("|            Digite <S> para fechar.                                 |\n");
	printf("|            Escolha:                                                |\n"); //8	x 21
	printf("|                                                                    |\n");
	printf("|--------------------------------------------------------------------|\n");
	gotoxy(21, 8);
	escolha = getche();

	if( escolha == 83 || escolha == 115){
	system("cls");
	printf("Saindo...\n");
	sleep(3);
	exit(0);
	}
	else{
		msgOpcaoInvalida();
		main();
	}

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
	//fflush(stdin);
	//fgets(tNome, 20, stdin);

	gotoxy(28, 8);
	fflush(stdin);	
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
		int i;
		i = ultimoUsuarioVetor + 1;
		usuarios[i].idUsr = i + 1;
		strcpy(usuarios[i].usuarioUsr, tUsuario);
		strcpy(usuarios[i].senhaUsr, tSenha);
		strcpy(usuarios[i].nomeUsr, tNome);
		strcpy(usuarios[i].cpfUsr, tCPF);
		strcpy(usuarios[i].telefoneUsr, tTelefone);
		usuarios[i].idadeUsr = atoi(tIdade);

		system("cls");
		printf("%i\n", usuarios[i].idUsr);
		puts(usuarios[i].usuarioUsr);
		puts(usuarios[i].senhaUsr);
		puts(usuarios[i].nomeUsr);
		puts(usuarios[i].cpfUsr);
		puts(usuarios[i].telefoneUsr);
		printf("%i", usuarios[i].idadeUsr);
		sleep(3);

		ultimoUsuarioVetor = ultimoUsuarioVetor + 1;
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

int fazerLogin(){
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
	
	
	for(int i=0; i <= ultimoUsuarioVetor; i++){
		if(strcmp(usuarios[i].usuarioUsr, loginUsuario) == 0){
			idUsuarioLogado = i + 1;
			break;		
		}
		else{
			idUsuarioLogado = -1;
		}
	}
	if( idUsuarioLogado != -1 && strcmp(loginSenha, usuarios[idUsuarioLogado - 1].senhaUsr) == 0 ){

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
	printf("| 0 => Logoff                                                        |\n");
	printf("|--------------------------------------------------------------------|\n");

	gotoxy(12, 4);
	puts(loginUsuario);
	printf("!");
	gotoxy(10, 7);
	rLobby = 0;

	escolha = getche();
	if( escolha >= 48 && escolha <= 51){
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
	
	gotoxy(18, 7);
	printf("01 - ");
	puts(tTituloRifa);

	gotoxy(18, 8);
	puts(tValorRifa);

	printf("\n|     ");



	int nRifa = atoi(tNumerosRifa);
    int n;
	int colunasRifa = 15;
	for(n = 1; n <= nRifa; n++){

		if( n % colunasRifa == 1 && n != (nRifa + 1)){
			printf("\n|     ");
		}
		if(n <= 9){
			printf("0");
		}
		printf("%i ", n);
	}

	printf("\n|                                                                    |\n");
	printf("|--------------------------------------------------------------------|\n");


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
    printf("|   Escolha a Rifa:                                                  |\n");
    printf("|                                                                    |\n");
    printf("|                                                                    |\n");
    printf("|                                                                    |\n");
    printf("|                                                                    |\n");
    printf("|                                                                    |\n");
    printf("|                                                                    |\n");
    printf("|                                                                    |\n");
    printf("|                                                                    |\n");
    printf("|                                                                    |\n");
    printf("|                                                                    |\n");
    printf("|                                                                    |\n");
	printf("|                                                                    |\n");
    printf("|--------------------------------------------------------------------|\n");


	gotoxy(10, 10);
	printf("01 - ");
	puts(tTituloRifa);

	gotoxy(18, 11);
	puts(tValorRifa);


	gotoxy(20, 7);
	scanf(" %[^\n]s", &x);

	getch();
	menuLobby();
}
