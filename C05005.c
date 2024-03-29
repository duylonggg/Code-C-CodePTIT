#include <stdio.h>
#define endl printf("\n")

void add(int matrix[100][100], int m, int n)
{
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &matrix[i][j]);
}

void out(int matrix[100][100], int m, int n)
{
    for (int i = 1; i < m; ++i)
    {
        int dem0 = 0;
        for (int j = 1; j < n; ++j)
        {
            if (matrix[i][j] < 101)
                printf("%d ", matrix[i][j]);
            dem0 += (matrix[i][j] == 101);
        }
        if (dem0 != n)
            endl;
    }
}

int main()
{
    int t, m, n;
    int dem = 0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &m, &n);
        int matrix[100][100];
        add(matrix, m, n);

        printf("Test %d:", ++dem);
        endl;
        out(matrix, m, n);
    }
}