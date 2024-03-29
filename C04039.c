#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;
    while (scanf("%d%d", &x, &y) != -1) {
        int dis = abs(x - y);
        int res = (int) sqrt(dis);
        printf("%d\n", (res << 1) + (dis - res * res > res) - !(dis - res * res));
    }
    return 0;
}