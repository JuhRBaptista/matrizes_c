#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int linha = 0, coluna;
    float matrizA[5][3], matrizB[5][3], matrizC[5][3];

    printf ("Matriz A: \n");
    for (linha = 0; linha < 5; linha ++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf ("Insira um valor para a linha %d, coluna %d: ", linha, coluna);
            scanf ("%f", &matrizA[linha][coluna]);
        }
    }
    printf ("\nMatriz A: \n");
    for (linha = 0; linha < 5; linha ++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf ("%.0f  ", matrizA[linha][coluna]);
        }
        printf ("\n");
    }

    printf ("\nMatriz B: ");
    for (linha = 0; linha < 5; linha ++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf ("Insira um valor para a linha %d, coluna %d: ", linha, coluna);
            scanf ("%f", &matrizB[linha][coluna]);
        }
    }
    printf ("\nMatriz B: \n");
    for (linha = 0; linha < 5; linha ++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf ("%.0f  ", matrizB[linha][coluna]);
        }
        printf ("\n");
    }


    printf ("\nMatriz C: \n");
    for (linha = 0; linha < 5; linha ++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            matrizC[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];
            printf ("%.0f  ", matrizC[linha][coluna]);
        }
        printf ("\n");
    }

    printf ("\n\n\n\n\n");
    return 0;
}