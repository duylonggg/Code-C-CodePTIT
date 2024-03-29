#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", (int) log10(n) + 1);
    return 0;
}