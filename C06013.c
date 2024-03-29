#include <stdio.h>
#include <math.h>

#define ll long long

int trick_lo(char s[]){
    int f[10] = {};
    for(int i = 0; i < strlen(s); ++i){
        if(s[i] < '0' || s[i] > '9' || s[0] == '0')
            return -1;
        ++f[s[i] - '0'];
    }
    for(int i = 0; i < 10; ++i)
        if(f[i] == 0)
            return 0;
    return 1;
}

int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        char s[1005];
        gets(s);
        if(trick_lo(s) == -1)
            printf("INVALID\n");
        else if(trick_lo(s) == 1)
            printf("YES\n");
        else    
            printf("NO\n");
    }
    return 0;
}