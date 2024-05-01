#include <stdio.h>
#include <stdlib.h>

#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);
    if(n != 0){
        ll a[100] = {};
        ll cnt = 0;
        while(n){
            a[cnt++] = n % 2;
            n /= 2;
        }
        for(ll i = cnt - 1; i >= 0; --i)
            printf("%lld", a[i]);
    }
    else
        printf("0");
    return 0;
}