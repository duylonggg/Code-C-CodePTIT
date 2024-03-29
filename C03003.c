#include <stdio.h>
#include <math.h>

#define ll long long

int not_prime[10000010];
void sieve(){
    not_prime[0] = 1;
    not_prime[1] = 1;
    int sqr = (int) sqrt(10000010);
    for(int i = 2; i <= sqr; ++i)
        if(!not_prime[i])
            for(int j = i * i; j <= 10000010; j += i)
                not_prime[j] = 1;
}

int main(){
    int n, cnt = 0;
    scanf("%d", &n);
    sieve();
    for(int i = 0; i <= 10000010; ++i){
        if(!not_prime[i]){
            printf("%d\n", i);
            ++cnt;
        }
        if(cnt >= n)
            break;
    }
    return 0;
}