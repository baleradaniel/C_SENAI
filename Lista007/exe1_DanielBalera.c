#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int v[8], n = 8, i = 0;
	int contador = 0;
	
	printf("Digite %d números inteiros\n", n);
	
	while (contador < n){
		int x;
		printf("Número %d: ", contador + 1);
		
		if (scanf("%d", &x) != 1) {
			printf("Entrada inválida. Encerrando programa...\n");
			return 1;
		}
		
		int posicao = contador;
		while (posicao > 0 && v[posicao - 1] > x) {
			v[posicao] = v[posicao - 1];
			posicao = posicao -1;
		}
		v[posicao] = x;
		contador = contador + 1;
	}
	
	printf("\nVetor em ordem crescente: \n");
	i = 0;
	while (i < n){
		printf("[%d]", v[i]);
		i++;
	}
	printf("\nDaniel Balera");
	return 0;
}