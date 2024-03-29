#include <stdio.h>
#include <math.h>

int notPrime[1000005] = {};
int prime[1000005] = {};
void sieve()
{
    notPrime[0] = 1;
    notPrime[1] = 1;
    int sqr = sqrt(1000005);
    for (int i = 2; i <= sqr; ++i)
        if (!notPrime[i])
            for (int j = i * i; j < 1000005; j += i)
                notPrime[j] = 1;
}

void copy(){
    sieve();
    int cnt = 0;
    for(int i = 0; i < 1000005; ++i)
        if(!notPrime[i])
            prime[cnt++] = i;
}

void change(int matrix[105][105], int n)
{
    copy();
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    int cnt = 0;
    while (h1 <= h2 && c1 <= c2)
    {
        for (int i = c1; i <= c2; ++i)
            matrix[h1][i] = prime[cnt++];
        ++h1;
        for (int i = h1; i <= h2; ++i)
            matrix[i][c2] = prime[cnt++];
        --c2;
        if (c1 <= c2)
            for (int i = c2; i >= c1; --i)
                matrix[h2][i] = prime[cnt++];
        --h2;
        if (h1 <= h2)
            for (int i = h2; i >= h1; --i)
                matrix[i][c1] = prime[cnt++];
        ++c1;
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    int cnt = 1;
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int matrix[105][105];
        change(matrix, n);
        printf("Test %d:\n", cnt++);
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j)
                printf("%d ", matrix[i][j]);
            printf("\n");
        }
        printf("\n");
    }
}