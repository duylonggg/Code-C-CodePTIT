#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        int cnt = 0;
        char s[300];
        fgets(s, sizeof(s), stdin);
        char *p;
        p = strtok(s, " \n");
        while(p){
            ++cnt;
            p = strtok(NULL, " \n");
        }
        printf("%d\n", cnt);
    }
    return 0;
}