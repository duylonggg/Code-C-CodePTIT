#include <stdio.h>

#define ll long long

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        ll n;
        scanf("%lld", &n);
        printf("%lld\n", n * n);
    }
    return 0;
}