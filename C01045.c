#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int n;
    scanf("%d", &n);
    printf("%d %d", n / (int) pow(10, (int) log10(n)), n % 10);
    return 0;
}