#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int n, k;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; ++i)
        scanf("%d", a + i);
    scanf("%d", &k);
    int b[n];
    for(int i = 0; i < n; ++i){
        if(i - k < 0)
            b[i] = a[n + i - k];
        else
            b[i] = a[i - k];
    }
    for(int i = 0; i < n; ++i)
        printf("%d ", b[i]);
    return 0;
}