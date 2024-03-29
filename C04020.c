#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int n, k;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    
    while(k >= n){
        k %= n;
    }
    for(int i = k; i < n; ++i)
        printf("%d ", a[i]);
    for(int i = 0; i < k; ++i)
        printf("%d ", a[i]);
    return 0;
}