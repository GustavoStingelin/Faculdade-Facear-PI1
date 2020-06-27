//30 caracteres por linha (max 80x24, padrao 70x20)
//printf("|                                                                    |\n");

void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void carregamento(){
    system("cls");
    int SleepTmp = 100;
    int Percent = 0;
    int i = 0;
    while(Percent < 100){
		printf("\n\n\n          ");
        for(i = 0; i < Percent / 2; i++)
        printf("%c", 178);
        printf("%d%%", Percent);
        Percent += 13;
        SleepTmp = trunc(SleepTmp * 1.2 + 20);
        Sleep(SleepTmp);
        system("cls");
    }
    system("cls");
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
		"|        RIFA MASTER         |\n"
		"|--------------------------------------------------------------------|\n"
		"|             Bem vindo ao sistema de rifas Rifa Master.             |\n"
		"|             Aqui a sua rifa vira realidade!                        |\n"
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
		"|        RIFA MASTER         |\n"
		"|--------------------------------------------------------------------|\n"
		"|                          ENCERRAR SISTEMA                          |\n"
		"| Deseja mesmo encerrar o sistema?                                   |\n"
		"|____________________________________________________________________|\n"
		"|                                                                    |\n"
		"| Digite <S> para encerrar ou qualquer tecla para cancelar.          |\n"
		"|            Escolha:                                                |\n"
		"|                                                                    |\n"
		"|--------------------------------------------------------------------|\n"
	);
	gotoxy(21, 8);
	fflush(stdin);
	escolha = getche();

	if( escolha == 83 || escolha == 115){
	system("cls");
	printf("Encerrando...\n");
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
		"|        RIFA MASTER         |\n"
		"|--------------------------------------------------------------------|\n"
		"|                            CADASTRAR-SE                            |\n"
		"| Seus dados                                                         |\n"
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
				"|  Usuario e/ou CPF ja existe!                                       |\n"
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
	confirmaCadastro:
	gotoxy(10, 14);
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
		gotoxy(10, 14);
		printf(" opcao invalida");
		sleep(2);
		gotoxy(0, 13);
		printf(
			"|                                                                    |\n"
			"| Escolha:                                                           |\n"
			"| 1 => Confirmar, 2 => Cancelar                                      |\n"
			"|                                                                    |\n"
			"|--------------------------------------------------------------------|\n"
		);
		goto confirmaCadastro;
	}
}

