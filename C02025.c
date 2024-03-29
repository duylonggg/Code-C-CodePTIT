#include <stdio.h>

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; ++i){
        for(int j = i; j < m; ++j)
            printf("%c", '@' + j);
        if(i < m){
            for(int j = i; j > 0; --j)
                printf("%c", '@' + m - 1);
        }
        else{
            for(int j = m - 1; j >= 0; --j)
                printf("%c", '@' + m - 1);
        }
        printf("\n");
    }
    return 0;
}