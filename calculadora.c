#include <stdio.h>
#include <stdlib.h>

int main() {
	char operacao;
	int num1, num2, resultado;
	char continuar = 's';

	while (continuar == 's' || continuar == 'S') {
		printf("Digite a operacao desejada (+, -, *, /): ");
		scanf(" %c", &operacao);

		printf("Digite um valor:");
		scanf("%d", &num1);

		printf("Digite outro valor:");
		scanf("%d", &num2);

		if (operacao == '+') {
		resultado = num1 + num2;
		printf("Resultado: %d\n", resultado);
		} else if (operacao == '-'){
		resultado = num1 - num2;
		printf("Resultado: %d\n", resultado);
		} else if (operacao == '*') {
		resultado = num1 * num2;
		printf("Resultado: %d\n", resultado);
		} else if (operacao == '/') {
		if (num2 != 0) {
			resultado = num1 / num2;
			printf("Resultado: %d\n", resultado);
		} else {
			printf("Erro: Divisão inválida.\n");
		}
		printf("Deseja continuar (s/n)? ");
		scanf(" %c", &continuar);
                }
		return 0;
	}}
