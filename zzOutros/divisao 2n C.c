#include <stdio.h>

main() {
	
	//var
	float valor1;
	float valor2;
	float result;
	
	valor1 = valor2 = result = 0;	
		
	printf("******Programa para calcular a divisao de 2 numeros****** \n\n\n");
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &valor1);
	
	printf("\nDigite o segundo valor: ");
	scanf("%f", &valor2);
	
	result = valor1 / valor2;
	printf("\nO resultado: %.2f", result);
		
	getchar;
}
