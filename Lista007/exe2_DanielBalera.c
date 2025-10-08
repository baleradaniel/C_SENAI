#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float temp[12];
	char meses[12][15] = {
		"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
	};
	
	int i = 0;
	printf("Digite a temperatura média de cada mês do ano\n");
	
	while (i < 12) {
		printf("%s: ", meses[i]);
		scanf("%f", &temp[i]);
		i++;
	}
	
	int maior = 0, menor = 0;
	i = 1;
	
	while (i < 12) {
		if (temp[i] > temp[maior]){
			maior = i;
		}
		if (temp[i] < temp[menor]){
			menor = i;
		}
		i++;
	}
	printf("\nMaior temperatura: %.2f°C - %s\n", temp[maior], meses[maior]);
	
	printf("\nMenor temperatura: %.2f°C - %s\n", temp[menor], meses[menor]);
	
	printf("\nDaniel Balera");
	return 0;
}