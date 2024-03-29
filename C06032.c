#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        int n;
        scanf("%d\n", &n);
        char s[100][100];
        for(int i = 0; i < n; ++i)
            scanf("%s", &s[i]);
        for(int i = 0; i < n - 1; ++i){
            char tmp1[100], tmp2[100];
            for(int j = i + 1; j < n; ++j){
                strcpy(tmp1, s[i]);
                strcat(tmp1, s[j]);
                strcpy(tmp2, s[j]);
                strcat(tmp2, s[i]);
                if(strcmp(tmp1, tmp2) > 0){
                    strcpy(tmp1, s[i]);
                    strcpy(s[i], s[j]);
                    strcpy(s[j], tmp1);
                }
            }
        }
        for(int i = 0; i < n; ++i)
            printf("%s", s[i]);
        printf("\n");
    }
    return 0;
}