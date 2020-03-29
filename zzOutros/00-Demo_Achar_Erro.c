/*=============================================================================
UNIFACEAR - CENTRO UNIVERSITÁRIO
Nome da Aplicação: 00-Demo_Achar_Erro.exe   Nome de Fonte: 00-Demo_Achar_Erro.c
Finalidade: Exemplos iniciais em Linguagem C 
Programador: Rodrigo Bevilacqua Marcondes                      Data: 18/02/2020
==============================================================================*/
#include <stdio.h>  // Bibliotecas - stdio => Standard I/O
void tela1(){
	printf("*** FACEAR - EXEMPLO *** \n\n"); // Impressão na tela 
}
void leiaAjuda(){
	printf("*** COMPILACAO E EXECUCAO     *** \n");	
	
}
 
main()
{
    system("cls");
	//Comentários no código
    tela1();
    leiaAjuda();	
	
	
	// Criação de variaveis 
    int a;
    int b;
    int s;
    
    // Inicialização com Zero
    a = b = s = 0;
    
    // Atribuição de valores
    a = 2;
    b = 3;
    s = a + b; 
    
    
    // Impressão na tela 
    printf("O valor da variavel %d %d \n", a, b);
    printf("Soma de a e b %d \n", s);
    
    //Solicitar um valor
    printf("Digite um valor: ");    
    scanf("%i", &a);
    
    printf("Digitado: %i \n", a);
    
    getchar();
}
