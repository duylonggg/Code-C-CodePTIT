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
    for (int i = 0; i < m; ++i)
    {
        int dem0 = 0;
        for (int j = 0; j < n; ++j)
        {
            if (matrix[i][j] < 101)
                printf("%d ", matrix[i][j]);
            dem0 += (matrix[i][j] == 101);
        }
        if (dem0 != n)
            endl;
    }
}

int rowSum(int matrix[100][100], int m, int n)
{
    int tmp = 0;
    for (int i = 0; i < m; ++i)
    {
        int sum = 0;
        for (int j = 0; j < n; ++j)
            sum += matrix[i][j];
        if (tmp < sum)
            tmp = sum;
    }
    return tmp;
}

int collumnSum(int matrix[100][100], int m, int n)
{
    int tmp = 0;
    for (int j = 0; j < n; ++j)
    {
        int sum = 0;
        for (int i = 0; i < m; ++i)
            sum += matrix[i][j];
        if (tmp < sum)
            tmp = sum;
    }
    return tmp;
}

void checkRow(int matrix[100][100], int m, int n, int maxRow)
{
    for (int i = 0; i < m; ++i)
    {
        int sum = 0;
        for (int j = 0; j < n; ++j)
            sum += matrix[i][j];
        if (sum == maxRow)
        {
            for (int j = 0; j < n; ++j)
                matrix[i][j] = 101;
            return;
        }
    }
}

void checkCollumn(int matrix[100][100], int m, int n, int maxCollumn)
{
    for (int j = 0; j < n; ++j)
    {
        int sum = 0;
        for (int i = 0; i < m; ++i)
            sum += matrix[i][j];
        if (sum == maxCollumn)
        {
            for (int i = 0; i < m; ++i)
                matrix[i][j] = 101;
            return;
        }
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

        int maxRow = rowSum(matrix, m, n);
        checkRow(matrix, m, n, maxRow);

        int maxCollumn = collumnSum(matrix, m, n);
        checkCollumn(matrix, m, n, maxCollumn);

        printf("Test %d:", ++dem);
        endl;
        out(matrix, m, n);
    }
}