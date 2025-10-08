#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i = 1;
	float n1, n2, media;
	int a = 0, r = 0, e = 0;
	
	do{
		printf("\n|---|---|---|---|---|---|---|---|---|");	
		printf("\nDigite a 1ª nota: ");
		scanf("%f", &n1);
		
		printf("\nDigite a 2ª nota: ");
		scanf("%f", &n2);
		
		media = (n1 + n2) / 2;
		
		printf("\nMédia: %0.2f", media);
		
		if (media < 3){
			printf("\nReprovado!");
			r++;
		}else if (media >= 3 && media <= 7){
			printf("\nEm Exame!");
			e++;
		} else if (media > 7 && media <= 10){
			printf("\nAprovado!");
			a++;
		}else{
			printf("\nNota Inválida! Encerrando o programa...");
			exit(0);
		}
		
		i++;
	
	}while (i <= 6);
	
	printf("\n|---|---|---|---|---|---|---|---|---|");
	printf("\nTotal de alunos Aprovados: %d", a);
	printf("\nTotal de alunos Reprovados: %d", r);
	printf("\nTotal de alunos em Exame: %d", e);
	printf("\nDaniel Balera");
	
	return 0;
}