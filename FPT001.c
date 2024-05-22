#include <stdio.h>
#define endl printf("\n")
int matrix[100][100];

void add(int matrix[100][100], int n){
    for(int i = 0; i < n; ++i){
        int cnt = 1;
        for(int j = i + 1; j < n; ++j)
            matrix[i][j] = cnt++;
    }
}

void out(int n){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j)
            printf("%d ", matrix[i][j]);
        endl;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    add(matrix, n);
    out(n);
    return 0;
}