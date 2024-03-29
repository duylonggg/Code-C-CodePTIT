#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 

#define ll long long

int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        int n;
        int odd = 0, even = 0, cnt = 0;
        char s[1000];
        fgets(s, sizeof(s), stdin); 
        char *p;
        p = strtok(s, " \n");
        while(p){
            ++cnt;
            if(*p != '\0') { 
                int tmp = atoi(p);
                if(tmp & 1) ++odd;
                else ++even;
            }
            p = strtok(NULL, " \n");
        }
        if(cnt & 1 && odd > even) printf("YES\n");
        else if(!(cnt & 1) && odd < even) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
