#include <stdio.h>

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 0; i < m; ++i){
        if(i == 0 || i == m - 1)
            for(int i = 0; i < n; ++i)
                printf("*");
        else{
            for(int i = 0; i < n; ++i){
                if(i == 0 || i == n - 1)
                    printf("*");
                else    
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}