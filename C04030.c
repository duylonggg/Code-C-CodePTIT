// C04030
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ll long long

int compare(const void *a, const void *b) {
    int *x = (int *) a;
    int *y = (int *) b;
    return (*x - *y);
}


int main(){
    int t;
    scanf("%d", &t);
    int cnt = 1;
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n], b[n], c[n * 2];
        for(int i = 0; i < n; ++i) scanf("%d", &a[i]);
        for(int i = 0; i < n; ++i) scanf("%d", &b[i]);
        qsort(a, n, sizeof(int), compare);
        qsort(b, n, sizeof(int), compare);
        int cnt_a = 0;
        int cnt_b = n - 1;
        printf("Test %d:\n", cnt++);
        for(int i = 0; i < 2 * n; ++i){
            if(i % 2 == 0)
                printf("%d ", a[cnt_a++]);
            else
                printf("%d ", b[cnt_b--]);
        }
        printf("\n");
    }
    return 0;
}