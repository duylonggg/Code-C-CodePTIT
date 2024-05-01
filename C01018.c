#include <stdio.h>
#include <math.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        printf((sqrt(n) == (int) sqrt(n) ? "YES\n" : "NO\n"));
    }
    return 0;
}