#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int matrix[100][100];
    int new_matrix[100][100];   
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            scanf("%d", &matrix[i][j]);
            new_matrix[i][j] = matrix[i][j];
        }
    }
    int x, y;
    scanf("%d%d", &x, &y); 
    for(int j = 0; j < m; ++j){
        new_matrix[x - 1][j] = matrix[y - 1][j];
        new_matrix[y - 1][j] = matrix[x - 1][j];
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            printf("%d ", new_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}