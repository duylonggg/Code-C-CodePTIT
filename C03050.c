#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int n, x, y;
    scanf("%d", &n);
    int a[n - 1];
    int b[n - 1];
    for(int i = 0; i < n - 1; ++i){
        scanf("%d%d", &x, &y);
        if(x > y){
            a[i] = y;
            b[i] = x;
        }
        else{
            a[i] = x;
            b[i] = y;
        }
    }
    int x_max = 0, y_min = 1e6;
    for(int i = 0; i < n - 1; ++i)
        if(a[i] > x_max)
            x_max = a[i];
    for(int i = 0; i < n - 1; ++i)
        if(b[i] < y_min)
            y_min = b[i];
    printf("%s", y_min - x_max >= 0 ? "Yes" : "No");
    return 0;
}