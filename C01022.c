#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, ans = 0;
        scanf("%d", &n);
        while(n){
            ans += n % 10;
            n /= 10;
        }
        printf("%d\n", ans);
    }
    return 0;
}