
char tTituloRifa[100], tNumerosRifa[100];
tNumerosRifa = "60";
tTituloRifa = "Rifa do Chevete";
int numerosRifa;


main(){
	printf("01 - %s", tTituloRifa);

	printf("\n     ");
	numerosRifa = atoi(tNumerosRifa);
    int n;
	for(n = 0; n <= numerosRifa; n++){
		int numeroDaRifa;
		if(n < 9){
			numeroDaRifa = strcat("0", n);
		}
		printf(" %s", numeroDaRifa);
		if(n % 25 == 0){
			printf("\n     ");
		}
	}

	getch();
}