// C04009
#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; ++i)
        if(!(a[i] & 1)) 
            printf("%d ", a[i]);
    printf("\n");  
    for(int i = 0; i < n; ++i)
        if((a[i] & 1)) 
            printf("%d ", a[i]);
    return 0;
}