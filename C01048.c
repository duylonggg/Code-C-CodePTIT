#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int n, odd = 0, even = 0;
    scanf("%d", &n);
    while(n){
        odd += ((n % 10) & 1);
        even += !((n % 10) & 1);
        n /= 10;
    }
    printf("%d %d", odd, even);
    return 0;
}