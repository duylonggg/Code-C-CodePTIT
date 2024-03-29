#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[10005];
    char k[10005];
    gets(s);
    gets(k);
    int lengK = strlen(k);
    char *p;
    p = strtok(s, " ");
    while (p)
    {
        int lengP = strlen(p);
        if(lengP != lengK || strcmp(p, k))
            printf("%s ", p);
        p = strtok(NULL, " ");
    }
}