#include <stdio.h>

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    if(n <= m){
        for(int i = 1; i <= n; ++i){
            for(int j = m - i + 1; j > 0; --j)
                printf("%d", j);
            for(int j = 2, cnt = i - 1; j <= m && cnt > 0; ++j, --cnt)
                printf("%d", j);
            printf("\n");
        }
    }
    else{
        for(int i = 1; i <= n; ++i){
            for(int j = n - i + 1, cnt = 0; j > 0 && cnt < m; --j, ++cnt)
                printf("%d", j);
            for(int j = n - m + 1, cnt = 2; j < i; ++j, ++cnt)
                printf("%d", cnt);
            printf("\n");
        }
    }
    return 0;
}