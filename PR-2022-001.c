#include <stdio.h>

int main() {
    int u0, d, n;
    scanf("%d%d%d", &u0, &d, &n);
    printf("%lld", (n >> 1ll) * ((u0 << 1) + (n - 1) * d));
    return 0;
}