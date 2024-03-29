#include <stdio.h>
#include <math.h>

#define ll long long

ll gcd(ll a, ll b){
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

ll lcm(ll a, ll b, ll gcd){
    return (1ll * a * b) / gcd;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        ll a, b;
        scanf("%lld%lld", &a, &b);
        printf("%lld %lld\n", lcm(a, b, gcd(a, b)), gcd(a, b));
    }
    return 0;
}