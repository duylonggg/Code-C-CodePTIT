#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void change(char s[], int freq[]){
    char*p;
    p = strtok(s, " \n");
    while(p){
        char tmp[100005] = {};
        for(int i = 0; i < strlen(p); ++i)
            if(p[i] == '*')
                strncpy(tmp, p, i);

        char mu[100005] = {};
        for(int i = strlen(p) - 1; i >= 0; --i)
            if(p[i] == '^')
                strncpy(mu, p + i + 1, strlen(p) - i);

        // puts(tmp);
        // puts(mu);
        
        freq[atoi(mu)] += atoi(tmp);

        p = strtok(NULL, " \n");
    }
}

int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        char s1[100005];
        char s2[100005];
        gets(s1);
        scanf("\n");
        gets(s2);
        scanf("\n");
        int freq[100005] = {};
        change(s1, freq);
        change(s2, freq);
        int ok = 0;
        for(int i = 100005 - 1; ~i; --i){
            if(ok && freq[i])
                printf(" + %d*x^%d", freq[i], i);
            else if(freq[i]){
                printf("%d*x^%d", freq[i], i);
                ok = 1;
            }
        }
        printf("\n");
    }
    return 0;
}