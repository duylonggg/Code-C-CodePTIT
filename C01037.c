#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    ll ans = (a + b) * (abs(a - b) + 1ll) / 2;
    printf("%lld", ans);
    return 0;
}