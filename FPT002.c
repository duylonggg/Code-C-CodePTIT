#include <stdio.h>
#define endl printf("\n")
int matrixNew[100][100] = {0};
int matrixNew2[100][100] = {0};

void add(int matrix[100][100], int m, int n){
    for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j)
            scanf("%d", &matrix[i][j]);
}

void multiply(int matrixA[100][100], int matrixB[100][100], int matrixC[100][100], int m, int n, int p, int q){
    for(int i = 0; i < m; ++i)
        for(int j = 0; j < p; ++j)
            for(int k = 0; k < n; ++k)
                matrixNew[i][j] += matrixA[i][k] * matrixB[k][j];

    for(int i = 0; i < m; ++i)
        for(int j = 0; j < q; ++j)
            for(int k = 0; k < n; ++k)
                matrixNew2[i][j] += matrixNew[i][k] * matrixC[k][j];
}

void out(int m, int q){
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < q; ++j)
            printf("%d ", matrixNew2[i][j]);
        endl;
    }
}

int main(){
    int m, n, p, q;
    scanf("%d%d%d%d", &m, &n, &p, &q);
    int matrixA[100][100];
    int matrixB[100][100];
    int matrixC[100][100];
    add(matrixA, m, n);
    add(matrixB, n, p);
    add(matrixC, p, q);
    multiply(matrixA, matrixB, matrixC, m, n, p, q);
    out(m, q);
    return 0;
}