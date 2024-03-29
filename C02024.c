#include <stdio.h>

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; ++i){
        for(int j = i; j < m; ++j)
            printf("%c", 'A' + j);
        if(i < m){
            for(int j = i; j > 0; --j)
                printf("%c", 'A' + j - 1);
        }
        else{
            for(int j = m - 1; j >= 0; --j)
                printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}