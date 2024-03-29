#include <stdio.h>
#include <math.h>

#define ll long long

typedef struct{
    int t;
    int d;
} People;

void sort(People p[], int n){
    People tmp;
    for(int i = 0; i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
            if(p[i].t > p[j].t){
                tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    People p[n + 1];
    for(int i = 0; i < n; ++i)
        scanf("%d%d", &p[i].t, &p[i].d);
    sort(p, n);
    int ans = p[0].t;
    p[n].t = 0;
    for(int i = 0; i < n; ++i){
        ans += p[i].d;
        if(ans <= p[i + 1].t) ans = p[i + 1].t;
    }
    printf("%d", ans);
    return 0;
}