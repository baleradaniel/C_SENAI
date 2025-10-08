#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float sal = 1000;
	float aumento = 1.5;
	int ano;
	int anoi = 2022;
	
	sal = sal + sal * 1.5 / 100;
	
	printf("\nDigite o ano: ");
	scanf("%d", &ano);
	
	if (ano >= 2022){
		do{
			aumento = aumento * 2;
			sal = sal + sal * aumento / 100;
			anoi++;
		}
		while(anoi <= ano);
		printf("\nsalario de %d: %.2f ", ano, sal);
	
	}else if (ano < 2020){
		printf("\nSó é permitido anos apartir de 2022\nEncerrando o programa...");
	}
		
	
	printf("\nDaniel Balera");
	
	return 0;
}