#include <stdio.h>
#include <math.h>

int main() {
	float peso, altura, imc;
	system("color 0e");

	printf("d888888b .88b  d88.  .o88b.              .o88b.  .d8b.  db       .o88b. \n");
	printf("  `88'   88'YbdP`88 d8P  Y8             d8P  Y8 d8' `8b 88      d8P  Y8 \n");
	printf("   88    88  88  88 8P                  8P      88ooo88 88      8P      \n");
	printf("  .88.   88  88  88 Y8b  d8             Y8b  d8 88   88 88booo. Y8b  d8 \n");
	printf("Y888888P YP  YP  YP  `Y88P'              `Y88P' YP   YP Y88888P  `Y88P' \n\n");

	printf("Digite seu peso (ex: 70kg) : ");
	scanf_s("%f", &peso);

	printf("\nDigite sua altura (ex: 1.75m) : ");
	scanf_s("%f", &altura);

	printf("\nSeu peso eh de : %g\n", peso);
	printf("Sua altura eh de : %g\n", altura);
	printf("----------------------------------------------------------------------------------------\n");
	
    imc = peso/(pow(altura, 2));

	if (imc < 18.5) {
		printf("\nSeu IMC (indice de massa corporal) eh de %f. E voce esta com o IMC abaixo do recomendado\n\n", imc);
	}

	else if (imc < 25) {
		printf("\nSeu IMC (indice de massa corporal) eh de %f. E voce esta com o IMC dentro do recomendado\n\n", imc);
	}

	else if (imc < 29.9) {
		printf("\nSeu IMC (indice de massa corporal) eh de %f. E voce esta com o IMC acima do recomendado\n\n", imc);
	}

	else if (imc < 34.9) {
		printf("\nSeu IMC (indice de massa corporal) eh de %f. E voce esta com Grau I de Obesidade\n\n", imc);
	}

	else if (imc < 39.9) {
		printf("\nSeu IMC (indice de massa corporal) eh de %f. E voce esta com Grau I de Obesidade\n\n", imc);
	} 
	
	else {
		printf("\nSeu IMC (indice de massa corporal) eh de %f. E voce esta com Grau I de Obesidade\n\n", imc);
	}

	printf("------------------------------------------------------\n");
	printf("Classificacao:\n\n");
	printf("Abaixo do Peso: Abaixo de 18.5\n");
	printf("Dentro do Peso: 18.5 - 24.9\n");
	printf("Sobre o peso: 25 - 29.9\n");
	printf("Obesidade Grau I: 30 - 34,9\n");
	printf("Obesidade Grau II: 35 - 39.9\n");
	printf("Obesidade Grau II ou Morbida: Maior ou igual a 40\n");
	printf("------------------------------------------------------\n\n");

	system("pause");
}