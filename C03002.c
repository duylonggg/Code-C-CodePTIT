#include <stdio.h>
#include <math.h>

#define ll long long

int not_prime[1000005];
void sieve(int n){
    not_prime[0] = 1;
    not_prime[1] = 1;
    int sqr = (int) sqrt(n);
    for(int i = 2; i <= sqr; ++i)
        if(!not_prime[i])
            for(int j = i * i; j <= n; j += i)
                not_prime[j] = 1;
}

int main(){
    int n;
    scanf("%d", &n);
    sieve(n);
    for(int i = 2; i <= n; ++i)
        if(!not_prime[i])
            printf("%d\n", i);
    return 0;
}