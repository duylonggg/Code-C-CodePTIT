#include <stdio.h>
#include <math.h>

#define ll long long

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int LCM(int a, int b){
    return (a * b) / gcd(a, b);
}

void rut_gon(int* a, int* b){
    int ucln = gcd(*a, *b);
    *a /= ucln;
    *b /= ucln;
}

int main(){
    int t;
    scanf("%d", &t);
    int cnt = 1;
    while(t--){
        int a, b, m, n;
        scanf("%d%d%d%d", &a, &b, &m, &n);
        
        rut_gon(&a, &b);
        rut_gon(&m, &n);
        
        printf("Case #%d:\n", cnt++);
        
        int lcm = LCM(b, n);
        int tu1 = a * (lcm / b);
        int tu2 = m * (lcm / n);
        
        // Rut gon:
        printf("%d/%d %d/%d\n", tu1, lcm, tu2, lcm);
        
        // Tinh tong
        int tu = tu1 + tu2;
        int mau = lcm;
        rut_gon(&tu, &mau);
        printf("%d/%d\n", tu, mau);
        
        // Tinh thuong
        int tu3 = a * n;
        int tu4 = m * b;
        rut_gon(&tu3, &tu4);
        
        printf("%d/%d\n", tu3, tu4);
    }
    return 0;
}
