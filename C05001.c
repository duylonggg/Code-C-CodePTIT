#include <stdio.h>
int matrix[100][100];
#define endl printf("\n")

int append(int array[100][100], int m, int n)
{
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &array[i][j]);
}

void tranpose(int array[100][100], int m, int n)
{
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            matrix[i][j] = array[j][i];
}

void out(int array[100][100], int matrix[100][100], int m, int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            printf("%d ", matrix[i][j]);
        endl;
    }
}

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int array[100][100];
    append(array, m, n);
    tranpose(array, m, n);
    out(array, matrix, m, n);
    return 0;
}