#include <stdio.h>

#define ll long long

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b){
    return a * b / gcd(a, b);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l, r;
        ll s = 1;
        scanf("%d%d", &l, &r);
        for (ll i = l; i <= r; i++)
            s = lcm(s, i);
        printf("%lld\n", s);
    }
}