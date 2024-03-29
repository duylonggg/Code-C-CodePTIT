#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int n;
    scanf("%d", &n);
    ll ans = 1;
    while(n){
        ans *= n % 10ll;
        n /= 10;
    }
    printf("%lld", ans);
    return 0;
}