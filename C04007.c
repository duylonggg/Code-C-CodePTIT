// C04007
#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n], b[m];
    for(int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    for(int i = 0; i < m; ++i)
        scanf("%d", &b[i]);
    int k;
    scanf("%d", &k);
    for(int i = 0; i < k; ++i)
        printf("%d ", a[i]);
    for(int i = 0; i < m; ++i)
        printf("%d ", b[i]);
    for(int i = k; i < n; ++i)
        printf("%d ", a[i]);
    return 0;
}