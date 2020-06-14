//30 caracteres por linha (max 80x24, padrao 70x20)
//printf("|                                                                    |\n");

void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void msgOpcaoInvalida(){
	gotoxy(0, 5);
	printf(
		"|____________________________________________________________________|\n"
		"|                                                                    |\n"
		"| OPCAO INVALIDA, TENTE NOVAMENTE!                                   |\n"
		"|                                                                    |\n"
		"|--------------------------------------------------------------------|\n"
		"                                                                      \n"
		"                                                                      \n"
		"                                                                      \n"
		"                                                                      \n"
		"                                                                      \n"
		"                                                                      \n"
		"                                                                      \n"
		"                                                                      \n"
		"                                                                      \n"
	);
	gotoxy(70, 9);
	sleep(2);
	system("cls");
}

void msgSucesso(){
	gotoxy(0, 5);
	printf(
		"|____________________________________________________________________|\n"
		"|                                                                    |\n"
		"| OPERACAO REALIZADA COM SUCESSO!                                    |\n"
		"|                                                                    |\n"
		"|--------------------------------------------------------------------|\n"
		"                                                                      \n"
		"                                                                      \n"
		"                                                                      \n"
		"                                                                      \n"
		"                                                                      \n"
		"                                                                      \n"
		"                                                                      \n"
		"                                                                      \n"
		"                                                                      \n"
	);
	gotoxy(70, 9);
	sleep(2);
	system("cls");
}

void msgCancelado(){
	gotoxy(0, 5);
	printf(
		"|____________________________________________________________________|\n"
		"|                                                                    |\n"
		"| OPERACAO CANCELADA!                                                |\n"
		"|                                                                    |\n"
		"|--------------------------------------------------------------------|\n"
		"                                                                      \n"
		"                                                                      \n"
		"                                                                      \n"
		"                                                                      \n"
		"                                                                      \n"
		"                                                                      \n"
		"                                                                      \n"
		"                                                                      \n"
		"                                                                      \n"
	);
	gotoxy(70, 9);
	sleep(2);
	system("cls");
}

void telaInicial (){
	system("cls");
	printf(
		"|----------------------------|\n"
		"| Sistema de Rifa            |\n"
		"|--------------------------------------------------------------------|\n"
		"|                                                                    |\n"
		"| Inicio                                                             |\n"
		"|____________________________________________________________________|\n"
		"|                                                                    |\n"
		"| Escolha:                                                           |\n"
		"| 1 => Cadastrar-se, 2 => Logar                                      |\n"
		"| 0 => Fechar o Sistema                                              |\n"	
		"|                                                                    |\n"
		"|--------------------------------------------------------------------|\n"
	);
	gotoxy(10, 7);
}

