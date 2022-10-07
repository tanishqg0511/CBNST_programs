#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n;
    printf("enter order of matrix");
    scanf("%d %d", &m, &n);
    float a[m][n + 1];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n + 1; j++)
            scanf("%f", &a[i][j]);

    for (int i = 0; i < m; i++)
    {
        for (int k = i + 1; k < n; k++)
        {
            if (a[i][i] == 0)
            {
                printf("error\n");
                return 0;
            }
            float x = a[i][i];
            float y = a[k][i];
            for (int j = 0; j < n + 1; j++)
            {
                a[k][j] = a[k][j] - (y / x) * a[i][j];
            }
        }
        printf("\nintermediate matrix\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n + 1; j++)
            {
                printf("%.2f ", a[i][j]);
            }
            printf("\n");
        }
    }
    printf("Diagonal matrix :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n + 1; j++)
            printf("%.2f ", a[i][j]);

        printf("\n");
    }
    float x[n];
    for (int i = m - 1; i >= 0; i--)
    {
        x[i] = a[i][n];
        for (int j = i + 1; j < n; j++)
            x[i] = x[i] - a[i][j] * x[j];

        if (a[i][i] != 0)
            x[i] = x[i] / a[i][i];
    }
    printf("\nSolution: \n");
    for (int i = 0; i < n; i++)
        printf("x[%d] = %0.3f \n", i, x[i]);
}