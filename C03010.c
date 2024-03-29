#include <stdio.h>

int factorial(int n){
    int ans = 1;
    for(int i = 2; i <= n; ++i)
        ans *= i;
    return ans;
}

int strong(int n){
    int ans = 0, tmp = n;
    while(tmp){
        ans += factorial(tmp % 10);
        tmp /= 10;
        if(ans > n)
            return 0;
    }
    return ans == n;
}

int main(){
    int n;
    scanf("%d", &n);
    int res = 1e7;
    if(n <= 1e7)
        res = n;
    for(int i = 1; i <= res; ++i){
        if(strong(i))
            printf("%d ", i);
    }
    return 0;
}