int fazerLogin(){
    system("cls");
	printf(
	"|----------------------------|\n"
	"|        RIFA MASTER         |\n"
	"|--------------------------------------------------------------------|\n"
	"|                            FAZER LOGIN                             |\n"
	"|                                                                    |\n"
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
			"|        RIFA MASTER         |\n"
			"|--------------------------------------------------------------------|\n"
			"|                            FAZER LOGIN                             |\n"
			"|                                                                    |\n"
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
		"|        RIFA MASTER         |\n"
		"|--------------------------------------------------------------------|\n"
		"|                            MENU INICIAL                            |\n"
		"| Bem vindo                                                          |\n"
		"|____________________________________________________________________|\n"
		"|                                                                    |\n"
		"| Escolha:                                                           |\n"
		"| 1 => Reservar Rifa, 2 => Cadastrar Rifa, 3 => Sortear Rifa         |\n"
		"| 4 => Confirmar Pagamento, 0 => Logoff                              |\n"
		"|--------------------------------------------------------------------|\n"
	);

	gotoxy(12, 4);
	printf("%s!", usuarios[idUsuarioLogado-1].nomeUsr);
	gotoxy(10, 7);
	rLobby = 0;

	fflush(stdin);
	escolha = getche();
	if( escolha >= 48 && escolha <= 52){
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
		"|        RIFA MASTER         |\n" //1
		"|--------------------------------------------------------------------|\n" //2
		"|                          CADASTRAR PREMIO                          |\n" //3
	);
	for(int i=0; i < QuantidadePremios; i++){
		gotoxy(0, 4);
		printf(
			"| Dados do premio %i                                                  |\n" //4
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
		"|        RIFA MASTER         |\n" //1
		"|--------------------------------------------------------------------|\n" //2
		"|                           CADASTRAR RIFA                           |\n" //3
		"| Dados da rifa                                                      |\n" //4
		"|____________________________________________________________________|\n" //5
		"|                                                                    |\n" //6
		"|        Digite o Titulo da Rifa:                                    |\n" //7
		"| Digite a Quantidade de Numeros:                                    |\n" //8
		"|         Digite o Valor da Rifa:                                    |\n" //9
		"| Digite a Quantidade de Premios:                                    |\n" //9
		"|                                                                    |\n" //10
		"|--------------------------------------------------------------------|\n" //11
	);
	gotoxy(16, 4);
	printf("%i", ultimoRifaVetor + 2);

	gotoxy(34, 7);
	fflush(stdin);
	scanf(" %[^\n]s", &tTituloRifa);

	quantidadeNumerosRifa:
	gotoxy(34, 8);
	fflush(stdin);
	scanf(" %[^\n]s", &tNumerosRifa);
	if(atoi(tNumerosRifa) < 10 || atoi(tNumerosRifa) > 90){
		gotoxy(34, 8);
		printf("Digite um valor entre 10 e 90");
		sleep(2);
		gotoxy(34, 8);
		printf("                              ");
		goto quantidadeNumerosRifa;
	}

	gotoxy(34, 9);
	fflush(stdin);
	scanf(" %[^\n]s", &tValorRifa);

	quantidadePremiosRifa:
	gotoxy(34, 10);
	fflush(stdin);
	scanf(" %[^\n]s", &tQtdPremios);
	if(atoi(tQtdPremios) < 1 || atoi(tQtdPremios) > 9){
		gotoxy(34, 10);
		printf("Digite um valor entre 1 e 9");
		sleep(2);
		gotoxy(34, 10);
		printf("                            ");
		goto quantidadePremiosRifa;
	}

	printf(
		"|                                                                    |\n"
		"| Escolha:                                                           |\n"
		"| 1 => Confirmar, 2 => Cancelar                                      |\n"
		"|                                                                    |\n"
		"|--------------------------------------------------------------------|\n"
	);
	confirmaCadastro:
	gotoxy(10, 12);
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
		gotoxy(10, 12);
		printf("opcao invalida");
		sleep(2);
		gotoxy(0, 11);
		printf(
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

void comprarNumero(int rifa){
	//int rifa_lock = rifa;
	system("cls");
	printf(
		"|----------------------------|\n" //0
		"|        RIFA MASTER         |\n" //1
		"|--------------------------------------------------------------------|\n" //2
		"|                          RESERVAR NUMERO                           |\n" //3
		"| Cod:     Nome:                                     Valor:          |\n" //4
		"|____________________________________________________________________|\n" //5
		"|                                                                    |\n" //6
	);
	gotoxy(7, 4);
	printf("%i", rifa + 1);
	gotoxy(17, 4);
	puts(rifas[rifa].nomeRifa);
	gotoxy(60, 4);
	printf("%.2lf", rifas[rifa].valorNrRifa);

	int QtdLinhas = trunc(rifas[rifa].qtdNrRifa / quebraNrRifa) + 1;
	int NrVetorRifa = 0;
	for(int row=0; row < QtdLinhas; row++){ //Imprime matriz
		gotoxy(0, 7 + row);
		printf("|                                                                    |\n");
		for(int col=0; col < quebraNrRifa * 3; col++){
			if((col % 3 == 0 || col == 0) && NrVetorRifa < rifas[rifa].qtdNrRifa){
				gotoxy(col + margemNrRifa, row + 7);
				if(rifas[rifa].vendaRifa[NrVetorRifa][2] == 0){ //Rifa livre
					if(rifas[rifa].vendaRifa[NrVetorRifa][0] < 10){
						printf("0");	
					}
					printf("%i", rifas[rifa].vendaRifa[NrVetorRifa][0]);
				}
				else if(rifas[rifa].vendaRifa[NrVetorRifa][2] == 1){ //Rifa Reservada
					printf("RD");
				}
				else if(rifas[rifa].vendaRifa[NrVetorRifa][2] == 2){ //Rifa Comprada
					printf("CD");
				}
				NrVetorRifa = NrVetorRifa + 1;
			}
		}
	}

	gotoxy(0, QtdLinhas + 7);
	printf(
		"|--------------------------------------------------------------------|\n"
		"| RD = numero reservado, CD = numero comprado, {numero} = livre      |\n"
		"| Escolha um numero para reservar:                                   |\n"
		"| <digite \"0\" para sair>                                             |\n"
		"|--------------------------------------------------------------------|\n"
	);

	gotoxy(35, QtdLinhas + 9);
	char escolhaNumeroChar[100];
	int escolhaNumero = 0;
	gets(escolhaNumeroChar);
	if(strcmp(escolhaNumeroChar, "0") == 0){
		menuLobby();
	}
	escolhaNumero = atoi(escolhaNumeroChar);
	if(idUsuarioLogado == rifas[rifa].id_UsrDono){
		printf("| Erro: o dono nao pode comprar a rifa!");
		sleep(3);
		comprarNumero(rifa);
	}
	else if(escolhaNumero <= 0 || escolhaNumero > rifas[rifa].qtdNrRifa){
		printf("| Erro: numero invalido     ");
		sleep(3);
		comprarNumero(rifa);
	}
	else if(rifas[rifa].vendaRifa[escolhaNumero -1][2] == 1){
		printf("| Erro: numero com status reservado");
		sleep(3);
		comprarNumero(rifa);
	}
	else if(rifas[rifa].vendaRifa[escolhaNumero -1][2] == 2){
		printf("| Erro: numero com status comprado");
		sleep(3);
		comprarNumero(rifa);
	}
	else if(rifas[rifa].status == 1){
		printf("| Erro: esta rifa ja foi sorteada");
		sleep(3);
		comprarNumero(rifa);
	}
	else{
		rifas[rifa].vendaRifa[escolhaNumero -1][1] = idUsuarioLogado;
		rifas[rifa].vendaRifa[escolhaNumero -1][2] = 1;
		printf("| Numero reservado com sucesso");
		sleep(1);
		comprarNumero(rifa);
	}
}

void mostraPremios(int rifa){
	rifa = rifa -1; //Pega o indice do vetor da Rifa

	system("cls");
	printf(
		"|----------------------------|\n" //0
		"|        RIFA MASTER         |\n" //1
		"|--------------------------------------------------------------------|\n" //2
		"|                              PREMIOS                               |\n" //3
		"| Cod:     Nome:                                     Valor:          |\n" //4
		"|____________________________________________________________________|\n" //5
		"|                                                                    |\n" //6
	);
	gotoxy(7, 4);
	printf("%i", rifa + 1);
	gotoxy(17, 4);
	puts(rifas[rifa].nomeRifa);
	gotoxy(60, 4);
	printf("%.2lf", rifas[rifa].valorNrRifa);

	for(int i=0; i < rifas[rifa].qtdPremios; i++){
		gotoxy(0, 7 + i);
		printf(
			"| Premio:     Nome:                                  Valor:          |\n" //7
		);
		gotoxy(10, 7 + i);
		printf("%i", i + 1);
		gotoxy(20, 7 + i);
		puts(rifas[rifa].nomePremio[i]);
		gotoxy(60, 7 + i);
		printf("%.2lf", rifas[rifa].valorPremio[i]);
	}
	gotoxy(0, 7 + rifas[rifa].qtdPremios);
	printf(
		"|                                                                    |\n"
		"|--------------------------------------------------------------------|\n"
		"| Precione qualquer tecla para seguir                                |\n"
		"|--------------------------------------------------------------------|\n"
	);
	getch();
	comprarNumero(rifa);
}

void comprarRifa(){
	system("cls");
	printf(
		"|----------------------------|\n"
		"|        RIFA MASTER         |\n"
		"|--------------------------------------------------------------------|\n"
		"|                           RESERVAR RIFA                            |\n"
		"| Rifas disponiveis                                                  |\n"
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
		gets(tRifaEscolhida);
		rifaEcolhida = atoi(tRifaEscolhida);
		
		if(rifaEcolhida -1 > ultimoRifaVetor || rifaEcolhida < 1){
			gotoxy(20, 7);
			printf("Valor Invalido");
			sleep(2);
			comprarRifa();
		}

		mostraPremios(rifaEcolhida);

	}
	else{
		printf(
			"| Nao existe rifa cadastrada                                         |\n" //7
			"|--------------------------------------------------------------------|\n"
		);
		getch();
	}
	menuLobby();
}	

void confirmarNumero(int rifa){
	system("cls");
	printf(
		"|----------------------------|\n" //0
		"|        RIFA MASTER         |\n" //1
		"|--------------------------------------------------------------------|\n" //2
		"|                        CONFIRMAR PAGAMENTO                         |\n" //3
		"| Cod:     Nome:                                     Valor:          |\n" //4
		"|____________________________________________________________________|\n" //5
		"|                                                                    |\n" //6
	);
	gotoxy(7, 4);
	printf("%i", rifa + 1);
	gotoxy(17, 4);
	puts(rifas[rifa].nomeRifa);
	gotoxy(60, 4);
	printf("%.2lf", rifas[rifa].valorNrRifa);

	int QtdLinhas = trunc(rifas[rifa].qtdNrRifa / quebraNrRifa) + 1;
	int NrVetorRifa = 0;
	for(int row=0; row < QtdLinhas; row++){ //Imprime matriz
		gotoxy(0, 7 + row);
		printf("|                                                                    |\n");
		for(int col=0; col < quebraNrRifa * 3; col++){
			if((col % 3 == 0 || col == 0) && NrVetorRifa < rifas[rifa].qtdNrRifa){
				gotoxy(col + margemNrRifa, row + 7);
				if(rifas[rifa].vendaRifa[NrVetorRifa][2] == 0){ //Rifa livre
					if(rifas[rifa].vendaRifa[NrVetorRifa][0] < 10){
						printf("0");	
					}
					printf("%i", rifas[rifa].vendaRifa[NrVetorRifa][0]);
				}
				else if(rifas[rifa].vendaRifa[NrVetorRifa][2] == 1){ //Rifa Reservada
					printf("RD");
				}
				else if(rifas[rifa].vendaRifa[NrVetorRifa][2] == 2){ //Rifa Comprada
					printf("CD");
				}
				NrVetorRifa = NrVetorRifa + 1;
			}
		}
	}

	gotoxy(0, QtdLinhas + 7);
	printf(
		"|--------------------------------------------------------------------|\n"
		"| RD = numero reservado, CD = numero comprado, {numero} = livre      |\n"
		"| Escolha um numero para reservar:                                   |\n"
		"| <digite \"0\" para sair>                                             |\n"
		"|--------------------------------------------------------------------|\n"
	);

	gotoxy(35, QtdLinhas + 9);
	char escolhaNumeroChar[100];
	int escolhaNumero = 0;
	gets(escolhaNumeroChar);
	if(strcmp(escolhaNumeroChar, "0") == 0){
		menuLobby();
	}
	escolhaNumero = atoi(escolhaNumeroChar);
	if(idUsuarioLogado != rifas[rifa].id_UsrDono){
		printf("| Erro: somente o dono pode comfirmar pagamento!");
		sleep(1);
		confirmarNumero(rifa);
	}
	else if(escolhaNumero <= 0 || escolhaNumero > rifas[rifa].qtdNrRifa){
		printf("| Erro: numero invalido     ");
		sleep(1);
		confirmarNumero(rifa);
	}
	else if(rifas[rifa].vendaRifa[escolhaNumero -1][2] == 0){
		printf("| Erro: este numero ainda nao foi comprado");
		sleep(1);
		confirmarNumero(rifa);
	}
	else if(rifas[rifa].vendaRifa[escolhaNumero -1][2] == 2){
		printf("| Erro: ja foi confirmado o pagamento deste numero");
		sleep(1);
		confirmarNumero(rifa);
	}
	else if(rifas[rifa].status == 1){
		printf("| Erro: esta rifa ja foi sorteada!");
		sleep(1);
		confirmarNumero(rifa);
	}
	else{
		rifas[rifa].vendaRifa[escolhaNumero -1][2] = 2;
		printf("| Pagamento confirmado!        ");
		sleep(1);
		confirmarNumero(rifa);
	}
}

void confirmarPagamento(){
	system("cls");
	printf(
		"|----------------------------|\n"
		"|        RIFA MASTER         |\n"
		"|--------------------------------------------------------------------|\n"
		"|                        CONFIRMAR PAGAMENTO                         |\n"
		"| Rifas disponiveis                                                  |\n"
		"|____________________________________________________________________|\n"
		"|                                                                    |\n"
	);
	if(ultimoRifaVetor > -1){
		printf(
			"| Escolha o codigo:                                                  |\n" //7
			"|--------------------------------------------------------------------|\n"
		);
		int cont = 0;
		for(int i=0; i <= ultimoRifaVetor; i++){
			if(rifas[i].id_UsrDono == idUsuarioLogado){
				gotoxy(0, 9 + cont*2);
				printf(
					"| Cod:     Nome:                                     Valor:          |\n"
					"|--------------------------------------------------------------------|\n"
				);
				gotoxy(7, 9 + cont*2);
				printf("%i", i + 1);
				gotoxy(17, 9 + cont*2);
				puts(rifas[i].nomeRifa);
				gotoxy(60, 9 + cont*2);
				printf("%.2lf", rifas[i].valorNrRifa);
				cont = cont + 1;
			}
		}
		if(cont == 0){
			gotoxy(0, 7);
			printf(
				"| Voce nao possui rifa cadastrada                                    |\n" //7
				"|--------------------------------------------------------------------|\n"
			);
			getch();
			menuLobby();
		}
		
		gotoxy(20, 7);
		fflush(stdin);
		gets(tRifaEscolhida);
		rifaEcolhida = atoi(tRifaEscolhida);
		
		if(
			rifaEcolhida -1 > ultimoRifaVetor
			|| rifaEcolhida < 1
			|| rifas[rifaEcolhida - 1].id_UsrDono != idUsuarioLogado
		){
			gotoxy(20, 7);
			printf("Valor Invalido");
			sleep(2);
			confirmarPagamento();
		}
		else{
			confirmarNumero(rifaEcolhida - 1); //vai para tela de mostrar premios
		}
	}
	else{
		printf(
			"| Nao existe rifa cadastrada                                         |\n" //7
			"|--------------------------------------------------------------------|\n"
		);
		getch();
		menuLobby();
	}
	menuLobby();
}	

void mostraGanhadores(int rifa){
	carregamento();
	printf(
		"|----------------------------|\n" //0
		"|        RIFA MASTER         |\n" //1
		"|--------------------------------------------------------------------|\n" //2
		"|                             GANHADORES                             |\n" //3
		"| Cod:     Nome:                                     Valor:          |\n" //4
		"|____________________________________________________________________|\n" //5
		"|____________________________________________________________________|\n" //6
		"|                                                                    |\n" //7

	);
	gotoxy(7, 4);
	printf("%i", rifa + 1);
	gotoxy(17, 4);
	puts(rifas[rifa].nomeRifa);
	gotoxy(60, 4);
	printf("%.2lf", rifas[rifa].valorNrRifa);

	for(int i=0; i < rifas[rifa].qtdPremios; i++){
		gotoxy(0, 8 + i*4);
		printf(
			"| Numero Sorteado:     Nome:                                         |\n"
			"|        Telefone:                       CPF:                        |\n"
			"| Cod:     Premio:                                   Valor:          |\n"
			"|--------------------------------------------------------------------|\n"
		);

		gotoxy(19, 8 + i*4);
		printf("%i", rifas[rifa].nrSorteado[i]);
		gotoxy(29, 8 + i*4);
		puts(usuarios[rifas[rifa].vendaRifa[rifas[rifa].nrSorteado[i]-1][1] -1].nomeUsr);

		gotoxy(19, 9 + i*4);
		puts(usuarios[rifas[rifa].vendaRifa[rifas[rifa].nrSorteado[i]-1][1] -1].telefoneUsr);
		gotoxy(46, 9 + i*4);
		puts(usuarios[rifas[rifa].vendaRifa[rifas[rifa].nrSorteado[i]-1][1] -1].cpfUsr);

		gotoxy(7, 10 + i*4);
		printf("%i", i + 1);
		gotoxy(19, 10 + i*4);
		puts(rifas[rifa].nomePremio[i]);
		gotoxy(60, 10 + i*4);
		printf("%.2lf", rifas[rifa].valorPremio[i]);
	}	
	getch();
}

void sortearNumero(int rifa){
	system("cls");
	printf(
		"|----------------------------|\n" //0
		"|        RIFA MASTER         |\n" //1
		"|--------------------------------------------------------------------|\n" //2
		"|                            SORTEAR RIFA                            |\n" //3
		"| Cod:     Nome:                                     Valor:          |\n" //4
		"|____________________________________________________________________|\n" //5
		"|                                                                    |\n" //6
	);
	gotoxy(7, 4);
	printf("%i", rifa + 1);
	gotoxy(17, 4);
	puts(rifas[rifa].nomeRifa);
	gotoxy(60, 4);
	printf("%.2lf", rifas[rifa].valorNrRifa);

	int QtdLinhas = trunc(rifas[rifa].qtdNrRifa / quebraNrRifa) + 1;
	int NrVetorRifa = 0;
	for(int row=0; row < QtdLinhas; row++){ //Imprime matriz
		gotoxy(0, 7 + row);
		printf("|                                                                    |\n");
		for(int col=0; col < quebraNrRifa * 3; col++){
			if((col % 3 == 0 || col == 0) && NrVetorRifa < rifas[rifa].qtdNrRifa){
				gotoxy(col + margemNrRifa, row + 7);
				if(rifas[rifa].vendaRifa[NrVetorRifa][2] == 0){ //Rifa livre
					if(rifas[rifa].vendaRifa[NrVetorRifa][0] < 10){
						printf("0");	
					}
					printf("%i", rifas[rifa].vendaRifa[NrVetorRifa][0]);
				}
				else if(rifas[rifa].vendaRifa[NrVetorRifa][2] == 1){ //Rifa Reservada
					printf("RD");
				}
				else if(rifas[rifa].vendaRifa[NrVetorRifa][2] == 2){ //Rifa Comprada
					printf("CD");
				}
				NrVetorRifa = NrVetorRifa + 1;
			}
		}
	}

	gotoxy(0, QtdLinhas + 7);
	printf(
		"|--------------------------------------------------------------------|\n"
		"| RD = numero reservado, CD = numero comprado, {numero} = livre      |\n"
		"| Digite 1 para realizar sorteio:                                    |\n"
		"| <digite \"0\" para sair>                                             |\n"
		"|--------------------------------------------------------------------|\n"
	);

	gotoxy(34, QtdLinhas + 9);
	char escolhaNumeroChar[100];
	int escolhaNumero = 0;
	gets(escolhaNumeroChar);
	if(strcmp(escolhaNumeroChar, "0") == 0){
		menuLobby();
	}
	escolhaNumero = atoi(escolhaNumeroChar);
	if(idUsuarioLogado != rifas[rifa].id_UsrDono){
		printf("| Erro: somente o dono pode sortear!");
		sleep(1);
		sortearNumero(rifa);
	}
	else if(escolhaNumero < 1 || escolhaNumero > 1){
		printf("| Erro: opcao invalida       ");
		sleep(1);
		sortearNumero(rifa);
	}
	else if(escolhaNumero == 1){
		if(rifas[rifa].status == 1){
			printf("| Erro: esta rifa ja foi sorteada!       ");
			sleep(3);
			mostraGanhadores(rifa);
		}
		else{
			int numerosComprados = 0;
			for(int i=0; i < rifas[rifa].qtdNrRifa; i++){
				if(rifas[rifa].vendaRifa[i][2] == 2){
					numerosComprados = numerosComprados + 1;
				}
			}
			if(numerosComprados < rifas[rifa].qtdPremios){
				printf("| Erro: menos numeros comprados que premios cadastrados  ");
				sleep(1);
				sortearNumero(rifa);
			}
			else{
				printf("Sorteando...                  ");
				
				for(int i=0; i < rifas[rifa].qtdPremios; i++){
					int sorteado = 0;
					sorteia:
					sorteado = (rand() % (rifas[rifa].qtdNrRifa - 1)) + 1;
					if(rifas[rifa].vendaRifa[sorteado -1][2] == 2){ //ta comprado
						for(int x=0; x < rifas[rifa].qtdPremios; x++){
							if(rifas[rifa].nrSorteado[x] == sorteado){
								goto sorteia;
							}
						}
						rifas[rifa].nrSorteado[i] = sorteado;
						rifas[rifa].status = 1;
					}
					else{
						goto sorteia;
					}
				}

				// for(int i=0; i < rifas[rifa].qtdPremios; i++){
				// 	printf("%i\n", rifas[rifa].nrSorteado[i]);
				// }
				//getch();
				mostraGanhadores(rifa);
			}
		}
	}
}

void sortearRifa(){
	system("cls");
	printf(
		"|----------------------------|\n"
		"|        RIFA MASTER         |\n"
		"|--------------------------------------------------------------------|\n"
		"|                            SORTEAR RIFA                            |\n"
		"| Rifas disponiveis                                                  |\n"
		"|____________________________________________________________________|\n"
		"|                                                                    |\n"
	);
	if(ultimoRifaVetor > -1){
		printf(
			"| Escolha o codigo:                                                  |\n" //7
			"|--------------------------------------------------------------------|\n"
		);
		int cont = 0;
		for(int i=0; i <= ultimoRifaVetor; i++){
			if(rifas[i].id_UsrDono == idUsuarioLogado){
				gotoxy(0, 9 + cont*2);
				printf(
					"| Cod:     Nome:                                     Valor:          |\n"
					"|--------------------------------------------------------------------|\n"
				);
				gotoxy(7, 9 + cont*2);
				printf("%i", i + 1);
				gotoxy(17, 9 + cont*2);
				puts(rifas[i].nomeRifa);
				gotoxy(60, 9 + cont*2);
				printf("%.2lf", rifas[i].valorNrRifa);
				cont = cont + 1;
			}
		}
		if(cont == 0){
			gotoxy(0, 7);
			printf(
				"| Voce nao possui rifa cadastrada                                    |\n" //7
				"|--------------------------------------------------------------------|\n"
			);
			getch();
			menuLobby();
		}
		
		gotoxy(20, 7);
		fflush(stdin);
		gets(tRifaEscolhida);
		rifaEcolhida = atoi(tRifaEscolhida);
		
		if(
			rifaEcolhida -1 > ultimoRifaVetor
			|| rifaEcolhida < 1
			|| rifas[rifaEcolhida - 1].id_UsrDono != idUsuarioLogado
		){
			gotoxy(20, 7);
			printf("Valor Invalido");
			sleep(2);
			sortearRifa();
		}
		else{
			sortearNumero(rifaEcolhida - 1); //vai para tela de mostrar premios
		}
	}
	else{
		printf(
			"| Nao existe rifa cadastrada                                         |\n" //7
			"|--------------------------------------------------------------------|\n"
		);
		getch();
		menuLobby();
	}
	menuLobby();
}
