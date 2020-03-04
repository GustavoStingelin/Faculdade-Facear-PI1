#include <stdio.h>
#include <math.h>
main() {
	
	//var
	float altura;
	float peso;
	float IMC;
	float a;
	altura = peso = IMC = 0;	
		
	printf("******Programa para calcular o IMC****** \n\n\n");
	
	printf("Digite a altura em centimetros: ");
	scanf("%f", &altura);
	
	printf("\nDigite o peso em Kilogramas: ");
	scanf("%f", &peso);
	
	
	
	IMC = peso / (pow(altura, 2));
		
	printf("\nO resultado: %.2f", IMC);
		
	getchar;
}
