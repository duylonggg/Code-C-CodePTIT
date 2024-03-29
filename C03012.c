#include <stdio.h>
#include <math.h>

#define ll long long

int fibonacci(int n){
    int fibo[1005];
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i <= 1000; ++i){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        if(fibo[i] == n)
            return 1;
        if(fibo[i] > n)
            return 0;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", fibonacci(n));
    return 0;
}