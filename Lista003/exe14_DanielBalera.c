#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, operacao, opcao;
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    printf("Escolha a operação desejada:\n");
    printf("[1] Adição\n");
    printf("[2] Subtração\n");
    printf("[3] Multiplicação\n");
    printf("[4] Divisão\n");
    scanf("%f", &operacao);
    switch (operacao)
    {
    case 1:
        printf("A soma de %.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
        break;
    case 2:
        printf("A subtração de %.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
        break;
    case 3:
        printf("A multiplicação de %.2f * %.2f = %.2f\n", n1, n2, n1 * n2);
        break;
    case 4:
        if (n2 != 0)
            printf("A divisão de %.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
        else
            printf("Erro: Divisão por zero não é permitida.\n");
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }
    printf("\n Daniel Balera");
    getchar();
    return 0;
}