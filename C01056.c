#include <stdio.h>
#include <math.h>

#define ll long long

int solve(ll n){
    int tmp = 9;
    while(n){
        if(n % 10 > tmp)
            return 0;
        tmp = n % 10;
        n /= 10;
    }
    return 1;
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