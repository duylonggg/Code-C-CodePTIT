#include <stdio.h>
#include <math.h>

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b){
    return a * b / gcd(a, b);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n], b[n + 1];
        for(int i = 0; i < n; ++i){
            scanf("%d", a + i);
            b[0] = a[0];
        }
        for(int i = 1; i < n; ++i)
            b[i] = lcm(a[i], a[i - 1]);
        b[n] = a[n - 1];
        for(int i = 0; i < n + 1; ++i)
            printf("%d ", b[i]);
        printf("\n");
    }
    return 0;
}