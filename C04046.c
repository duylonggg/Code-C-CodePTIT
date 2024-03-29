#include <stdio.h>
#include <stdlib.h>

#define ll long long

int cmp(const int* a, const int* b) {
    return (*b < *a);
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; ++i)
            scanf("%d", &a[i]);
        qsort(a, n, sizeof(int), cmp);
        // for(int i = 0; i < n; ++i)
        //     printf("%d ", a[i]);
        // printf("\n");
        int prefix_sum[n - 1];
        int min = 1e9;
        for(int i = 1; i < n; ++i){
            prefix_sum[i - 1] = a[i] - a[i - 1];
            if(min > prefix_sum[i - 1])
                min = prefix_sum[i - 1];
        }
        int cnt = 0;
        for(int i = 0; i < n - 1; ++i)
            cnt += (prefix_sum[i] == min);
        printf("%d %d\n", min, cnt);
    }
    return 0;
}
