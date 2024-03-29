#include <stdio.h>
#include <math.h>

#define ll long long

int fibonacci[1005];
int not_prime[1005];

int sum(int n){
    int total = 0;
    while(n){
        total += n % 10;
        n /= 10;
    }
    return total;
}
// 0 1 1 2 3 5 8 13 21 34 55
int fibo(int n){
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for(int i = 2; i < 1005; ++i){
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        if(fibonacci[i] == sum(n)) return 1;
        if(fibonacci[i] > sum(n)) return 0;
    }
}

void sieve(){
    not_prime[0] = 1;
    not_prime[1] = 1;
    int sqr = (int) sqrt(1005);
    for(int i = 2; i <= sqr; ++i)
        if(!not_prime[i])
            for(int j = i * i; j <= 1005; j += i)
                not_prime[j] = 1;
}

void swap(int* a, int* b){
    if(*a <= *b) 
        return;
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    sieve();
    swap(&a, &b);
    for(int i = a; i <= b; ++i){
        if(!not_prime[i])
            if(fibo(i))
                printf("%d ", i);
    }
    return 0;
}