#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define endl printf("\n")

void sort(char tmp[2505][5005], int idx){
    char t[100];
    for(int i = 0; i < idx; ++i){
        for(int j = 0; j < idx; ++j){
            if(strcmp(tmp[i], tmp[j]) < 0){
                strcpy(t, tmp[i]);
                strcpy(tmp[i], tmp[j]);
                strcpy(tmp[j], t);
            }
        }
    }
}

int main()
{
    char str1[5005];
    gets(str1);
    char *tok1;
    tok1 = strtok(str1, " \n");
    char token1[2505][5005];
    int cnt1 = 0;
    while (tok1)
    {
        int cnt = 1;
        for(int i = 0; i < cnt1; ++i)
            if(strcmp(token1[i], tok1) == 0)
                cnt = 0;
        if(cnt)
            strcpy(token1[cnt1++], tok1);
        tok1 = strtok(NULL, " \n");
    }

    char str2[5005];
    gets(str2);
    char *tok2;
    tok2 = strtok(str2, " \n");
    char token2[2505][5005];
    int cnt2 = 0;
    while (tok2)
    {
        strcpy(token2[cnt2++], tok2);
        tok2 = strtok(NULL, " \n");
    }

    char tmp[2505][5005];
    int idx = 0;
    for (int i = 0; i < cnt1; ++i)
    {
        int ok = 1;
        for (int j = 0; j < cnt2; ++j)
            if (strcmp(token1[i], token2[j]) == 0)
                ok = 0;
        if (ok)
            strcpy(tmp[idx++], token1[i]);
    }

    sort(tmp, idx);
    for(int i = 0; i < idx; ++i)
        printf("%s ", tmp[i]);
    return 0;
}