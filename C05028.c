#include <stdio.h>

int main() {
    int n;
    scanf("%d\n", &n);

    int a[15][15];
    int cnt = 0;
    char s[15];
    while(scanf("%s", &s) != -1){
        for(int i = 0; i < n; ++i)
            a[cnt][i] = s[i] - '0';
        ++cnt;
    }

    // for(int i = 0; i < n; ++i){
    //     for(int j = 0; j < n; ++j)
    //         printf("%d ", a[i][j]);
    //     printf("\n");
    // }

    int ans = 0;
    for (int i = n - 1; i >= 0; --i) {
        for (int j = n - 1; j >= 0; --j) {
            if (a[i][j] == 1) {
                ++ans;
                for (int k = 0; k <= i; ++k) {
                    for (int l = 0; l <= j; ++l) {
                        a[k][l] ^= 1;
                    }
                }
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}