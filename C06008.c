#include <stdio.h>
#include <string.h>

int check(char tok[1005][1005], int cnt, char s[])
{
    for (int i = 0; i < cnt; ++i)
        if (strcmp(tok[i], s) == 0)
            return 0;
    return 1;
}

int main()
{
    char s[1005];
    char tok[1005][1005];
    int cnt = 0;
    while (scanf("%s", s) != -1)
    {
        if (check(tok, cnt, s))
        {
            strcpy(tok[cnt++], s);
            printf("%s ", s);
        }
    }
    return 0;
}