#include <stdio.h>
#include <math.h>

#define ll long long

ll mu(int n){
    ll cnt = 1;
    for(int i = 1; i <= n; ++i)
        cnt *= 10;
    return cnt;
}

ll max(ll x){
    int cnt = 0;
    ll tmp = x;
    while(x){
        if(x % 10 == 5) tmp += 1ll * mu(cnt);
        x /= 10;
        ++cnt;
    }
    return tmp;
}

ll min(ll x){
    int cnt = 0;
    ll tmp = x;
    while(x){
        if(x % 10 == 6) tmp -= 1ll * mu(cnt);
        x /= 10;
        ++cnt;
    }
    return tmp;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        ll x1, x2;
        scanf("%lld%lld", &x1, &x2);
        ll sum_max = max(x1) + max(x2);
        ll sum_min = min(x1) + min(x2);
        printf("%lld %lld\n", sum_min, sum_max);
    }
    return 0;
}