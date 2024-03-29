#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define ll long long

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(b)
        printf("%d %d %d %.2f %d", a + b, a - b, a * b, 1.0 * a / b, a % b);
    else 
        printf("0");
    return 0;
}