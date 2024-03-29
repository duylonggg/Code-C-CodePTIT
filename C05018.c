#include <stdio.h>
#define endl printf("\n")

int main()
{
    int t, n;
    scanf("%d", &t);
    int dem = 1;
    while (t--)
    {
        scanf("%d", &n);
        int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
        int cnt = n * n;
        int matrix[100][100] = {};
        while (h1 <= h2 && c1 <= c2)
        {
            for (int i = c1; i <= c2; ++i)
                matrix[h1][i] = cnt--;
            ++h1;
            for (int i = h1; i <= h2; ++i)
                matrix[i][c2] = cnt--;
            --c2;
            if (c1 <= c2)
            {
                for (int i = c2; i >= c1; --i)
                    matrix[h2][i] = cnt--;
            }
            --h2;
            if (h1 <= h2)
            {
                for (int i = h2; i >= h1; --i)
                    matrix[i][c1] = cnt--;
            }
            ++c1;
        }
        printf("Test %d:\n", dem++);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
                printf("%d ", matrix[i][j]);
            printf("\n");
        }
    }
}