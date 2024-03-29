#include <stdio.h>
#include <math.h>

#define ll long long

int not_prime[1000005];
void sieve(){
    not_prime[0] = 1;
    not_prime[1] = 1;
    for(int i = 2; i <= sqrt(1000005); ++i)
        if(!not_prime[i])
            for(int j = i * i; j <= 1000005; j += i)
                not_prime[j] = 1;
}

int check(int n){
    while(n){
        if(not_prime[n % 10]) 
            return 0;
        n /= 10;
    }
    return 1;
}

int main(){
    int t;
    scanf("%d", &t);
    sieve();
    while(t--){
        int a, b;
        scanf("%d%d", &a, &b);
        int cnt = 0;
        for(int i = a; i <= b; ++i){
            if(!not_prime[i] && check(i))
                ++cnt;
        }
        printf("%d\n", cnt);
    }
    return 0;
}