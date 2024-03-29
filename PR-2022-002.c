#include <stdio.h>
#include <math.h>

int is_prime(int n){
    if(n <= 1)
        return 0;
    if(n <= 3)
        return 1;
    if(n % 2 == 0 || n % 3 == 0)
        return 0;
    for(int i = 5; i * i <= n; i += 6)
        if(n % i == 0 || n % (i + 2) == 0)
            return 0;
    return 1;
}

int rotate(int n) {
    int last = n % 10;
    n /= 10;
    n += last * pow(10, (int) log10(n) + 1);
    return n;
}

int check(int n, int numb){
    while (numb--) {
        n = rotate(n);
        if(!is_prime(n))
            return 0;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int numb = (int) log10(n) + 1;
        printf("%d ", check(n, numb));
    }
    return 0;
}