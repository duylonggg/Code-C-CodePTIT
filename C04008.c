// C04008
#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int t;
    scanf("%d", &t);
    int cnt = 1;
    while(t--){
        int n, m, k;
        scanf("%d%d%d", &n, &m, &k);

        int a[n], b[m];
        for(int i = 0; i < n; ++i)
            scanf("%d", &a[i]);
        for(int i = 0; i < m; ++i)
            scanf("%d", &b[i]);

        printf("Test %d:\n", cnt++);

        for(int i = 0; i < k; ++i)
            printf("%d ", a[i]);
        for(int i = 0; i < m; ++i)
            printf("%d ", b[i]);
        for(int i = k; i < n; ++i)
            printf("%d ", a[i]);
        printf("\n");
    }
    return 0;
}