#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define ll long long

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(a) printf("%.2f", -1.0 * b / a);
    else printf((b ? "Vo nghiem" : "Vo so nghiem"));
    return 0;
}