#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int first = n / (pow(10, (int) log10(n)));
    int last = n % 10;
    n -= first * pow(10, (int) log10(n)) + n % 10;
    n += last * pow(10, (int) log10(n) + 1) + first;
    printf("%d", n);
    return 0;
}