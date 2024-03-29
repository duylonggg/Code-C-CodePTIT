#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define ll long long

typedef struct{
    int numb;
    int appear;
} Element;

int cmp(Element* a, Element* b){
    if(a->numb == b->numb)
        return a->appear > b->appear;
    return a->numb > b->numb;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        Element ele[n];
        for(int i = 0; i < n; ++i){
            int x;
            scanf("%d", &x);
            ele[i].appear = i;
            ele[i].numb = x;
        }
        qsort(ele, n, sizeof(Element), cmp);
        // for(int i = 0; i < n; ++i)
        //     printf("%d %d\n", ele[i].numb, ele[i].appear);
        int min_appear = 1e9 + 7, ans = 0;
        for(int i = 0; i < n - 1; ++i){
            if(ele[i].numb == ele[i + 1].numb && ele[i].appear < min_appear){
                ans = ele[i].numb;
                min_appear = ele[i].appear;
            }
        }
        if(min_appear == 1e9 + 7)
            printf("NO\n");
        else
            printf("%d\n", ans);
    }
    return 0;
}