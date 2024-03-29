#include <stdio.h>
#include <math.h>

#define ll long long

int gcd(int a, int b){
    if(b == 0)
        return a;
    else 
        return gcd(b, a % b);
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n%lld", gcd(a, b), (1ll * a * b) / gcd(a, b));
    return 0;
}