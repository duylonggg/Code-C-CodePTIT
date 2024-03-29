#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        ll n;
        scanf("%lld", &n);
        ll max = 0, res = 0;
        for(int i = 1; i <= n; ++i){
            ll x;
            scanf("%lld", &x);
            res += x;
            if(res <= 0) res = 0;
            if(max <= res) max = res;
        }
        printf("%lld\n", max);
    }
    return 0;
}