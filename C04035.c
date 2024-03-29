#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int n;
    scanf("%d", &n);
    int sum_u = 0, sum_d = 0, min_d = 1e9, min_u = 1e90;
    while(n--){
        int u, d;
        scanf("%d%d", &u, &d);
        sum_u += u;
        sum_d += d;
        if(min_d > d) min_d = d;
        if(min_u > u) min_u = u;
    }
    if(sum_u >= sum_d)
        printf("%d", sum_u + min_d);
    else
        printf("%d", sum_d + min_u);
    return 0;
}