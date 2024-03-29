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
    if(cnt == 1)
        return 0;
    return cnt == n;
}

void swap(int* a, int* b){
    if(*a <= *b) 
        return;
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    for(int i = a; i <= b; ++i)
        if(perfect(i))
            printf("%d ", i);
    return 0;
}