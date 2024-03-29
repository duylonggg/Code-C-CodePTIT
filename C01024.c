#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        printf((n / (int) pow(10, (int) log10(n)) == n % 10 ? "YES\n" : "NO\n"));
    }
    return 0;
}