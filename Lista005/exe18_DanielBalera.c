#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario_inicial = 1000.0;
    float salario = salario_inicial;
    float percentual = 0.015;
    int ano = 2021;
    int ano_atual;

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    
    salario += salario_inicial * percentual;

    while (ano < ano_atual)
    {
        ano++;
        percentual *= 2; // Dobrar o percentual para o próximo ano
        salario += salario_inicial * percentual;
    }

    printf("O salário atual do funcionário é: R$ %.2f\n", salario);
    printf("\nDaniel Balera");
    return 0;

}