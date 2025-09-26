#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int mes, dia;

    printf("Digite o número do mês (1-12): ");
    scanf("%d", &mes);

    printf("Digite o dia do mês: ");
    scanf("%d", &dia);

    switch (mes)
    {
    case 1:
        if (dia >= 20 && dia <= 31)
            printf("Aquário\n");
        else if (dia >= 1 && dia <= 19)
            printf("Capricórnio\n");
        else
            printf("Data inválida\n");
        break;

    case 2:
        if (dia >= 19 && dia <= 29)
            printf("Peixes\n");
        else if (dia >= 1 && dia <= 18)
            printf("Aquário\n");
        else
            printf("Data inválida\n");
        break;

    case 3:
        if (dia >= 21 && dia <= 31)
            printf("Áries\n");
        else if (dia >= 1 && dia <= 20)
            printf("Peixes\n");
        else
            printf("Data inválida\n");
        break;

    case 4:
        if (dia >= 20 && dia <= 30)
            printf("Touro\n");
        else if (dia >= 1 && dia <= 19)
            printf("Áries\n");
        else
            printf("Data inválida\n");
        break;

    case 5:
        if (dia >= 21 && dia <= 31)
            printf("Gêmeos\n");
        else if (dia >= 1 && dia <= 20)
            printf("Touro\n");
        else
            printf("Data inválida\n");
        break;

    case 6:
        if (dia >= 21 && dia <= 30)
            printf("Câncer\n");
        else if (dia >= 1 && dia <= 20)
            printf("Gêmeos\n");
        else
            printf("Data inválida\n");
        break;

    case 7:
        if (dia >= 23 && dia <= 31)
            printf("Leão\n");
        else if (dia >= 1 && dia <= 22)
            printf("Câncer\n");
        else
            printf("Data inválida\n");
        break;

    case 8:
        if (dia >= 23 && dia <= 31)
            printf("Virgem\n");
        else if (dia >= 1 && dia <= 22)
            printf("Leão\n");
        else
            printf("Data inválida\n");
        break;

    case 9:
        if (dia >= 23 && dia <= 30)
            printf("Libra\n");
        else if (dia >= 1 && dia <= 22)
            printf("Virgem\n");
        else
            printf("Data inválida\n");
        break;

    case 10:
        if (dia >= 23 && dia <= 31)
            printf("Escorpião\n");
        else if (dia >= 1 && dia <= 22)
            printf("Libra\n");
        else
            printf("Data inválida\n");
        break;

    case 11:
        if (dia >= 22 && dia <= 30)
            printf("Sagitário\n");
        else if (dia >= 1 && dia <= 21)
            printf("Escorpião\n");
        else
            printf("Data inválida\n");
        break;

    case 12:
        if (dia >= 22 && dia <= 31)
            printf("Capricórnio\n");
        else if (dia >= 1 && dia <= 21)
            printf("Sagitário\n");
        else
            printf("Data inválida\n");
        break;
    }
    
    if (mes > 12) {
        if (mes < 1)
            printf("Mês inválido\n");
    }
    printf("\n Daniel Balera")
    getchar();
    return 0;
}