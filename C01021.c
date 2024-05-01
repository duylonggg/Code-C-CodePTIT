#include <stdio.h>

int main(){
    int n, ans = 0;
    scanf("%d", &n);
    while(n){
        ans += n % 10;
        n /= 10;
    }
    printf("%d", ans);
    return 0;
}