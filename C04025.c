#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ll long long

int cmp(int *a, int *b) {
    return (*a - *b);
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    
    // Dynamic Memory
    int* odd = (int*) malloc(n * sizeof(*odd));
    int* even = (int*) malloc(n * sizeof(*even));
    int cnt_o = 0, cnt_e = 0;

    for(int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
        if(a[i] & 1)
            odd[cnt_o++] = a[i];
        else
            even[cnt_e++] = a[i];
    }

    odd = (int*) realloc(odd, cnt_o * sizeof(*odd));
    even = (int*) realloc(even, cnt_e * sizeof(*even));

    qsort(odd, cnt_o, sizeof(*odd), cmp);
    qsort(even, cnt_e, sizeof(*even), cmp);

    for(int i = 0; i < cnt_e; ++i)
        printf("%d ", even[i]);
    for(int i = 0; i < cnt_o; ++i)
        printf("%d ", odd[i]);

    free(odd);
    free(even);
    return 0;
}