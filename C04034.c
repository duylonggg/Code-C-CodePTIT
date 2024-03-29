#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define ll long long

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; ++i)
            scanf("%d", &a[i]);
        
        int max = a[n - 1];
        
        int *tmp = (int *)malloc(n * sizeof(int));
        int res = 0;
        
        for (int i = n - 2; i >= 0; --i) {
            if (a[i] > a[i + 1]) {
                tmp[res++] = a[i];
                // printf("%d ", a[i]);
            }
            a[i] = (a[i] > a[i + 1]) ? a[i] : a[i + 1];
        }
        
        for (int i = res - 1; i >= 0; --i)
            printf("%d ", tmp[i]);
        printf("%d", a[n - 1]);
        printf("\n");
        free(tmp);
    }
    
    return 0;
}
