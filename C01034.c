#include <stdio.h>
#include <math.h>

int main(){
    int a, b, cnt = 0;
    scanf("%d%d", &a, &b);
    for(int i = 1; i <= sqrt(1000000000); ++i)
        cnt += (i * i >= a && i * i <= b);
    printf("%d\n", cnt);
    for(int i = 1; i <= sqrt(1000000000); ++i)
        if(i * i >= a && i * i <= b)
            printf("%d\n", i * i);
    return 0;
}