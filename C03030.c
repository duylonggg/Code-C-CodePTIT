#include <stdio.h>

#define ll long long

int check(int n){
    int c = n % 10;
    n /= 10;
    while(n){
        int b = n % 10;
        if(b > c) return 0;
        c = b;
        n /= 10;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a = (int) pow(10, n - 1);
        int b = (int) pow(10, n);
        for(int i = a; i <= b; ++i)
            if(check(i))
                printf("%d ", i);
        printf("\n");
    }
    return 0;
}
