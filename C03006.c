#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int t, cnt = 1;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        printf("Test %d: ", cnt++);
        for(int fac = 2; fac * fac <= n; ++fac){
            int cnt = 0;
            while(n % fac == 0){
                ++cnt;
                n /= fac;
            }
            if(cnt)    
                printf("%d(%d) ", fac, cnt);
        }
        if(n > 1)
            printf("%d(1)", n);
        printf("\n");
    }
    return 0;
}