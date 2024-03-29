#include <stdio.h>
#include <math.h>

#define ll long long

int start_end(char s[]){
    return (s[0] == '8' && s[strlen(s) - 1] == '8');
}

int rv(char s[]){
    for(int i = 0; i < strlen(s) / 2; ++i)
        if(s[i] != s[strlen(s) - i - 1])
            return 0;
    return 1;
}

int sum(char s[]){
    int total = 0;
    for(int i = 0; i < strlen(s); ++i)
        total += (s[i] - '0');
    return (total % 10 == 0);
}

int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        char s[600];
        gets(s);
        printf("%s\n", (start_end(s) && rv(s) && sum(s)) ? "YES" : "NO");
    }
    return 0;
}