void fecharSistema(){
    system("cls");
	printf(
		"|----------------------------|\n"
		"| FECHAR O PROGRAMA          |\n"
		"|--------------------------------------------------------------------|\n"
		"|                                                                    |\n"
		"| Deseja mesmo encerrar o sistema?                                   |\n"
		"|____________________________________________________________________|\n"
		"|                                                                    |\n"
		"|            Digite <S> para fechar.                                 |\n"
		"|            Escolha:                                                |\n"
		"|                                                                    |\n"
		"|--------------------------------------------------------------------|\n"
	);
	gotoxy(21, 8);
	fflush(stdin);
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
	printf(
		"|----------------------------|\n"
		"| Cadastrar Cliente          |\n"
		"|--------------------------------------------------------------------|\n"
		"|                                                                    |\n"
		"| DADOS DO CLIENTE                                                   |\n"
		"|____________________________________________________________________|\n"
		"|                                                                    |\n"
		"|            Digite o nome:                                          |\n"
		"| Digite o nome de usuario:                                          |\n"
		"|           Digite a senha:                                          |\n"
		"|           Digite a idade:                                          |\n"
		"|             Digite o CPF:                                          |\n"
		"|        Digite o telefone:                                          |\n"
		"|                                                                    |\n"
		"|--------------------------------------------------------------------|\n"
	);
	
	gotoxy(28, 7);
	fflush(stdin);
	scanf(" %[^\n]s", &tNome);
	//fflush(stdin);
	//fgets(tNome, 20, stdin);

	gotoxy(28, 8);
	fflush(stdin);	
	scanf(" %[^\n]s", &tUsuario);
	
	gotoxy(28, 9);
	fflush(stdin);
	scanf(" %[^\n]s", &tSenha);

	gotoxy(28, 10);
	fflush(stdin);
	scanf(" %[^\n]s", &tIdade);
	
	gotoxy(28, 11);
	fflush(stdin);
	scanf(" %[^\n]s", &tCPF);
	
	gotoxy(28, 12);
	fflush(stdin);
	scanf(" %[^\n]s", &tTelefone);

	for(int i=0; i < maxUsuarios; i++){
		if(strcmp(tUsuario, usuarios[i].usuarioUsr) == 0 || strcmp(tCPF, usuarios[i].cpfUsr) == 0){
			printf(
				"|                                                                    |\n"
				"|  Usuario e/ou CPF ja exite!                                        |\n"
				"|  Tente inserir outros dados.                                       |\n"
				"|                                                                    |\n"
				"|--------------------------------------------------------------------|\n"
			);
			sleep(4);
			system("cls");
			main();
		}
	}
		
	printf(
		"|                                                                    |\n"
		"| Escolha:                                                           |\n"
		"| 1 => Confirmar, 2 => Cancelar                                      |\n"
		"|                                                                    |\n"
		"|--------------------------------------------------------------------|\n"
	);
	gotoxy(10, 14);
	confirmaCadastro:
	fflush(stdin);
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

		// system("cls");
		// printf("%i\n", usuarios[i].idUsr);
		// puts(usuarios[i].usuarioUsr);
		// puts(usuarios[i].senhaUsr);
		// puts(usuarios[i].nomeUsr);
		// puts(usuarios[i].cpfUsr);
		// puts(usuarios[i].telefoneUsr);
		// printf("%i", usuarios[i].idadeUsr);
		// sleep(3);

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
		printf(
			"|--------------------------------------------------------------------|\n"
			"|                                                                    |\n"
			"| Escolha:                                                           |\n"
			"| 1 => Confirmar, 2 => Cancelar                                      |\n"
			"|                                                                    |\n"
			"|--------------------------------------------------------------------|\n"
		);
		gotoxy(10, 2);
		goto confirmaCadastro;
	}
}

int fazerLogin(){
    system("cls");
	printf(
	"|----------------------------|\n"
	"| Fazer Login                |\n"
	"|--------------------------------------------------------------------|\n"
	"|                                                                    |\n"
	"| LOGIN                                                              |\n"
	"|____________________________________________________________________|\n"
	"|                                                                    |\n"
	"| Digite o nome de usuario:                                          |\n"
	"|           Digite a senha:                                          |\n"
	"|                                                                    |\n"
	"|--------------------------------------------------------------------|\n"
	);

	gotoxy(28, 7);
	fflush(stdin);
	scanf(" %[^\n]s", &loginUsuario);

	gotoxy(28, 8);
	fflush(stdin);
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
		printf(
			"|----------------------------|\n"
			"| Fazer Login                |\n"
			"|--------------------------------------------------------------------|\n"
			"|                                                                    |\n"
			"| LOGIN                                                              |\n"
			"|____________________________________________________________________|\n"
			"|                                                                    |\n"
			"| USUARIO OU SENHA INCORRETO, TENTE NOVAMENTE!                       |\n"
			"|                                                                    |\n"
			"|--------------------------------------------------------------------|\n"
		);

		sleep(3);
		main();
	}
}

