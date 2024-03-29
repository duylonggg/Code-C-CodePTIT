#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define endl printf("\n")

int main(){
    int cnt = 0;
    char s[105] = {};
    char token[105][105] = {};
    gets(s);
    char* p;
    p = strtok(s, " ");
    while(p){
        for(int i = 0; i < strlen(p); ++i)
            p[i] = tolower(p[i]);
        strcpy(token[cnt++], p);
        printf("%c", p[0]);
        p = strtok(NULL, " ");
    }
    for(int i = 1; i < 105; ++i)
        if(token[cnt - 1][i])
            printf("%c", token[cnt - 1][i]);
    printf("@ptit.edu.vn");
    return 0;
}