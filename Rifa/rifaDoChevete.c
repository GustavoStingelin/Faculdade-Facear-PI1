#include "variaveis.c"
#include "telas.c"
#include "metodos.c"
#include "funcoesIniciais.c"
	
void menuLobby(){
	lobby();
	if(rLobby == 49){ // 1 comprar rifa
		comprarRifa();
	}
	else if(rLobby == 50){ // 2 cadastrar rifa
		cadastrarRifa();
	}
	else if(rLobby == 51){ // 3 sortear rifa
		sortearRifa();
	}
	else if(rLobby == 52){ // 4 Confirmar pagamento
		confirmarPagamento();
	}
	else if(rLobby == 48){ // 0 sair
		main();
	}
	else if(rLobby == 0){ //inválido
		menuLobby();
	}
}//lobby	

int main(){
	executaFuncoesIniciais();

	telaInicial();
	fflush(stdin);
	escolha = getche();

	if (escolha == 49){ // == 1
		cadastrarCliente();
	}
	else if (escolha == 50){ // == 2
		fazerLogin();
		if(rLogin == 1){ //caso senha correta => login
			menuLobby();
		}//fecha login---
	}
	else if (escolha == 48){ // == 0
		fecharSistema();
	}
	else{
		msgOpcaoInvalida();
		main();
	}//tela inicial
	
main();
}//main
