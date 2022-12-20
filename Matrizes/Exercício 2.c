# include <stdio.h>
# include <stdlib.h>

int main ()
{
    int linha, coluna, contador;
    float vetorA[7], vetorB[7], matrizC[7][2];

    printf ("Vetor A: \n");
    for (contador = 0; contador < 7; contador++)
    {
        printf ("Insira um valor para a posição %d: ",  contador);
        scanf ("%f", &vetorA[contador]);
    }
    printf ("\nVetor A: \n");
    for (contador = 0; contador < 7; contador++)
    {
        printf ("%.0f ", vetorA[contador]);
    }

    printf ("\n\nVetor B: \n");
    for (contador = 0; contador < 7; contador++)
    {
        printf ("Insira um valor para a posição %d: ",  contador);
        scanf ("%f", &vetorB[contador]);
    }
     printf ("\nVetor B: \n");
    for (contador = 0; contador < 7; contador++)
    {
        printf ("%.0f ", vetorB[contador]);
    }
    
    printf ("\n\nMatriz C:\n");
    for (contador = 0; contador < 7; contador++)
    {
        matrizC[contador][0] = vetorA[contador];
    }
    for (contador = 0; contador < 7; contador++)
    {
        matrizC[contador][1] = vetorB[contador];
    }

    for (linha = 0; linha < 7; linha ++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            printf ("%.0f  ", matrizC[linha][coluna]);
        }
        printf ("\n");
    }
    printf ("\n\n\n\n");

    return 0;
}