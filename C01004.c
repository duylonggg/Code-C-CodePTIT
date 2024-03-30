#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        printf("%.15lf\n", 1.0 * 1 / n);
    }
    return 0;
}