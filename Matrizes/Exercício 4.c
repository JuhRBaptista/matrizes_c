#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int linha, coluna, profundidade;
    float matriz[5][4][2];

    for (profundidade = 0; profundidade < 2; profundidade ++)
    {
        for (coluna = 0; coluna < 4; coluna ++)
        {
            for (linha = 0; linha < 5; linha++)
            {
            printf ("Insira um número para a coluna %d, linha %d e profundidade %d da matriz: ", coluna, linha, profundidade);
            scanf (" %f", &matriz[linha][coluna][profundidade]);
            }
        }
    }
    
    printf ("\n\nPrimeira camada:\n");
    for (linha = 0; linha < 5; linha ++)
    {
        for (coluna = 0; coluna < 4; coluna++)
        {
            printf ("%.2f  ", matriz[linha][coluna][0]);
        }
        printf ("\n");
    }
    printf ("\n\nSegunda camada:\n");
    for (linha = 0; linha < 5; linha ++)
    {
        for (coluna = 0; coluna < 4; coluna++)
        {
            printf ("%.2f  ", matriz[linha][coluna][1]);
        }
        printf ("\n");
    }
    printf ("\n\n\n\n");

}