#include <stdio.h>
#include <math.h>

#define ll long long

int fibo[1005] = {};
void fibonacci(int n){
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i <= n; ++i)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
}

int main(){
    int n;
    scanf("%d", &n);
    fibonacci(n);
    for(int i = 0; i < n; ++i)
        printf("%d ", fibo[i]);
    return 0;
}