#include <stdio.h>
#include <math.h>

#define ll long long

int all_even(ll n){
    while(n){
        if((n % 10) % 2 != 0) return 0;
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
        printf("%s\n", (n % 2 == 0 && all_even(n)) ? "YES" : "NO");
    }
    return 0;
}
