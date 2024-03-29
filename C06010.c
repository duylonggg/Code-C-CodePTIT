#include <stdio.h>
#include <math.h>

#define ll long long

int even(char s[]){
    for(int i = 0; i < strlen(s); ++i)
        if((s[i] - '0') & 2 != 0)
            return 0;
    return 1;
}

int rv(char s[]){
    for(int i = 0; i < strlen(s) / 2; ++i)
        if(s[i] != s[strlen(s) - i - 1])
            return 0;
    return 1;
}

int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        char s[600];
        gets(s);
        printf("%s\n", (even(s) && rv(s)) ? "YES" : "NO");
    }
    return 0;
}