#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d\n", &t);
    while(t--){
        char s[105];
        gets(s);
        char *p;
        p = strtok(s, " ");
        char name[100][100];
        int cnt = 0;
        while (p)
        { 
            p[0] = toupper(p[0]);
            for(int i = 1; i <= strlen(p); ++i)
                p[i] = tolower(p[i]);
            strcpy(name[cnt++], p);
            p = strtok(NULL, " ");
        }
        for(int i = 1; i < cnt; ++i){
            printf("%s", name[i]);
            if(i != cnt - 1)
                printf(" ");
        }
        for(int i = 0; i < strlen(name[0]); ++i)
            name[0][i] = toupper(name[0][i]);
        printf(", %s", name[0]);
        printf("\n");
    }
    return 0;
}