#include <stdio.h>

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; ++i){
        for(int j = i, cnt = 1; j > 0 && cnt <= m; --j, ++cnt)
            printf("%d", j);
        for(int j = 2, cnt = i + 1; j <= m && cnt <= m; ++j, ++cnt)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}