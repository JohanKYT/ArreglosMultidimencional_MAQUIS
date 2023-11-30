#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Definimos las variables del numero de matrices y las dimeciones de las mismas
    int numMatrices, n, m;
    printf("Ingrese el numero de matrices: ");
    scanf("%d", &numMatrices);
    // Escaneamos el numero de matrices
    printf("Ingrese el numero de filas para la matriz: ");
    scanf("%d", &n);
    // Escaneamos el numero de filas de las matrices
    printf("Ingrese el numero de columnas para la matriz: ");
    scanf("%d", &m);
    // Escaneamos el numero de filas de las matrices
    int ArreMulti[n][m][numMatrices];

    for (int k = 0; k < numMatrices; k++)
    {
        printf("\nMatriz %d:\n", k + 1);
        for (int i = 0; i < n; i++)
        {
            printf("\n");
            for (int j = 0; j < m; j++)
            {
                if (k == numMatrices - 1)
                {
                    ArreMulti[i][j][k] = 1;
                }
                else
                {
                    ArreMulti[i][j][k] = 0;
                }
                printf("%d\t", ArreMulti[i][j][k]);
            }
        }
        printf("\n");
    }

    return 0;
}
