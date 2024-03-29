#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define ll long long

int main(){
    int n;
    scanf("%d", &n);
    int y = n / 365;
    int w = (n - y * 365) / 7;
    int d = n - w * 7 - y * 365;
    printf("%d %d %d", y, w, d);
    return 0;
}