#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        ll n;
        scanf("%lld", &n);
        ll max_prime = -1;
        for(ll i = 2; i * i <= n; ++i){
            while(n % i == 0){
                max_prime = i;
                n /= i;
            }
        }
        if(n > 1)
            max_prime = n;
        printf("%lld\n", max_prime);
    }
    return 0;
}