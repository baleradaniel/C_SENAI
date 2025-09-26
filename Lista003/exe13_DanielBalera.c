#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float salario, imposto, novo_salario, adicional;

    printf("--- Menu ---\n");
    printf("\n [1] Imposto");
    printf("\n [2] Novo Salário");
    printf("\n [3] Classificação");
    printf("\n [4] Sair");
    printf("\n ");
    printf("\nEscolha uma opção: ");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1:
            printf("\n Digite o salário: ");
            scanf("%f", &salario);

            if (salario < 500) {
                imposto = salario * 0.05;
            }
            else if (salario >= 500 && salario <= 850) {
                imposto = salario * 0.1;
            }
            else {
                imposto = salario * 0.15;
            }

            novo_salario = salario - imposto;
            printf("Imposto: R$ %.2f\n", imposto);
            printf(" |||| Novo salário: R$ %.2f ||||\n", novo_salario);
            printf("\n Encerrando programa...");
            break;
        
        case 2:
            printf("\n Digite o salário: ");
            scanf("%f", &salario);

            if (salario > 1500) {
                adicional = 25;
                novo_salario = salario + adicional;
            }
            else if (salario >= 750 && salario <= 1500) {
                adicional = 50;
                novo_salario = salario + adicional;
            }
            else if (salario >= 450 && salario < 750) {
                adicional = 75;
                novo_salario = salario + adicional;
            }
            else {
                adicional = 100;
                novo_salario = salario + adicional;
            }

            printf("Adicional: R$ %.2f\n", adicional);
            printf("Novo salário: R$ %.2f\n", novo_salario);
            printf("\n Encerrando programa...");
            break;
        
        case 3:
            printf("\n Digite o salário: ");
            scanf("%f", &salario);

            if (salario <= 700) {
                printf("Mal remunerado\n");
            }
            else {
                printf("Bem remunerado\n");
            }

            printf("\n Encerrando programa...");
            break;
        
        case 4:
        	printf("\n Encerrando programa...");
        	break;
    }
    
    if (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4) {
    	printf("Opção Inválida, Encerrando programa...");
	}
    printf("\n Daniel Balera")
    getchar();
    return 0;
}