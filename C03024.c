#include <stdio.h>
#include <math.h>

#define ll long long

int sum(int a){
    int total = 0;
    while(a){
        total += a % 10;
        a /= 10;
    }
    return total;
}

void swap(int* a, int* b){
    if(sum(*a) <= sum(*b))
        return;
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("%d %d", a, b);
    return 0;
}