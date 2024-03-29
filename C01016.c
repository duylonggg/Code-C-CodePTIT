#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define ll long long

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= 10; ++i)
        printf("%d ", n * i);
    return 0;
}