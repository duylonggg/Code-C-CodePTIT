#include <stdio.h>
#include <math.h>

#define ll long long

int solve(ll n){
    ll tmp = 0;
    while(n){
        tmp += n % 10ll;
        n /= 10;
    }
    return (tmp % 10 == 0);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        ll n;
        scanf("%lld", &n);
        printf((solve(n) ? "YES\n" : "NO\n"));
    }
    return 0;
}