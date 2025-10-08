#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");

	float preco, custo, imposto, precof;
	char refri, cat;
	int i = 1;

	do {
		printf("\nProduto %d", i);
		printf("\n------------");

		printf("\nDigite o preço unitário: ");
		scanf("%f", &preco);

		printf("Digite se esse produto precisa de refrigeração (S para SIM, N para NÃO): ");
		scanf(" %c", &refri);

		printf("\nMenu de Categoria: ");
		printf("\n A - Alimentação");
		printf("\n L - Limpeza");
		printf("\n V - Vestuário");

		printf("\nDigite a categoria do produto: ");
		scanf(" %c", &cat);

		if (preco < 20) {
			if (cat == 'A' || cat == 'a') {
				custo = 2;
			} else if (cat == 'L' || cat == 'l') {
				custo = 3;
			} else if (cat == 'V' || cat == 'v') {
				custo = 4;
			}
		} else if (preco >= 20 && preco <= 50) {
			if (refri == 'S' || refri == 's') {
				custo = 6;
			} else {
				custo = 0;
			}
		} else {
			if (refri == 'S' || refri == 's') {
				if (cat == 'A' || cat == 'a') {
					custo = 5;
				} else if (cat == 'L' || cat == 'l') {
					custo = 2;
				} else if (cat == 'V' || cat == 'v') {
					custo = 4;
				}
			} else {
				if (cat == 'L' || cat == 'l') {
					custo = 1;
				} else {
					custo = 0;
				}
			}
		}

		if (preco < 25) {
			imposto = preco * 0.05;
		} else {
			imposto = preco * 0.08;
		}

		precof = preco + custo + imposto;

		if (precof <= 20) {
			printf("Classificação: Barato");
		} else if (precof <= 100) {
			printf("Classificação: Normal");
		} else {
			printf("Classificação: Caro");
		}

		printf("\nCusto de Estocagem: R$ %.2f", custo);
		printf("\nImposto: R$ %.2f", imposto);
		printf("\nPreço Final: R$ %.2f", precof);
		i++;

	} while (i <= 12);

	printf("Daniel Balera");
	
	return 0;	
}