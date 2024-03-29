#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int min1 = (a > b) * b + (a <= b) * a;
    int min2 = (min1 > c) * c + (min1 <= c) * min1;
    printf("%d", min2);
    return 0;
}