#include<stdio.h>

// Retorna o valor do Coeficiente Binomial C(n, k)
int coeficienteBinomial(int n, int k)
{
    int C[n+1][k+1];
    int i, j;

    // Cacula o value do Coeficiente Binomial de baixo para cima
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= min(i, k); j++)
        {
            // Casos base
            if (j == 0 || j == i)
                C[i][j] = 1;

            // Calcula o valor usando os valores armazenados anteriormente
            else
                C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
    }

    return C[n][k];
}

// Retorna o mínimo entre dois inteiros
int min(int a, int b)
{
    return (a<b)? a: b;
}


int main()
{
    int n = 6, k = 3;
    printf ("Valor do coeficiente(%d, %d) = %d ", n, k, coeficienteBinomial(n, k) );
    return 0;
}
