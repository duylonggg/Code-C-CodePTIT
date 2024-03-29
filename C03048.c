#include <stdio.h>
#include <math.h>

#define ll long long

int check(ll n){
    if(n % 2 != 0) return 0;
    ll even = 0, odd = 0;
    while(n){
        even += (n % 10) % 2 == 0;
        odd += (n % 10) % 2 != 0;
        n /= 10;
    }
    return even > odd;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        ll n;
        scanf("%lld", &n);
        printf("%s\n", check(n) ? "YES" : "NO");
    }
    return 0;
}