#include "variaveis.c"
#include "telas.c"
	
int main() {

	printf("Escolha o menu: 1 - Cadastrar or 2 - Fazer login \n");
	escolha = getche();

	if (escolha == 49){ // == 1
		cadastrarCliente();
	}

	else if (escolha == 50){ // == 2
		fazerLogin();
	}


system("cls");
main();
}//main