void lobby(){
	system("cls");
	printf(
		"|----------------------------|\n"
		"| Rifa Master - Lobby        |\n"
		"|--------------------------------------------------------------------|\n"
		"|                                                                    |\n"
		"| Bem vindo                                                          |\n"
		"|____________________________________________________________________|\n"
		"|                                                                    |\n"
		"| Escolha:                                                           |\n"
		"| 1 => Comprar Rifa, 2 => Cadastrar Rifa, 3 => Sortear Rifa          |\n"
		"| 0 => Logoff                                                        |\n"
		"|--------------------------------------------------------------------|\n"
	);

	gotoxy(12, 4);
	printf("%s!", usuarios[idUsuarioLogado-1].nomeUsr);
	gotoxy(10, 7);
	rLobby = 0;

	fflush(stdin);
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

void cadastrarPremio(int QuantidadePremios, int idRifa){
	system("cls");
	printf(
		"|----------------------------|\n" //0
		"| Cadastrar Rifa             |\n" //1
		"|--------------------------------------------------------------------|\n" //2
		"|                                                                    |\n" //3
	);
	for(int i=0; i < QuantidadePremios; i++){
		gotoxy(0, 4);
		printf(
			"| DADOS DO PREMIO %i                                                  |\n" //4
			"|____________________________________________________________________|\n" //5
			"|                                                                    |\n" //6
			"|        Digite o Nome do Premio:                                    |\n" //7
			"|       Digite o Valor do Premio:                                    |\n" //8
			"|                                                                    |\n" //9
			"|--------------------------------------------------------------------|\n" //10
			,i + 1 
		);
		gotoxy(34, 7);
		fflush(stdin);
		scanf(" %[^\n]s", &tNomePremio);

		gotoxy(34, 8);
		fflush(stdin);
		scanf(" %[^\n]s", &tValorPremio);

		rifas[idRifa - 1].valorPremio[i] = atof(tValorPremio);
		strcpy(rifas[idRifa - 1].nomePremio[i], tNomePremio);
		fflush(stdin);
	}
}

void cadastrarRifa(){
	system("cls");
	printf(
		"|----------------------------|\n" //0
		"| Cadastrar Rifa             |\n" //1
		"|--------------------------------------------------------------------|\n" //2
		"|                                                                    |\n" //3
		"| DADOS DA RIFA                                                      |\n" //4
		"|____________________________________________________________________|\n" //5
		"|                                                                    |\n" //6
		"|        Digite o Titulo da Rifa:                                    |\n" //7
		"| Digite a Quantidade de Numeros:                                    |\n" //8
		"|         Digite o Valor da Rifa:                                    |\n" //9
		"| Digite a Quantidade de Premios:                                    |\n" //9
		"|                                                                    |\n" //10
		"|--------------------------------------------------------------------|\n" //11
	);
	gotoxy(15, 4);
	printf("%i", ultimoRifaVetor + 2);

	gotoxy(34, 7);
	fflush(stdin);
	scanf(" %[^\n]s", &tTituloRifa);

	gotoxy(34, 8);
	fflush(stdin);
	scanf(" %[^\n]s", &tNumerosRifa);

	gotoxy(34, 9);
	fflush(stdin);
	scanf(" %[^\n]s", &tValorRifa);

	gotoxy(34, 10);
	fflush(stdin);
	scanf(" %[^\n]s", &tQtdPremios);

	printf(
		"|                                                                    |\n"
		"| Escolha:                                                           |\n"
		"| 1 => Confirmar, 2 => Cancelar                                      |\n"
		"|                                                                    |\n"
		"|--------------------------------------------------------------------|\n"
	);
	gotoxy(10, 12);
	confirmaCadastro:
	fflush(stdin);
	escolha = getche();
	if (escolha == 49){ // == 1 => Confirmar
		int i;
		i = ultimoRifaVetor + 1;
		rifas[i].idRifa = i + 1;
		strcpy(rifas[i].nomeRifa, tTituloRifa);
		rifas[i].qtdNrRifa = atoi(tNumerosRifa);
		rifas[i].qtdPremios = atoi(tQtdPremios);
		rifas[i].valorNrRifa = atof(tValorRifa);
		rifas[i].id_UsrDono = idUsuarioLogado;
		for(int cont=0; cont < rifas[i].qtdNrRifa; cont++){
			rifas[i].vendaRifa[cont][0] = cont + 1;
		}
		ultimoRifaVetor = ultimoRifaVetor + 1;

		cadastrarPremio(rifas[i].qtdPremios, rifas[i].idRifa);

		msgSucesso();
		
		menuLobby();
	}
	else if (escolha == 50){ // == 2 => Cancelar 
		msgCancelado();
		menuLobby();
	}
	else{
		system("cls");
		printf(
			"|--------------------------------------------------------------------|\n"
			"|                                                                    |\n"
			"| Escolha:                                                           |\n"
			"| 1 => Confirmar, 2 => Cancelar                                      |\n"
			"|                                                                    |\n"
			"|--------------------------------------------------------------------|\n"
		);
		gotoxy(10, 12);
		goto confirmaCadastro;
	}
}	

void comprarRifa(){
	system("cls");
	printf(
		"|----------------------------|\n"
		"| Comprar Rifa               |\n"
		"|--------------------------------------------------------------------|\n"
		"|                                                                    |\n"
		"| RIFAS DISPONIVEIS                                                  |\n"
		"|____________________________________________________________________|\n"
		"|                                                                    |\n"
	);
	if(ultimoRifaVetor > -1){
		printf(
			"| Escolha o codigo:                                                  |\n" //7
			"|--------------------------------------------------------------------|\n"
		);
		for(int i=0; i <= ultimoRifaVetor; i++){
			gotoxy(0, 9 + i*2);
			printf(
				"| Cod:     Nome:                                     Valor:          |\n"
				"|--------------------------------------------------------------------|\n"
			);
			gotoxy(7, 9 + i*2);
			printf("%i", i + 1);
			gotoxy(17, 9 + i*2);
			puts(rifas[i].nomeRifa);
			gotoxy(60, 9 + i*2);
			printf("%.2lf", rifas[i].valorNrRifa);
		}

		gotoxy(20, 7);
		fflush(stdin);
		gets(escolha);
	}
	else{
		printf(
			"| Nao existe rifa cadastrada                                         |\n" //7
			"|--------------------------------------------------------------------|\n"
		);
	}




	// printf("\n|     ");
	// int nRifa = atoi(tNumerosRifa);
    // int n;
	// int colunasRifa = 15;
	// for(n = 1; n <= nRifa; n++){

	// 	if( n % colunasRifa == 1 && n != (nRifa + 1)){
	// 		printf("\n|     ");
	// 	}
	// 	if(n <= 9){
	// 		printf("0");
	// 	}
	// 	printf("%i ", n);
	// }

	fflush(stdin);
	getch();
	menuLobby();
}	

void sortearRifa(){
    system("cls");
    printf(
		"|----------------------------|\n"
		"| Sortear Rifa               |\n"
		"|--------------------------------------------------------------------|\n"
    	"|                                                                    |\n"
    	"| SORTEAR NUMERO                                                     |\n"
    	"|____________________________________________________________________|\n"
    	"|                                                                    |\n"
    	"|   Escolha a Rifa:                                                  |\n"
    	"|                                                                    |\n"
    	"|                                                                    |\n"
    	"|                                                                    |\n"
    	"|                                                                    |\n"
    	"|                                                                    |\n"
    	"|                                                                    |\n"
    	"|                                                                    |\n"
    	"|                                                                    |\n"
    	"|                                                                    |\n"
    	"|                                                                    |\n"
    	"|                                                                    |\n"
		"|                                                                    |\n"
    	"|--------------------------------------------------------------------|\n"
	);

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
