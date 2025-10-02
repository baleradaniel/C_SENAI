#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int codigo_cidade, numero_veiculos, numero_acidentes;
    int maior_indice_acidentes = -1, menor_indice_acidentes = 1000000;
    int cidade_maior_indice = -1, cidade_menor_indice = -1;
    int total_veiculos = 0, total_acidentes_menos_2000 = 0, cidades_menos_2000 = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o código da cidade: ");
        scanf("%d", &codigo_cidade);
        printf("Digite o número de veículos de passeio: ");
        scanf("%d", &numero_veiculos);
        printf("Digite o número de acidentes de trânsito com vítimas: ");
        scanf("%d", &numero_acidentes);

        if (numero_acidentes > maior_indice_acidentes)
        {
            maior_indice_acidentes = numero_acidentes;
            cidade_maior_indice = codigo_cidade;
        }
        if (numero_acidentes < menor_indice_acidentes)
        {
            menor_indice_acidentes = numero_acidentes;
            cidade_menor_indice = codigo_cidade;
        }

        total_veiculos += numero_veiculos;

        if (numero_veiculos < 2000)
        {
            total_acidentes_menos_2000 += numero_acidentes;
            cidades_menos_2000++;
        }
    }

    float media_veiculos = total_veiculos / 5.0;
    float media_acidentes_menos_2000 = (cidades_menos_2000 > 0) ? (total_acidentes_menos_2000 / (float)cidades_menos_2000) : 0;

    printf("Maior índice de acidentes: %d na cidade %d\n", maior_indice_acidentes, cidade_maior_indice);
    printf("Menor índice de acidentes: %d na cidade %d\n", menor_indice_acidentes, cidade_menor_indice);
    printf("Média de veículos nas cinco cidades: %.2f\n", media_veiculos);
    printf("Média de acidentes nas cidades com menos de 2000 veículos: %.2f\n", media_acidentes_menos_2000); 
    printf("\nDaniel Balera");
    return 0;
}