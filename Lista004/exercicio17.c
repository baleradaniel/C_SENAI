#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n_nasce, percentual_morte, contador_morte_m, contador_morte_f, tempo_vida, i;
    char sexo;

    printf("Digite o número de crianças nascidas no periodo : ");
    scanf("%f", &n_nasce);

    for (i = 0; i < n_nasce; i++)
    {
      	printf("\nDigite o sexo da %.0fª criança (m ou f): ", i + 1);
    	scanf("%s", &sexo);
        printf("\nDigite o tempo de vida da criança em meses: ");
        scanf("%f", &tempo_vida);

        if (sexo == 'm' || sexo == 'M')
        {
            if (tempo_vida <= 24)
            {
                contador_morte_m++;
            }
        }
        else if (sexo == 'f' || sexo == 'F')
        {
            if (tempo_vida <= 24)
            {
                contador_morte_f++;
            }
        }
    }
    percentual_morte = ((contador_morte_m + contador_morte_f) / n_nasce) * 100;
    printf("\nPercentual de crianças do sexo masculino mortas no periodo: %.2f%%", (contador_morte_m / n_nasce) * 100);
    printf("\nPercentual de crianças do sexo feminino mortas no periodo: %.2f%%", (contador_morte_f / n_nasce) * 100);
    printf("\nPercentual de crianças que viveram 24 meses ou menos no periodo: %.2f%%\n", percentual_morte);
    printf("\nDaniel Balera");

    return 0;
}