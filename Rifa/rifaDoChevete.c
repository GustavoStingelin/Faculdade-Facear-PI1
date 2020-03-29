#include "variaveis.c"
#include "telas.c"
	
int main() {

	telaInicial();
	escolha = getche();

	if (escolha == 49){ // == 1
		cadastrarCliente();
	}

	else if (escolha == 50){ // == 2
		fazerLogin();
		if(rLogin == 1){ //login
			lobby: //lobby
			lobby();
			if(rLobby == 1){ //comprar rifa

			}
			else if(rLobby == 2){ //cadastrar rifa
				
			}
			else if(rLobby == 3){ //sortear rifa
				
			}
			else if(rLobby == 0){ //inválido
				goto lobby;
			}//lobby
		}//login
	}
	else{
		msgOpcaoInvalida();
		main();
	}//tela inicial

main();
}//main
