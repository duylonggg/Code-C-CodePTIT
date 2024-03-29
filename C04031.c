#include <stdio.h>
#include <stdlib.h> 

#define ll long long

int main() {
    int t;
    scanf("%d", &t);
    int cnt = 0;
    while (t--) {
        int n;
        scanf("%d", &n);

        int a[n + 1];
        a[0] = 1005;

        int b[1005][1005] = {}, f[1005] = {};
        
        int cnt1 = 0, cnt2 = 1, max = 0;

        for (int i = 1; i <= n; ++i)
            scanf("%d", a + i);

        for (int i = 1; i <= n; ++i) {
            if (a[i] <= a[i - 1]) {
                f[cnt1] = cnt2;
                cnt2 = 1;
                ++cnt1;
            }
            b[cnt1][cnt2++] = a[i];
            if (cnt2 > max) max = cnt2;
        }
        f[cnt1] = cnt2;

        printf("Test %d:\n%d\n", ++cnt, max - 1);

        for (int i = 1; i <= cnt1; ++i) {
            if (f[i] == max) {
                for (int j = 1; j < max; ++j)
                    printf("%d ", b[i][j]);
                printf("\n");
            }
        }
    }
    return 0;
}
