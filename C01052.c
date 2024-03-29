#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, ans = 0;
        scanf("%d", &n);
        float sqr = 1.0 * sqrt(n);
        for(int i = 1; i <= sqr; ++i){
            if(i == sqr && n % i == 0)
                    ans += !(i & 1);
            else
                if(n % i == 0)
                    ans += !(i & 1) + !((n / i) & 1);
        }
        printf("%d\n", ans);
    }
    return 0;
}