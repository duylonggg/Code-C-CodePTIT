#include <stdio.h>

int perfect(int n){
    int cnt = 1;
    float sqr = sqrt(n);
    for(int i = 2; i <= sqr; ++i){
        if(i == sqr){
            if(n % i == 0)
                cnt += i;
        }
        else
            if(n % i == 0) cnt += i + (n / i);
    }
    return cnt == n;
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 2; i <= n; ++i)
        if(perfect(i))
            printf("%d ", i);
    return 0;
}