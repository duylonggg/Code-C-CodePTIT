#include <stdio.h>
#include <string.h>

int main(){
    char s[100005];
    gets(s);
    char max = 'a';
    int cnt = 0;
    char ans[100005];
    for(int i = strlen(s) - 1; i >= 0; --i){
        if(s[i] >= max){
            ans[cnt++] = s[i];
            max = s[i];
        }
    }
    for(int i = cnt - 1; i >= 0; --i)
        printf("%c", ans[i]);
    return 0;
}