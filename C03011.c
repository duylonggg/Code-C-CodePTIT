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

void swap(int* a, int* b){
    if(*a <= *b) 
        return;
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    swap(&m, &n);
    int res = 1e7;
    if(n <= 1e7)
        res = n;
    for(int i = m; i <= res; ++i){
        if(strong(i))
            printf("%d ", i);
    }
    return 0;
}