#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, x;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; ++i){
            scanf("%d", &a[i]);
        }
        int cnt = 0;
        for(int i = 1; i < n; ++i){
            cnt += (a[i] == a[i - 1]);
        }
        printf("%d\n", cnt);
    }
    return 0;
}