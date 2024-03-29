#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int n, x;
    scanf("%d", &n);
    float total;
    for(int i = 0; i < n; ++i){ 
        scanf("%d", &x);
        total += 1.0 * x;
    }
    total /= 1.0 * n;
    printf("%.3f", total);
    return 0;
}