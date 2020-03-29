#include "variaveis.c"
#include "telas.c"
	
int main() {

	printf("Escolha o menu: 1 - Cadastrar or 2 - Fazer login \n");
	getche(escolha);

		if (escolha == 1){
			cadastrarCliente();
		}

		else if (escolha == 2){
			fazerLogin();
		}



	system("cls");
	main();


}//main
