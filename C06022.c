#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int t;
    scanf("%d\n", &t);
    int cnt = 1;
    while(t--){
        char s[10005];
        char k[10005];
        gets(s);
        gets(k);
        int lengK = strlen(k);
        printf("Test %d: ", cnt++);
        char *p;
        p = strtok(s, " ");
        while (p)
        {
            int lengP = strlen(p);
            if(lengP != lengK || strcasecmp(p, k))
                printf("%s ", p);
            p = strtok(NULL, " ");
        }
        printf("\n");
    }
    return 0;
}