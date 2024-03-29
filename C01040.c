#include <stdio.h>

int perfect(int n){
    int cnt = 0;
    for(int i = 1; i < n; ++i)
        cnt += i * (n % i == 0);
    return cnt == n;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", perfect(n));
    return 0;
}