#include <stdio.h>
#include <math.h>

#define ll long long

int rv(char s[]){
    for(int i = 0; i < strlen(s) / 2; ++i)
        if(s[i] != s[strlen(s) - i - 1])
            return 0;
    return 1;
}

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

int check(char s[]){
    for(int i = 0; i < strlen(s); ++i)
        if(is_prime(s[i] - '0') == 0)
            return 0;
    return 1;
}

int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        char s[600];
        gets(s);
        printf("%s\n", (check(s) && rv(s)) ? "YES" : "NO");
    }
    return 0;
}