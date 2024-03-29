#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define ll long long

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n%d\n%lld\n%d\n%d\n%.2f", a + b, a - b, 1ll * a * b, a / b, a % b, 1.0 * a / b);
    return 0;
}