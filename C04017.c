#include <stdio.h>
#include <math.h>

#define ll long long

int is_prime(int n) {
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    return 1;
}

int main(){
    int n, x;
    scanf("%d", &n);
    int a[105] = {};
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        scanf("%d", &x);
        if(is_prime(x)){
            a[cnt++] = x;
        }
    }
    printf("%d ", cnt);
    for(int i = 0; i < cnt; ++i)
        printf("%d ", a[i]);
    return 0;
}