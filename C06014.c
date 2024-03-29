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
        while (p)
        { 
            p[0] = toupper(p[0]);
            for(int i = 1; i <= strlen(p); ++i)
                p[i] = tolower(p[i]);
            printf("%s", p);
            p = strtok(NULL, " ");
            if(p)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}