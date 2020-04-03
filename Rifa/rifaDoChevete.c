#include "variaveis.c"
#include "telas.c"
	
void menuLobby(){
	lobby();
	if(rLobby == 49){ //comprar rifa
		comprarRifa();
	}
	else if(rLobby == 50){ //cadastrar rifa
		cadastrarRifa();
	}
	else if(rLobby == 51){ //sortear rifa
		sortearRifa();
	}
	else if(rLobby == 0){ //inválido
		menuLobby();
	}
}//lobby	



int main(){

	telaInicial();
	escolha = getche();

	if (escolha == 49){ // == 1
		cadastrarCliente();
	}
	

	else if (escolha == 50){ // == 2
		fazerLogin();
		if(rLogin == 1){ //login
			menuLobby();
			
		}//login
	}
	else{
		msgOpcaoInvalida();
		main();
	}//tela inicial

main();
}//main
