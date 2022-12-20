#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int linha, coluna;
    float matrizAltura[5][10], maiorAltura;
    char nome[5][10][20], maisAlto[20];

    for (linha = 0; linha < 2; linha ++)
    {
        for (coluna = 0; coluna < 2; coluna ++)
        {
            printf ("Insira a altura do jogador %d da seleção %d: ", coluna+1, linha+1);
            scanf (" %f", &matrizAltura[linha][coluna]);
            printf ("Insira o nome do jogador %d da seleção %d: ", coluna+1, linha+1);
            scanf (" %s", nome[linha][coluna]);
        }
        printf ("\n");
    }

    for (linha = 0; linha < 2; linha ++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            if (maiorAltura < matrizAltura[linha][coluna])
            {
                strcpy (maisAlto, nome[linha][coluna]);
            }
        }
        printf ("\nMais alto da seleção %d: %s", linha+1, maisAlto);
    }
    printf ("\n\n\n\n\n");
    return 0;
}