#include <stdio.h>
#include <string.h>

int check(char s[]){
    int t, l = strlen(s) + 1, up = 0;
    for(int i = l - 2; ~i; --i){
        t = s[i] - '0';
        if((t * l + up) % 10 != 9) return 0;
        up = (t * l + up) / 10;
    }
    return 1;
}

int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        char s[100];
        scanf("%s", s);
        printf("%s\n", check(s) ? "YES" : "NO");
    }
    return 0;
}