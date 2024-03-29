#include <stdio.h>
#include <math.h>

int fibo[10000000];
void copy(){
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i < 10000000; ++i)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
}

void change(int matrix[105][105], int n)
{
    copy();
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    int cnt = 0;
    while (h1 <= h2 && c1 <= c2)
    {
        for (int i = c1; i <= c2; ++i)
            matrix[h1][i] = fibo[cnt++];
        ++h1;
        for (int i = h1; i <= h2; ++i)
            matrix[i][c2] = fibo[cnt++];
        --c2;
        if (c1 <= c2)
            for (int i = c2; i >= c1; --i)
                matrix[h2][i] = fibo[cnt++];
        --h2;
        if (h1 <= h2)
            for (int i = h2; i >= h1; --i)
                matrix[i][c1] = fibo[cnt++];
        ++c1;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int matrix[105][105];
    change(matrix, n);
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}