#include <stdio.h>
 
int factorial(int n){
    int i;
    for(i = 1; n > 1; --n)
        i *= n;
    return i;
}
 
int pascal(int n, int r) {
    return factorial(n) / (factorial(n - r) * factorial(r));
}
 
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++)
            printf("%d ", pascal(i, j));
        printf("\n\n");
    }
    return 0;
}